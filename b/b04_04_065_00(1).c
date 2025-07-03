MsgClose();
EnvAutoSet(0);
EnvPlay("SE_ENV_BG_WF720_CO2",0.5);
BGOpen("wf710",2);
ChLayout(1);
ChNanaType(-1);
ChOpen(4,33,0,0,3,-1,-1,0,0);
ScrFadeIn(0);
ChMotion(4,1,1);
VoicePlay("B040406500_04_000");
MsgDisp("Nanatsumori","Whew.
This is it.");
MsgSel("A summer sight that colors the sky! Tamaya~!","Ah, look! It's in the shape of a big heart∈","I'm sad it's going to end.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChMotion(4,0,1);
    VoicePlay("B040406500_04_010");
    MsgDisp("Nanatsumori","Nice shout.
Kagiya～!");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B040406500_04_020");
    MsgDisp("Nanatsumori","Look, look, how cute!
The big heart gets me excited!");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040406500_04_030");
    MsgDisp("Nanatsumori","Let's enjoy the moment.");
    MsgDispSksp(1,6);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
EnvAutoSet(1);
