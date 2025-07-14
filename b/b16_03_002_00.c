BGOpen("ex240",2);
NSSOpen(3,255,0,3,#1,#1,0);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160300200_03_000");
MsgDisp("Honda","Hey, do you do things like this with other
people too?");
MsgSel("Only with you, ｛本多＊＊｝.","Things like just now?");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(3,3);
    NSSMouth(3,3);
    VoicePlay("B160300200_03_010");
    MsgDisp("Honda","Oh really!
So I'm special to you?");
    break ;
    case 1:
    NSSEye(3,4);
    NSSMouth(3,4);
    VoicePlay("B160300200_03_020");
    MsgDisp("Honda","I see...
So it seems that what we just did isn't
special to you.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEStop("EV_SE_754",1);
MsgClose();
ScrFadeOut(0,0);
NSSClose();
