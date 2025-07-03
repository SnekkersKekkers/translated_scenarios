BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040606101_06_000");
MsgDisp("Himuro","Haven't you been looking at 
the beach house for a while now?
Do you want something to eat?");
MsgSel("I-I've been found out...","After I go for a swim.","That's you isn't it, ｛氷室＊＊｝?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("B040606101_06_010");
    MsgDisp("Himuro","You really are easy to
understand. That's fine, I'll come 
with you. You can't exert yourself 
if you're hungry.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,4);
    VoicePlay("B040606101_06_020");
    MsgDisp("Himuro","That's a wise decision.
A little movement will make 
you hungry. Let's go for a swim first.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040606101_06_030");
    MsgDisp("Himuro","I had a proper meal
before leaving the house, 
Unfortunately you're mistaken.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
