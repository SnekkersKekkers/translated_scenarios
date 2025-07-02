BGOpen("wf200",0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ScrFadeIn(0);
MsgSel("Want to walk the brick road?","Want to go to the wharf?");
MsgDispSksp(1,0);
switch (MsgSelRsltGet()){
    case 0:
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("B030302001_03_000");
    MsgDisp("Honda","Yeah, let's do that!
Do you wanna count the number of bricks?");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(3,3);
    ChMouth(3,0);
    ChMotion(3,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("B030302002_03_030");
    MsgDisp("Honda","Sounds good.
Just looking at that statue is fun.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0);
    ChClose(3,0,0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
