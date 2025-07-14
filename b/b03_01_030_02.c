BGOpen("wf300",0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B030103002_01_000");
MsgDisp("Kazama","Seems we can spend our time anywhere, huh?");
MsgSel("Let's go to the aquarium.","Water Garden sounds nice.","Let's go to the Deep Sea Corner.");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B030103002_01_010");
    MsgDisp("Kazama","That's a good, safe choice.");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B030103002_01_020");
    MsgDisp("Kazama","Okay, let's go.
That's an outdoor facility.");
    MsgDispSksp(0);
    break ;
    case 2:
    MsgDispSksp(1,0);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("B030103002_01_030");
    MsgDisp("Kazama","We're setting off for the seabed, right?");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
