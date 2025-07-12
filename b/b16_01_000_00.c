BGOpen("ex240",2);
NSSOpen(1,255,0,2,#1,#1,0);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160100000_01_000");
MsgDisp("Kazama","What's up with that? 
I am here, you know.");
MsgSel("Yeah, I know.","I'm glad.");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(1,6);
    NSSMouth(1,4);
    VoicePlay("B160100000_01_010");
    MsgDisp("Kazama","Then what are you checking?");
    break ;
    case 1:
    NSSEye(1,0);
    NSSMouth(1,0);
    NSSEyeOpenLevel(1,5);
    VoicePlay("B160100000_01_020");
    MsgDisp("Kazama","I'll always be here, alright?
Don't worry.");
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
ChOpen(1,255,0,0,0,#1,#1,0,0,0,0);
