BGOpen("tr200",0);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0,1);
ScrFadeIn(0);
MsgSel("Want to check out the gift shop?","Let's go to the Woof Meow House.","Don't ask.");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B030121002_01_000");
    MsgDisp("Kazama","Sounds good, I want to get a souvenir.");
    MsgDispSksp(0);
    break ;
    case 1:
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("B030121002_01_010");
    MsgDisp("Kazama","So I guess the cats and dogs live
together, huh?");
    MsgDispSksp(1,0);
    MsgDisp("主人公","They probably enjoy it.");
    MsgDispSksp(0);
    break ;
    case 2:
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B030121002_01_020");
    MsgDisp("Kazama","Hey, we're gonna miss feeding time.");
    MsgDispSksp(1,0);
    MsgDisp("主人公","Whoa, ｛風真＊＊｝ wait up!");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
