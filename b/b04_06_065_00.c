EnvAutoSet(0);
EnvPlay("SE_ENV_BG_WF720_CO2",0.5);
BGOpen("wf710",2);
ChLayout(1);
MsgClose();
ChOpen(6,33,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("B040606500_06_000");
MsgDisp("Himuro","They're magnificent.
It's so loud though...");
MsgSel("A summer highlight that colours the night sky! Tamaya～!","Ah, look! It's in the shape of a big heart∈","I feel sad now that it's ending.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040606500_06_010");
    MsgDisp("Himuro","That's cliche but I respect how you can
say it so unashamedly.");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(6,3);
    ChMouth(6,4);
    ChMotion(6,4);
    ChEyeOpenLevel(6,8);
    VoicePlay("B040606500_06_020");
    MsgDisp("Himuro","Ehhh, to think they can make shapes like
that. The pyrotechnicians are amazing.
It's kind of moving.");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040606500_06_030");
    MsgDisp("Himuro","Isn't this about enjoying fleeting beauty?");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
EnvAutoSet(1);
