BGOpen("ex240",2);
NSSOpen(2,255,0,0,#1,#1,0);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160200200_02_000");
MsgDisp("Sassa","Hm, did you call for me just now?");
MsgSel("No, I didn't call for you","I just wanted to try calling your name.");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(2,3);
    NSSMouth(2,3);
    VoicePlay("B160200200_02_010");
    MsgDisp("Sassa","What's up with that?
You poked me just now.");
    break ;
    case 1:
    NSSEye(2,0);
    NSSMouth(2,4);
    NSSCheek(2,10);
    VoicePlay("B160200200_02_020");
    MsgDisp("Sassa","What cutesy things are you doing?");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEStop("EV_SE_754",1);
MsgClose();
ScrFadeOut(0,0);
NSSClose();
MsgClose();
ChOpen(2,255,0,0,0,#1,#1,0,0,0,0);
