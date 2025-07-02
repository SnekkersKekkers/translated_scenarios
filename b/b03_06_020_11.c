BGOpen("wf200",0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ChLayout(1);
ScrFadeIn(0);
MsgSel("Want to walk on the brick road?","Want to go to the wharf?");
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
    VoicePlay("B030602002_06_020");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    MsgDisp("Himuro","I hope there's no one loud around.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0);
    MsgClose();
    ChClose(6,0,0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
