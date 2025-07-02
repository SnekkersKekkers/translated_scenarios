BGOpen("ex240",2);
NSSOpen(3,255,4,4,-1,-1,0);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160300000_03_000");
MsgDisp("Honda","What's going on with me... My heart's 
thumping like crazy.");
MsgSel("Mine too...","Are you feeling sick?");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(3,3);
    NSSMouth(3,3);
    VoicePlay("B160300000_03_010");
    MsgDisp("Honda","Really? Then, we're in the same boat.");
    break ;
    case 1:
    NSSEye(3,0);
    NSSMouth(3,4);
    VoicePlay("B160300000_03_020");
    MsgDisp("Honda","Indeed. Maybe something's wrong with me?");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEStop("EV_SE_754",1);
MsgClose();
ScrFadeOut(0,0);
NSSClose();
