SEPlay("EV_SE_517");
Wait(110,0);
ChLayout(1);
MsgClose();
ChOpen(6,255,0,0,4,#1,#1,0,0);
SEStop("EV_SE_517",2);
VoicePlay("B040602400_06_000");
MsgDisp("Himuro","Hmm, that's a nice sound...");
MsgSel("It's wonderful...","Is it because you have a pure heart?","I was surprised!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040602400_06_010");
    MsgDisp("Himuro","It's a bit romantic.
The mood also gets full marks.
...Am I wrong?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("B040602400_06_020");
    MsgDisp("Himuro","In some way, I respect the fact you can be
that shameless.
Please continue the way you are.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040602400_06_030");
    MsgDisp("Himuro","Was it really that
surprising of a sound?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
