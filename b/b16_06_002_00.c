BGOpen("ex240",2);
NSSOpen(6,255,1,1,-1,-1,10);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160600200_06_000");
MsgDisp("Himuro","...Aren't you too close?");
MsgSel("Ah, sorry!","Would it be bad if I got closer?");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(6,0);
    NSSMouth(6,5);
    VoicePlay("B160600200_06_010");
    MsgDisp("Himuro","I'm not particularly angry.");
    break ;
    case 1:
    NSSEye(6,4);
    NSSMouth(6,0);
    VoicePlay("B160600200_06_020");
    MsgDisp("Himuro","....It's fine.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEStop("EV_SE_754",1);
MsgClose();
ScrFadeOut(0);
NSSClose();
