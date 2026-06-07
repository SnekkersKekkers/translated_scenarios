BGOpen("wf200",0);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0,1);
ChLayout(1);
ScrFadeIn(0);
MsgSel("Want to take a walk on the brick road?","Want to go to the wharf?","I want to ride the sightseeing boat.");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    VoicePlay("B030202002_02_000");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    MsgDisp("Sassa","You got it.
Alright, let's wander around.");
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
What was that place like again?");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    MsgClose();
    ScrFadeOut(0);
    MsgClose();
    ChClose(2,0,0);
    break ;
    case 2:
    VoicePlay("B030202002_02_010");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    MsgDisp("Sassa","Doesn't that sound nice?
Let's go.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0);
    ChEye(2,0);
    ChMouth(2,0);
    BGOpen("wf220",0);
    Wait(40);
    ScrFadeIn(0);
    MsgDispSksp(1,0);
    VoicePlay("B030202002_02_020");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3,1);
    MsgDisp("Sassa","I knew it would pack a punch.
Look at how fast it's going.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
