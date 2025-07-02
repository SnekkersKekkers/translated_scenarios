MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("fp700",0);
BGMPlay("BGM_PLACE_POOL",0.01);
ChLayout(1);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040412100_04_000");
MsgDisp("Nanatsumori","Ahー, I'm getting excited...");
MsgSel("Let's find some bargains!","Setting up a stall seems fun","This is an environmentally-friendly event");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B040412100_04_010");
    MsgDisp("Nanatsumori","Of course!
If you find a shop that sells vintage
clothing, let me know.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040412100_04_020");
    MsgDisp("Nanatsumori","Maybe.
I would be happy if people liked the 
items I chose.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,0);
    VoicePlay("B040412100_04_030");
    MsgDisp("Nanatsumori","I don't look at it 
from that perspective.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
