BGOpen("fp610",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0,1);
ChEyeOpenLevel(1,8);
ChCheek(1,5);
ScrFadeIn(0);
ChMotion(1,1);
VoicePlay("B040111101_01_000");
MsgDisp("Kazama","Are you cold?
Being too cold isn't good.");
MsgSel("My hands are a little cold.","Don't worry, they're warm.","Thank you, but I think I'll get warm when we move.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040111101_01_010");
    MsgDisp("Kazama","OK!
Give me your hands then.");
    SEPlay("EV_SE_760");
    SEWait();
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,0);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    ChCheek(1,0);
    VoicePlay("B040111101_01_020");
    MsgDisp("Kazama","Is that so...
Well, don't let your guard down.
It can get cold on the ice.");
    ChEyeOpenLevel(1,8);
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("B040111101_01_030");
    MsgDisp("Kazama","Well, then until you warm up...
Here, let me hold your hands.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
