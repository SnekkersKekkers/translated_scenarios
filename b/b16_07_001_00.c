BGOpen("ex240",2);
NSSOpen(7,255,0,0,#1,#1,0);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160700100_07_000");
MsgDisp("Mikage","...Heyー,
You know, even I'm a guy too.");
MsgSel("I know that?","What does that mean?");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(7,2);
    NSSMouth(7,0);
    VoicePlay("B160700100_07_010");
    MsgDisp("Mikage","You don't know...
that's why I'm saying it.
...Geez, do as you like.");
    break ;
    case 1:
    NSSEye(7,0);
    NSSMouth(7,3);
    NSSEyeOpenLevel(7,5);
    VoicePlay("B160700100_07_020");
    MsgDisp("Mikage","One day, I'll bite!
...that's what it means.");
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
