BGOpen("ex240",2);
NSSOpen(8,255,3,4,5,-1,8);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160800300_08_000");
MsgDisp("Shirahane","...Hey, can I touch you too?");
MsgSel("That's fine","D-don't...!");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(8,2);
    NSSMouth(8,3);
    NSSEyeOpenLevel(8,5);
    VoicePlay("B160800300_08_010");
    MsgDisp("Shirahane","Sorry.
I was just jokin'...");
    break ;
    case 1:
    NSSEye(8,3);
    NSSMouth(8,3);
    NSSEyeOpenLevel(8,0);
    VoicePlay("B160800300_08_020");
    MsgDisp("Shirahane","Haha!
I wouldn't do that?
Because I want to cherish you.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEStop("EV_SE_754",1);
MsgClose();
ScrFadeOut(0,0);
NSSClose();
