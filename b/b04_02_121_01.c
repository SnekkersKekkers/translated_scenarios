MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("fp700",0);
BGMPlay("BGM_PLACE_POOL",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
ScrFadeIn(0);
VoicePlay("B040212102_02_000");
MsgDisp("Sassa","This silver ring is cool.");
MsgSel("It really suits you","It looks expensive...","It doesn't suit｛颯砂＊＊｝'s image.'");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040212102_02_010");
    MsgDisp("Sassa","I'm happy to hear you say that.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0,1);
    VoicePlay("B040212102_02_020");
    MsgDisp("Sassa","There are expensive things
in places like this too huh...");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(0);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,3);
    ChEyeOpenLevel(2,8);
    VoicePlay("B040212102_02_030");
    MsgDisp("Sassa","Yes yes.
I'm aware of that, but did you 
have to be so blunt about it? ");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
