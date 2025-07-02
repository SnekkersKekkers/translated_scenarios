BGOpen("wf300",0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("B030103001_01_000");
MsgDisp("Kazama","Water Garden, huh.
Are you interested?");
MsgSel("Let's go to the aquarium.","Water Garden sounds nice.");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B030103001_01_010");
    MsgDisp("Kazama","Alright, let's go.");
    MsgDispSksp(0);
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B030103001_01_020");
    MsgDisp("Kazama","If you're interested, let's go.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
