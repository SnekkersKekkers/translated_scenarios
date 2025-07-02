BGOpen("wf100",0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ChLayout(1);
ScrFadeIn(0);
BGMPlay("BGM_PLACE_SHOP",0.01);
VoicePlay("B030601001_06_000");
MsgDisp("Himuro","Where are we going?");
MsgDisp("主人公","Uhm......");
MsgSel("How about that restaurant?","The sky lounge is nice");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("B030601001_06_010");
    MsgDisp("Himuro","Got it.
Let's go, then.");
    MsgDispSksp(1,0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B030601001_06_020");
    MsgDisp("Himuro","Got it.
Let's go, then.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
