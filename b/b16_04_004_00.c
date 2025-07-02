BGOpen("ex240",2);
ChNanaType(-1);
NSSOpen(4,255,4,2,-1,-1,8);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160400400_04_000");
MsgDisp("Nanatsumori","...Hey.
It would be bad if someone 
saw us here right?");
MsgSel("...Is that so bad?","Got it, I'll stop...");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(4,5);
    NSSMouth(4,2);
    NSSCheek(4,10);
    VoicePlay("B160400400_04_010");
    MsgDisp("Nanatsumori","Eh∋
Am I worrying too much?
Should I... do it too?");
    break ;
    case 1:
    NSSEye(4,2);
    NSSMouth(4,3);
    VoicePlay("B160400400_04_020");
    MsgDisp("Nanatsumori","Eh∋ No, I didn't really mean anything by
that... Please continue.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEStop("EV_SE_754",1);
MsgClose();
ScrFadeOut(0,0);
NSSClose();
