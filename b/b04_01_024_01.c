ChEye(1,2);
ChMouth(1,1);
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
SEPlay("EV_SE_518");
SEWait();
ChLayout(1);
MsgClose();
ChOpen(1,255,0,2,2,7,#1,0,0);
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("B040102401_01_000");
MsgDisp("Kazama","That's terrible. What was that, a hacksaw
to cutting something?");
MsgSel("It's like something's about to happen…","That's the sound of our image","Is it broken?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(0);
    ChEye(1,1);
    ChMouth(1,1);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040102401_01_010");
    MsgDisp("Kazama","Something already did happen.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,3);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040102401_01_020");
    MsgDisp("Kazama","Jeez, that's like...
The sound of the world coming to an end.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,#1);
    VoicePlay("B040102401_01_030");
    MsgDisp("Kazama","Oh, that's got to be it.
There's no way that we sound
like that.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
