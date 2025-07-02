BGOpen("wf200",0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
MsgSel("Want to walk on the brick road?","I want to ride the boat.");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B030102001_01_000");
    MsgDisp("Kazama","Yeah, let's head on over.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("B030102001_01_010");
    MsgDisp("Kazama","Got it.
But watch your step.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
