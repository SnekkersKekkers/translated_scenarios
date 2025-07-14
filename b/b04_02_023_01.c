MsgClose();
ChOpen(2,255,3,0,3,#1,#1,0,0);
VoicePlay("B040202301_02_000");
MsgDisp("Sassa","I just saw a big shadowy fish.");
MsgSel("Eh, that's scary","I want to try catching it","Did you see wrong?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(2,2);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("B040202301_02_010");
    MsgDisp("Sassa","What do you mean scary?
Are you really that type?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("B040202301_02_020");
    MsgDisp("Sassa","I didn't know you had that kind of hobby.
That's surprising.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,1);
    VoicePlay("B040202301_02_030");
    MsgDisp("Sassa","No, it was there.
I have good eyesight.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
