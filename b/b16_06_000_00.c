BGOpen("ex240",2);
NSSOpen(6,255,1,1,-1,-1,10);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160600000_06_000");
MsgDisp("Himuro","Why are you touching me?");
MsgSel("Can I not?","Because I want to touch you");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(6,1);
    NSSMouth(6,1);
    NSSEyeOpenLevel(6,0);
    VoicePlay("B160600000_06_010");
    MsgDisp("Himuro","Do what you want?");
    break ;
    case 1:
    NSSEye(6,0);
    NSSMouth(6,1);
    VoicePlay("B160600000_06_020");
    MsgDisp("Himuro","What's with that...");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEStop("EV_SE_754",1);
MsgClose();
ScrFadeOut(0);
NSSClose();
