BGOpen("ex240",2);
NSSOpen(3,255,4,4,#1,#1,0);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160300300_03_000");
MsgDisp("Honda","What's wrong?
Why are you suddenly staring at me...
Do I have something on me?");
MsgSel("It's a staring contest!","Don't look away?");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(3,3);
    NSSMouth(3,3);
    VoicePlay("B160300300_03_010");
    MsgDisp("Honda","...Pfft!
Ah, I lost.");
    break ;
    case 1:
    NSSEye(3,4);
    NSSMouth(3,4);
    VoicePlay("B160300300_03_020");
    MsgDisp("Honda","O-Okay.
I wonder why...
I'm starting to get nervous.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEStop("EV_SE_754",1);
MsgClose();
ScrFadeOut(0,0);
NSSClose();
