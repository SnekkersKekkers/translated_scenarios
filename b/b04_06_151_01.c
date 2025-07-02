BGOpen("ne310",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,4);
ScrFadeIn(0);
ChMotion(6,4,1);
VoicePlay("B040615101_06_000");
MsgDisp("Himuro","Since we're here anyways,
why not have a contest?");
MsgSel("I-impossible!","Go easy on me, okay?","I won't lose!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040615101_06_010");
    MsgDisp("Himuro","You're deciding it's impossible 
before you even try?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040615101_06_020");
    MsgDisp("Himuro","If I feel like it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("B040615101_06_030");
    MsgDisp("Himuro","If you're gonna do it,
you have to win.
Let's both do our best.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
