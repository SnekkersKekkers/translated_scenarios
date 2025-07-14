BGOpen("ex240",2);
NSSOpen(5,255,4,2,#1,#1,0);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160500400_05_000");
MsgDisp("Hiiragi","Your movements..
are expertful.");
MsgSel("No one can stop me, you know?","Are you going to admit defeat?");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(5,2);
    NSSMouth(5,3);
    VoicePlay("B160500400_05_010");
    MsgDisp("Hiiragi","Yes, it appears that way.
Now, do as you please.");
    break ;
    case 1:
    NSSEye(5,0);
    NSSMouth(5,4);
    VoicePlay("B160500400_05_020");
    MsgDisp("Hiiragi","No, I have no intention of continuously
letting myself be beaten.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEStop("EV_SE_754",1);
MsgClose();
ScrFadeOut(0,0);
NSSClose();
