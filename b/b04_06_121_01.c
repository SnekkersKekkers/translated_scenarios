MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("fp700",0);
BGMPlay("BGM_PLACE_POOL",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040612101_06_000");
MsgDisp("Himuro","...Ah, this is an out-of-print CD.");
MsgSel("That's the real thrill of the flea market.","Do you like this artist?","If it's out-of-print, does that mean it's not popular?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,4);
    VoicePlay("B040612101_06_010");
    MsgDisp("Himuro","Yeah, not bad.
Maybe there's more, let's keep looking.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("B040612101_06_020");
    MsgDisp("Himuro","I like them.
It's thanks to you that I came across it.
Okay, let's buy it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("B040612101_06_030");
    MsgDisp("Himuro","Popularity doesn't matter.
Lots of old CD's become out of print,
that's all.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
