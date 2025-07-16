BGOpen("tr200",0);
ChEye(4,0);
ChMouth(4,4);
ChMotion(4,0);
ScrFadeIn(0);
MsgSel("Want to check out the gift shop?","Let's go to the Woof Meow House","Don't ask");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B030421002_04_000");
    MsgDisp("Nanatsumori","ＯＫ.
I get excited in places with a ton of
items.");
    MsgDispSksp(0);
    break ;
    case 1:
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,3,1);
    ChCheek(4,8);
    VoicePlay("B030421002_04_010");
    MsgDisp("Nanatsumori","I do like cats...
Let's go.");
    MsgDispSksp(1,0);
    MsgDisp("主人公","Hehe, okay!");
    MsgDispSksp(0);
    break ;
    case 2:
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("B030421002_04_020");
    MsgDisp("Nanatsumori","Today's optimal route is, here.
... Well, let's get a move on.");
    MsgDispSksp(1,0);
    MsgDisp("主人公","Yeah!");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
