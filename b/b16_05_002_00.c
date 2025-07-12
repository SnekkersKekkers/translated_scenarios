BGOpen("ex240",2);
NSSOpen(5,255,0,4,#1,#1,0);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160500200_05_000");
MsgDisp("Hiiragi","Before I noticed it, you were 
there, continuously by my side.");
MsgSel("Is that so?","It's only for ｛柊＊＊＊｝, though?");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(5,4);
    NSSMouth(5,4);
    VoicePlay("B160500200_05_010");
    MsgDisp("Hiiragi","Yes.
And it was so naturally too.");
    break ;
    case 1:
    NSSEye(5,3);
    NSSMouth(5,3);
    VoicePlay("B160500200_05_020");
    MsgDisp("Hiiragi","Is that right?
I would be very happy if it was so.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEStop("EV_SE_754",1);
MsgClose();
ScrFadeOut(0,0);
NSSClose();
