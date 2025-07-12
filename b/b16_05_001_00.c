BGOpen("ex240",2);
NSSOpen(5,255,0,2,#1,#1,0);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160500100_05_000");
MsgDisp("Hiiragi","It cannot be helped...
It's about time I return the 
favor, isn't it?");
MsgSel("Yes, by all means","T-That's a bit...");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(5,3);
    NSSMouth(5,3);
    VoicePlay("B160500100_05_010");
    MsgDisp("Hiiragi","Won't you regret it to place 
your faith in me endlessly?");
    break ;
    case 1:
    NSSEye(5,2);
    NSSMouth(5,4);
    VoicePlay("B160500100_05_020");
    MsgDisp("Hiiragi","That's right.
I'm glad you reacted that way.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEStop("EV_SE_754",1);
MsgClose();
ScrFadeOut(0,0);
NSSClose();
