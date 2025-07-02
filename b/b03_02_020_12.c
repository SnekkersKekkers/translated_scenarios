BGOpen("wf200",0);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0,1);
ChLayout(1);
ScrFadeIn(0);
MsgSel("Want to walk the brick road?","I want to ride the boat.");
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
    VoicePlay("B030202001_02_010");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    MsgDisp("Sassa","The boat, alright.
Let's go.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0);
    ChEye(2,0);
    ChMouth(2,0);
    BGOpen("wf220",0);
    MsgClose();
    ScrFadeOut(0);
    Wait(40);
    ScrFadeIn(0);
    MsgDispSksp(1,0);
    VoicePlay("B030202001_02_020");
    ChEye(2,0);
    ChMouth(2,2);
    ChMotion(2,0);
    MsgDisp("Sassa","Whoa, that's impressive.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
