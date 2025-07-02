SEPlay("EV_SE_518");
SEWait();
ChLayout(1);
MsgClose();
ChOpen(2,255,4,0,4,-1,-1,0,0);
ChEye(2,0);
ChMouth(2,2);
ChMotion(2,4);
VoicePlay("B040202401_02_000");
MsgDisp("Sassa","That sounded a bit weird......");
MsgSel("Maybe it's something special?","That was a failure, I think","One more try!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040202401_02_010");
    MsgDisp("Sassa","I don't mind that positivity.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("B040202401_02_020");
    MsgDisp("Sassa","Was it a success or a failure?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040202401_02_030");
    MsgDisp("Sassa","Yeah.
I'm curious if we'll get something
different this time.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
