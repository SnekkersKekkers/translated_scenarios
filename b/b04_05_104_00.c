BGOpen("fp440",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChEye(5,4);
VoicePlay("B040510400_05_000");
MsgDisp("Hiiragi","They're rich in colors.
Insects are mysterious.");
MsgSel("Their colors are beautiful but, the legs...","The big butterflies are scary","Their way of life is mysterious");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(5,0);
    ChMouth(5,2);
    ChMotion(5,4);
    VoicePlay("B040510400_05_010");
    MsgDisp("Hiiragi","Leg? Are you already tired?
Hm, are you talking about the insect legs?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(0);
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,2);
    VoicePlay("B040510400_05_020");
    MsgDisp("Hiiragi","Eh, is that so...
Let's pass by the butterfly 
specimen corner.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040510400_05_030");
    MsgDisp("Hiiragi","That's precisely it! Butterflies that fly
thousands of kilometers... Amazing would
be an understatement.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
