BGOpen("wf100",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B030501001_05_000");
MsgDisp("Hiiragi","Where to?");
MsgDisp("主人公","Uhm......");
MsgSel("How about that store?","The sky lounge is nice");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChMouth(5,4);
    VoicePlay("B030501001_05_010");
    MsgDisp("Hiiragi","Of course, that's fine.");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B030501001_05_010");
    MsgDisp("Hiiragi","Of course, that's fine.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
