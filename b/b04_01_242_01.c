BGOpen("tr520",0);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040124201_01_000");
MsgDisp("Kazama","Then, let's start right away.
I'm counting on you to prepare
the vegetables.");
MsgSel("Let's have tomato curry for lunch!","This kitchen knife seems very sharp.","Let's just throw these vegetables into the curry as they are");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,4);
    ChMouth(1,4);
    ChMotion(1,4);
    ChEyeOpenLevel(1,0);
    ChCheek(1,5);
    VoicePlay("B040124201_01_010");
    MsgDisp("Kazama","O-Oh, nice.
It kinda... feels like we're 
living together, doesn't it?");
    MsgDispSksp(1,0);
    ChEyeOpenLevel(1,-1);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,1);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040124201_01_020");
    MsgDisp("Kazama","That's why you need to stop
raising weird danger flags.
You're banned from knives today.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(0);
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0,1);
    ChEyeOpenLevel(1,7);
    VoicePlay("B040124201_01_030");
    MsgDisp("Kazama","Are you trying to slack off?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
