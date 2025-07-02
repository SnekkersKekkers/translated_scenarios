BGOpen("wf100",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChLayout(1);
ChEye(8,0);
ChMouth(8,0);
ChMotion(8,0);
ScrFadeIn(0);
ChMotion(8,2,1);
VoicePlay("B030801001_08_000");
MsgDisp("Shirahane","Alrighty then, where to?");
MsgDisp("主人公","Let's see...");
MsgSel("How about that store?","Sky lounge sounds nice");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(8,0);
    ChMouth(8,0);
    ChMotion(8,0,1);
    VoicePlay("B030801001_08_010");
    MsgDisp("Shirahane","Okay, let's go.");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(8,0);
    ChMouth(8,0);
    ChMotion(8,0,1);
    VoicePlay("B030801001_08_020");
    MsgDisp("Shirahane","Sounds good.
Then let's get goin'.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
