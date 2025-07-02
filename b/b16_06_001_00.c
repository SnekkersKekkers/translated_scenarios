BGOpen("ex240",2);
NSSOpen(6,255,1,1,-1,-1,10);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160600100_06_000");
MsgDisp("Himuro","...You're up to something aren't you?");
MsgSel("Ehe!","It's a good thing");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(6,1);
    NSSMouth(6,1);
    VoicePlay("B160600100_06_010");
    MsgDisp("Himuro","There's no point in 
laughing it off like that.");
    break ;
    case 1:
    NSSEye(6,2);
    NSSMouth(6,0);
    NSSEyeOpenLevel(6,0);
    VoicePlay("B160600100_06_020");
    MsgDisp("Himuro","I've got a bad feeling about this.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEStop("EV_SE_754",1);
MsgClose();
ScrFadeOut(0);
NSSClose();
