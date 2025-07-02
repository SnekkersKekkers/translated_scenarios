BGOpen("ex240",2);
NSSOpen(8,255,2,0,5,-1,8);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160800400_08_000");
MsgDisp("Shirahane","I've endured enough.
...right?");
MsgSel("Just a bit more▼","Yeah...");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(8,4);
    NSSMouth(8,2);
    NSSEyeOpenLevel(8,5);
    NSSCheek(8,10);
    VoicePlay("B160800400_08_010");
    MsgDisp("Shirahane","You're teasin'.
You say a \"bit more\", 
but how much more?");
    break ;
    case 1:
    NSSEye(8,2);
    NSSMouth(8,3);
    VoicePlay("B160800400_08_020");
    MsgDisp("Shirahane","Please don't be so downhearted.
It's over for today, okay?");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEStop("EV_SE_754",1);
MsgClose();
ScrFadeOut(0,0);
NSSClose();
