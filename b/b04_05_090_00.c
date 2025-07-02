BGOpen("fp310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040509000_05_000");
MsgDisp("Hiiragi","This is a splendid establishment.
The mantainence is very thorough.");
MsgSel("This flower has an amazing smell...","It's pretty clammy due to the humidity huh?","Where are the carnivorous plants?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,3);
    ChMouth(5,4);
    VoicePlay("B040509000_05_010");
    MsgDisp("Hiiragi","It really is? A sweet scent?
It's as if it were confectionary.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040509000_05_020");
    MsgDisp("Hiiragi","Yes...
It must be pleasant for the plants here.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,2);
    VoicePlay("B040509000_05_030");
    MsgDisp("Hiiragi","Hmー,
It would be bad if we disturbed them
during their mealtime, right?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
