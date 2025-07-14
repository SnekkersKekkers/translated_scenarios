BGOpen("fp310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040309000_03_000");
MsgDisp("Honda","As you move through the areas, the climate
and vegetation both differ.
This is really fun huh?");
MsgSel("This flower has an amazing smell...","It's pretty clammy due to the humidity huh?","Where are the carnivorous plants?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChSet(3,5);
    VoicePlay("B040309000_03_010");
    MsgDisp("Honda","Ah, be careful!
It's quite difficult to get rid of lily
pollen.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("B040309000_03_020");
    MsgDisp("Honda","It's because it recreates a tropical
environment.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040309000_03_030");
    MsgDisp("Honda","Do you also like them? Venus flytraps that
is. It's nice how their long eyelashes
crackle!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
