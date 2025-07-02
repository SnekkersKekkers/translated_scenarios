BGOpen("ne320",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040515200_05_000");
MsgDisp("Hiiragi","Darts are great...
There's a calming atmosphere.");
MsgSel("This is what you should know to be a refined adult?","For now, I'll just throw it until I hit it!","Can you teach me the rules?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChMouth(5,2);
    ChMotion(5,4);
    VoicePlay("B040515200_05_010");
    MsgDisp("Hiiragi","To be a refined adult...?
Is that how it is?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(5,3);
    VoicePlay("B040515200_05_020");
    MsgDisp("Hiiragi","Heheh, it's not a shuriken.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChMotion(5,4);
    VoicePlay("B040515200_05_030");
    MsgDisp("Hiiragi","The rules are simple,
so form is important first.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
