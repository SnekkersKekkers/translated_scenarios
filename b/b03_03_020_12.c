BGOpen("wf200",0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ScrFadeIn(0);
MsgSel("Want to walk the brick road?","I want to ride the boat");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("B030302001_03_000");
    MsgDisp("Honda","Yeah, let's do it!
Do you wanna count the number of bricks?");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    break ;
    case 1:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B030302001_03_010");
    MsgDisp("Honda","Sure thing.
It's a good time to catch a nice ride out.
Let's go!");
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0);
    Wait(40);
    BGOpen("wf220",0);
    ScrFadeIn(0);
    MsgDispSksp(1,0);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4);
    VoicePlay("B030302001_03_020");
    MsgDisp("Honda","Looking out to the horizon and feeling the
sea breeze. Yup, there's nothing better!
Let's get on, then.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
