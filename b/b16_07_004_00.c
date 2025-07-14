BGOpen("ex240",2);
NSSOpen(7,255,0,0,5,#1,0);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160700400_07_000");
MsgDisp("Mikage","Again?
You're testing me, aren't you?");
MsgSel("What would that be?","It's an endurance test, ｛御影＊＊｝?");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(7,2);
    NSSMouth(7,0);
    VoicePlay("B160700400_07_010");
    MsgDisp("Mikage","Huh, was I wrong? Haa... Either way, I'm
being tested.");
    break ;
    case 1:
    NSSEye(7,1);
    NSSMouth(7,0);
    NSSEyeOpenLevel(7,6);
    VoicePlay("B160700400_07_020");
    MsgDisp("Mikage","So you're making me wait?
Don't get too carried away.");
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
