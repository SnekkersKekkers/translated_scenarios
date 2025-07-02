BGOpen("ex240",2);
NSSOpen(8,255,0,4,-1,-1,0);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160800000_08_000");
MsgDisp("Shirahane","What's wrong?
You're looking at me intently.");
MsgSel("It's nothing","I just wanted to stare.");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(8,2);
    NSSMouth(8,3);
    VoicePlay("B160800000_08_010");
    MsgDisp("Shirahane","It looked like you wanted
to say something though.
...Was it seriously nothing?");
    break ;
    case 1:
    NSSEye(8,4);
    NSSMouth(8,4);
    NSSCheek(8,8);
    VoicePlay("B160800000_08_020");
    MsgDisp("Shirahane","Eh, why?
I'm so embarrassed...");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEStop("EV_SE_754",1);
MsgClose();
ScrFadeOut(0,0);
NSSClose();
