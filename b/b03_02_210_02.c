BGOpen("tr200",0);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0,1);
ChLayout(1);
ScrFadeIn(0);
MsgSel("Want to check out the gift shop?","Let's go to the Woof Meow House","Don't ask");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B030221002_02_000");
    MsgDisp("Sassa","Ooh, you looking for something in
particular?");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B030221002_02_010");
    MsgDisp("Sassa","Sounds good.
I can teach you how to hold them.
Let's go.");
    MsgDispSksp(0);
    break ;
    case 2:
    MsgDispSksp(1,0);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B030221002_02_020");
    MsgDisp("Sassa","Then let's head in.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
