BGOpen("wf200",0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ChLayout(1);
ScrFadeIn(0);
MsgSel("Want to walk on the brick road?","Want to go to the docks?","Let's take the cruise");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    VoicePlay("B030602002_06_000");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,1);
    MsgDisp("Himuro","In that case, this way.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    break ;
    case 1:
    MsgDispSksp(1,0);
    VoicePlay("B030602002_06_020");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    MsgDisp("Himuro","I hope none of those excitable
guys are around.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0);
    ChClose(6,0,0);
    break ;
    case 2:
    MsgDispSksp(1,0);
    VoicePlay("B030602002_06_010");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,1);
    MsgDisp("Himuro","That's good.
Come, let's go.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
