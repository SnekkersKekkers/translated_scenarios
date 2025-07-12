EnvAutoSet(0);
EnvPlay("SE_ENV_BG_WF720_CO2",0.5);
BGOpen("wf710",2);
MsgClose();
ChOpen(5,33,0,0,4,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040506500_05_000");
MsgDisp("Hiiragi","I'm glad, we made it in time.");
MsgSel("Summer's hallmark that colours the night sky! Tamayaa～!","Ah, look! There's a big heart shape∈","It'll be lonely when it ends");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040506500_05_010");
    MsgDisp("Hiiragi","Haha, it's stylish, isn't it?
Kaーgya～!");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChMouth(5,3);
    ChMotion(5,4);
    VoicePlay("B040506500_05_020");
    MsgDisp("Hiiragi","Yes, next up is the folding fan!
This is the work of an artisan.");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(5,2);
    VoicePlay("B040506500_05_030");
    MsgDisp("Hiiragi","Hey, don't make that expression.");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
EnvAutoSet(1);
