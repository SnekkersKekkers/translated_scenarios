BGOpen("wf100",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChSet(3,0,1);
ScrFadeIn(0);
VoicePlay("B030301001_03_000");
MsgDisp("Honda","Is there a shop you're interested in?");
MsgDisp("主人公","Let's see...");
MsgSel("How about that store?","Sky lounge sounds nice.");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("B030301001_03_010");
    MsgDisp("Honda","Alright. Let's find out the source of your
interest.");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("B030301001_03_010");
    MsgDisp("Honda","Alright. Let's find out the source of your
interest.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
