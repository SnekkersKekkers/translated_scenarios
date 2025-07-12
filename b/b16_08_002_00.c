BGOpen("ex240",2);
NSSOpen(8,255,1,3,#1,#1,8);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160800200_08_000");
MsgDisp("Shirahane","Seriously you're...
kind of perverted aren't ya?");
MsgSel("Huhu...","T-That's wrong!");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(8,4);
    NSSMouth(8,5);
    NSSEyeOpenLevel(8,5);
    NSSCheek(8,10);
    VoicePlay("B160800200_08_010");
    MsgDisp("Shirahane","Don't smile at me like that!
You'll make my heart race
even more...");
    break ;
    case 1:
    NSSEye(8,3);
    NSSMouth(8,3);
    NSSEyeOpenLevel(8,0);
    VoicePlay("B160800200_08_020");
    MsgDisp("Shirahane","It's a joke, it's a joke.
You're such a interestin' girl!");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEStop("EV_SE_754",1);
MsgClose();
ScrFadeOut(0,0);
NSSClose();
