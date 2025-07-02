EnvAutoSet(0);
EnvPlay("SE_ENV_BG_WF720_CO2",0.5);
BGOpen("wf710",2);
ChLayout(1);
MsgClose();
ChOpen(2,33,3,0,3,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("B040206500_02_000");
MsgDisp("Sassa","You can really feel it in your body
when you're this close!");
MsgSel("A summer tradition to color the night sky！　Tamaya～！","Ah, look！It's shaped like a heart∈","I'm sad it's ending.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3,1);
    VoicePlay("B040206500_02_010");
    MsgDisp("Sassa","Kagiya～!");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040206500_02_020");
    MsgDisp("Sassa","Yeah, that's some amazing 
technology.");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040206500_02_030");
    MsgDisp("Sassa","When the firework show ends, it
really feels like summer vacation is
over.");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
EnvAutoSet(1);
