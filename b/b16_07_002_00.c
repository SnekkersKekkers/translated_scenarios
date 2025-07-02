BGOpen("ex240",2);
NSSOpen(7,255,2,0,-1,-1,0);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160700200_07_000");
MsgDisp("Mikage","...Hey.
That tickles.");
MsgSel("It's because I'm tickling you.","Where about?");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(7,3);
    NSSMouth(7,3);
    VoicePlay("B160700200_07_010");
    MsgDisp("Mikage","Haha, you're funny.
——Hey, stop!");
    break ;
    case 1:
    NSSEye(7,0);
    NSSMouth(7,3);
    NSSEyeOpenLevel(7,5);
    VoicePlay("B160700200_07_020");
    MsgDisp("Mikage","My heart?
——What are you making me say!");
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
ChOpen(7,255,0,0,0,-1,-1,0,0,0,0);
