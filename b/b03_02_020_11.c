BGOpen("wf200",0);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0,1);
ChLayout(1);
ScrFadeIn(0);
MsgSel("Want to walk the brick road?","Want to go to the wharf?");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    VoicePlay("B030202001_02_000");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    MsgDisp("Sassa","Sure, want to take a stroll?");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    break ;
    case 1:
    MsgDispSksp(1,0);
    VoicePlay("B030202002_02_030");
    ChEye(2,0);
    ChMouth(2,2);
    ChMotion(2,4);
    MsgDisp("Sassa","The wharf...
I wonder what kind of place that is?");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0);
    MsgClose();
    ChClose(2,0,0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
