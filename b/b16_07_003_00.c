BGOpen("ex240",2);
NSSOpen(7,255,5,5,4,#1,0);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160700300_07_000");
MsgDisp("Mikage","Ohh∋ what is it∋");
MsgSel("There's trash on you.","I wanted to be closer to ｛御影＊＊｝...");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(7,2);
    NSSMouth(7,0);
    NSSEyeOpenLevel(7,6);
    VoicePlay("B160700300_07_010");
    MsgDisp("Mikage","...Ah, trash, huh...");
    break ;
    case 1:
    NSSEye(7,1);
    NSSMouth(7,0);
    VoicePlay("B160700300_07_020");
    MsgDisp("Mikage","... You...
Don't say that with a straight face.");
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
ChOpen(7,255,0,0,0,#1,#1,0,0,0,0);
