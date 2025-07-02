BGOpen("wf200",0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ChLayout(1);
ScrFadeIn(0);
MsgSel("Want to walk on the brick road?","I want to take the cruise");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    VoicePlay("B030602001_06_000");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    MsgDisp("Himuro","Sure.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    break ;
    case 1:
    MsgDispSksp(1,0);
    VoicePlay("B030602001_06_010");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    MsgDisp("Himuro","Yeah, that's good.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
