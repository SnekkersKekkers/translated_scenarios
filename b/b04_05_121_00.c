MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("fp700",0);
BGMPlay("BGM_PLACE_POOL",0.01);
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040512100_05_000");
MsgDisp("Hiiragi","This chaotic vibe is nice —just like a
festival.");
MsgSel("Let's find some bargains!","Setting up your own stall would be fun.","It's an environmentally-friendly event, too.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,3);
    ChMotion(5,0);
    VoicePlay("B040512100_05_010");
    MsgDisp("Hiiragi","I wonder what a lucky find is to you.
I'm looking forward to it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(5,0);
    ChMotion(5,0);
    VoicePlay("B040512100_05_020");
    MsgDisp("Hiiragi","Yes.
But, can it be done that simply?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(5,0);
    ChMouth(5,2);
    VoicePlay("B040512100_05_030");
    MsgDisp("Hiiragi","Is that so?
Umm, which part?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
