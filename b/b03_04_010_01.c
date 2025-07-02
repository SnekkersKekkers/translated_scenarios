BGOpen("wf100",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChLayout(1);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
ScrFadeIn(0);
VoicePlay("B030401001_04_000");
MsgDisp("Nanatsumori","... So.
Where are we headed?");
MsgDisp("主人公","Let's see...");
MsgSel("How about that store?","Sky lounge sounds nice.");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    VoicePlay("B030401001_04_010");
    MsgDisp("Nanatsumori","ＯＫ.");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    VoicePlay("B030401001_04_020");
    MsgDisp("Nanatsumori","ＯＫ.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
