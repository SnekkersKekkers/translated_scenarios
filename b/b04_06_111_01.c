BGOpen("fp610",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040611101_06_000");
MsgDisp("Himuro","It might be good to
train your sense of balance.");
MsgSel("I wonder who will fall first?","Is this similar to surfing?","Aren't your legs shaking?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,1);
    VoicePlay("B040611101_06_010");
    MsgDisp("Himuro","That's assuming we fall no?
I don't feel like I'll lose though.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040611101_06_020");
    MsgDisp("Himuro","In the sense that 
core strength is essential.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,1);
    ChMouth(6,1);
    ChMotion(6,1);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040611101_06_030");
    MsgDisp("Himuro","Ha? Where?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
