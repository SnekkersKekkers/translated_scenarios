BGOpen("ex240",2);
NSSOpen(6,255,1,1,-1,-1,10);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160600300_06_000");
MsgDisp("Himuro","Are you playing with me?");
MsgSel("Of course","I'm not playing, I'm serious.");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(6,2);
    NSSMouth(6,0);
    NSSEyeOpenLevel(6,0);
    VoicePlay("B160600300_06_010");
    MsgDisp("Himuro","...I knew it.");
    break ;
    case 1:
    NSSEye(6,1);
    NSSMouth(6,1);
    NSSEyeOpenLevel(6,0);
    VoicePlay("B160600300_06_020");
    MsgDisp("Himuro","Haa∋
...That joke is nonsense.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEStop("EV_SE_754",1);
MsgClose();
ScrFadeOut(0);
NSSClose();
