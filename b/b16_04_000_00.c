BGOpen("ex240",2);
ChNanaType(-1);
NSSOpen(4,255,0,0,-1,-1,0);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160400000_04_000");
MsgDisp("Nanatsumori","Hey, don't tug on my clothes.
What's up?");
MsgSel("I wanted to talk more...","I want to touch you more...");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(4,2);
    NSSMouth(4,3);
    VoicePlay("B160400000_04_010");
    MsgDisp("Nanatsumori","Then talk to me directly.
It tickles.");
    break ;
    case 1:
    NSSEye(4,3);
    NSSMouth(4,4);
    NSSCheek(4,8);
    VoicePlay("B160400000_04_020");
    MsgDisp("Nanatsumori","Eh? Ah, right.
If you do it in moderation, 
then go ahead...");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEStop("EV_SE_754",1);
MsgClose();
ScrFadeOut(0,0);
NSSClose();
