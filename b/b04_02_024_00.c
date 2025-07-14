SEPlay("EV_SE_517");
Wait(110,0);
ChLayout(1);
MsgClose();
ChOpen(2,255,4,0,2,#1,#1,0,0);
ChEye(2,0);
ChMouth(2,2);
ChMotion(2,4);
SEStop("EV_SE_517",2);
VoicePlay("B040202400_02_000");
MsgDisp("Sassa","Eh. It looks completely different from how
it sounds. Cute.");
MsgSel("It's soothing","I wonder how it works","Just like you.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,2);
    ChMotion(2,4,1);
    VoicePlay("B040202400_02_010");
    MsgDisp("Sassa","Eh?
Is it making you sleepy?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040202400_02_020");
    MsgDisp("Sassa","It's important to ask those questions.
I want to know too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040202400_02_030");
    MsgDisp("Sassa","Are you calling me cute?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
