BGOpen("tr440",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(1,255,0,2,2,8,#1,0,0);
ScrFadeIn(0);
VoicePlay("B040123300_01_000");
MsgDisp("Kazama","This...goes beyond just mere play.");
MsgSel("I could get used to this thrill!","Hey, that's enough...","That was a very interesting experience.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(1,2);
    ChMouth(1,0);
    ChMotion(1,0);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040123300_01_010");
    MsgDisp("Kazama","I realized there's still a lot about you
that I don't know.");
    MsgDispSksp(1,0);
    ChEyeOpenLevel(1,#1);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(1,2);
    ChMouth(1,0);
    ChMotion(1,3);
    VoicePlay("B040123300_01_020");
    MsgDisp("Kazama","Right.
No one benefits off this.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(1,2);
    ChMouth(1,1);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040123300_01_030");
    MsgDisp("Kazama","Haa, it's not about what you say, but how
you say it.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
