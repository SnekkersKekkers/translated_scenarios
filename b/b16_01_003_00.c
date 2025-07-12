BGOpen("ex240",2);
NSSOpen(1,255,2,4,#1,#1,5);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160100300_01_000");
MsgDisp("Kazama","I learned that the streets
at night have many dangers.");
MsgSel("In what way?","Is it safe around here?");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(1,0);
    NSSMouth(1,2);
    NSSEyeOpenLevel(1,5);
    NSSCheek(1,0);
    VoicePlay("B160100300_01_010");
    MsgDisp("Kazama","That's exactly it, being unaware
is the most scary thing.");
    break ;
    case 1:
    NSSEye(1,2);
    NSSMouth(1,3);
    NSSEyeOpenLevel(1,5);
    NSSCheek(1,0);
    VoicePlay("B160100300_01_020");
    MsgDisp("Kazama","Well, you're safe.
Well, I guess it's up to me?");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEStop("EV_SE_754",1);
MsgClose();
ScrFadeOut(0);
NSSClose();
MsgClose();
ChOpen(1,255,0,0,0,#1,#1,0,0,0,0);
