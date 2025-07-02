SEPlay("EV_SE_518");
SEWait();
ChLayout(1);
MsgClose();
ChOpen(6,255,0,0,2,-1,-1,0,0);
VoicePlay("B040602401_06_000");
MsgDisp("Himuro","...What's this.");
MsgSel("I was surprised!","Art is complicated...","Ahaha, what a weird sound!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040602401_06_010");
    MsgDisp("Himuro","Yeah.
It was a weird sound.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("B040602401_06_020");
    MsgDisp("Himuro","Maybe you can't understand it
with ordinary perception.
Art really is difficult to understand.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040602401_06_030");
    MsgDisp("Himuro","It's rude to laugh.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
