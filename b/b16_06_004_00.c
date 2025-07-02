BGOpen("ex240",2);
NSSOpen(6,255,1,1,-1,-1,10);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160600400_06_000");
MsgDisp("Himuro","Do you tease me like that
because I'm your junior?");
MsgSel("Of course","It's because you're cute.");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(6,0);
    NSSMouth(6,0);
    VoicePlay("B160600400_06_010");
    MsgDisp("Himuro","...Ah, right.
Keep that attitude up.");
    break ;
    case 1:
    NSSEye(6,1);
    NSSMouth(6,1);
    NSSEyeOpenLevel(6,0);
    ChEyeOpenLevel(6,5);
    VoicePlay("B160600400_06_020");
    MsgDisp("Himuro","Cute...what's up with that?");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEStop("EV_SE_754",1);
MsgClose();
ScrFadeOut(0);
NSSClose();
