EnvAutoSet(0);
EnvPlay("SE_ENV_BG_WF720_CO2",0.5);
BGOpen("wf710",2);
ChLayout(1);
MsgClose();
ChOpen(3,33,1,3,0,0,-1,0,0);
ScrFadeIn(0);
VoicePlay("B040306500_03_000");
MsgDisp("Honda","Yep yep, this is it!");
MsgSel("Summer's hallmark that colours the night sky! Tamayaa～!","Ah, look! There's a big heart shape∈","It'll be lonely when it ends");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChSet(3,3);
    VoicePlay("B040306500_03_010");
    MsgDisp("Honda","Kagーyaー!
It's a feeling of Japan's summer.");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("B040306500_03_020");
    MsgDisp("Honda","Yep yep.
Whether you look at it from above,
below, it's heart-shaped no matter
which way you look at it.");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(3,1);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("B040306500_03_030");
    MsgDisp("Honda","Hey concentrate with all your
might whilst the fun continues!");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
EnvAutoSet(1);
