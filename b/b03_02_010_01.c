BGOpen("wf100",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B030201001_02_000");
MsgDisp("Sassa","Where do you want to look around at?");
MsgDisp("主人公","Let's see...");
MsgSel("How about that store?","Sky lounge sounds nice.");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    MsgDispSksp(1,0);
    VoicePlay("B030201001_02_010");
    MsgDisp("Sassa","Alright.
Girls like to shop.");
    MsgDispSksp(0);
    break ;
    case 1:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    MsgDispSksp(1,0);
    VoicePlay("B030201001_02_020");
    MsgDisp("Sassa","Alright.
Then let's go.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
