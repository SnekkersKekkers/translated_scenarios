BGOpen("ex240",2);
NSSOpen(2,255,2,2,#1,#1,0);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160200400_02_000");
MsgDisp("Sassa","Are you testing something?");
MsgSel("Eh, what's wrong?","Not at all.");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(2,2);
    NSSMouth(2,0);
    NSSCheek(2,10);
    VoicePlay("B160200400_02_010");
    MsgDisp("Sassa","Well I mean...
you keep brushing against me, it feels
soft or something.");
    break ;
    case 1:
    NSSEye(2,1);
    NSSMouth(2,0);
    NSSEyeOpenLevel(2,0);
    NSSCheek(2,10);
    VoicePlay("B160200400_02_020");
    MsgDisp("Sassa","...Right.
Maybe I was mistaken.");
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
