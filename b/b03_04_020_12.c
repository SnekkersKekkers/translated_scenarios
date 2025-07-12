BGOpen("wf200",0);
ChLayout(1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,2,1);
ChEyeOpenLevel(4,8);
ScrFadeIn(0);
MsgSel("Want to walk on the brick road?","I want to ride the boat");
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
    VoicePlay("B030402001_04_010");
    MsgDispSksp(1,0);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3,1);
    MsgDisp("Nanatsumori","Sightseeing boat.
Sounds good, let's go.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
