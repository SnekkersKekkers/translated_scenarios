BGOpen("wf330",0);
BGMPlay("BGM_PLACE_AQUA_DEEP",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040503301_05_000");
MsgDisp("Hiiragi","Apparently there are a lot of tasty fish
in the deep sea.");
MsgSel("Their appearance is a bit...","There are massive crabs too.","Football fish too?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,4);
    VoicePlay("B040503301_05_010");
    MsgDisp("Hiiragi","That's right.
My respect goes to the person who first
tried it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChMotion(5,2);
    VoicePlay("B040503301_05_020");
    MsgDisp("Hiiragi","It says giant spider crab.
Doesn't look too tasty, does it?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,4);
    VoicePlay("B040503301_05_030");
    MsgDisp("Hiiragi","It doesn't even look edible, let alone
tasty.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
