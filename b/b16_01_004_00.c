BGOpen("ex240",2);
NSSOpen(1,255,0,2,-1,-1,5);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160100400_01_000");
MsgDisp("Kazama","Hey, you know I'm a guy too right?
Do you understand?");
MsgSel("｛風真＊＊｝is a guy, yes.","You'd be so cute if you were a girl♪");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(1,0);
    NSSMouth(1,0);
    NSSEyeOpenLevel(1,5);
    VoicePlay("B160100400_01_010");
    MsgDisp("Kazama","If you understand then, 
it's your own responsibility.
No matter what I do.");
    break ;
    case 1:
    NSSEye(1,2);
    NSSMouth(1,2);
    NSSEyeOpenLevel(1,5);
    NSSCheek(1,0);
    VoicePlay("B160100400_01_020");
    MsgDisp("Kazama","You...
you should have more sense 
of self-preseverance.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEStop("EV_SE_754",1);
MsgClose();
ScrFadeOut(0);
NSSClose();
MsgClose();
ChOpen(1,255,0,0,0,-1,-1,0,0,0,0);
