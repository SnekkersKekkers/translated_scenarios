BGOpen("wf200",0);
ChLayout(1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,2,1);
ChEyeOpenLevel(4,8);
ScrFadeIn(0);
MsgSel("Want to walk on the brick road?","Want to go to the wharf?");
switch (MsgSelRsltGet()){
    case 0:
    VoicePlay("B030402001_04_000");
    MsgDispSksp(1,0);
    ChMotion(4,0,1);
    ChEyeOpenLevel(4,#1);
    MsgDisp("Nanatsumori","The brick road.
We can walk it, but...");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    break ;
    case 1:
    VoicePlay("B030402002_04_020");
    MsgDispSksp(1,0);
    ChEye(4,5);
    ChMouth(4,4);
    ChMotion(4,1,1);
    ChEyeOpenLevel(4,10);
    MsgDisp("Nanatsumori","∋ But that place is a date spo— No,
nevermind.
...Let's go.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0);
    ChClose(4,0,0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
