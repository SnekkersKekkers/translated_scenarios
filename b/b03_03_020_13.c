BGOpen("wf200",0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ScrFadeIn(0);
MsgSel("Want to walk the brick road?","Want to go to the wharf?","I want to ride the boat");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("B030302002_03_000");
    MsgDisp("Honda","Yeah, let's do that.
Kind of like sunbathing, huh?");
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
    case 2:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B030302002_03_010");
    MsgDisp("Honda","Then it's settled!");
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0);
    Wait(40);
    BGOpen("wf220",0);
    ScrFadeIn(0);
    MsgDispSksp(1,0);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B030302002_03_020");
    MsgDisp("Honda","It's exciting from the moment you
step up the ramp, isn't it?");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
