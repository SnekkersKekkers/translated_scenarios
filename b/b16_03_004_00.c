BGOpen("ex240",2);
NSSOpen(3,255,3,3,#1,#1,0);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160300400_03_000");
MsgDisp("Honda","Hey hey, what if I did everything you've 
been doing to me back at you?");
MsgSel("I'd be happy?","I'd be embarrassed...");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(3,4);
    NSSMouth(3,3);
    VoicePlay("B160300400_03_010");
    MsgDisp("Honda","Yeah, me too. Being looked at and touched 
by you is nice, and it makes me happy.");
    break ;
    case 1:
    NSSEye(3,5);
    NSSMouth(3,4);
    VoicePlay("B160300400_03_020");
    MsgDisp("Honda","Huh, is that so? Were we doing something 
embarrassing?");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEStop("EV_SE_754",1);
MsgClose();
ScrFadeOut(0,0);
NSSClose();
