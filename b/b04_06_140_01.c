BGOpen("ne210",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040614001_06_000");
MsgDisp("Himuro","Each time I come here, my heart starts
thudding.");
MsgSel("You get palpitations?","That felt like a shock to the system to me.","Really, are you okay?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(6,1);
    ChMouth(6,1);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040614001_06_010");
    MsgDisp("Himuro","That joke isn't just nonsense, there's no
sense.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(4);
    ChEye(6,3);
    ChMouth(6,3);
    ChMotion(6,3);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040614001_06_020");
    MsgDisp("Himuro","Do you feel a rush of adrenaline? I wonder
if it's stimulating for both of us? This
experience is hard to come by.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,4);
    VoicePlay("B040614001_06_030");
    MsgDisp("Himuro","I might not be alright.
It was that amazing.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
