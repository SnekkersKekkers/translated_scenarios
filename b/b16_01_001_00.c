BGOpen("ex240",2);
NSSOpen(1,255,4,2,#1,#1,5);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160100100_01_000");
MsgDisp("Kazama","You're testing me, aren't you?");
MsgSel("Nope, I believe in ｛風真＊＊｝!","It's only natural...");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(1,2);
    NSSMouth(1,0);
    VoicePlay("B160100100_01_010");
    MsgDisp("Kazama","...Geez.
Only do it in moderation, okay?");
    break ;
    case 1:
    NSSEye(1,6);
    NSSMouth(1,2);
    NSSEyeOpenLevel(1,5);
    NSSCheek(1,0);
    VoicePlay("B160100100_01_020");
    MsgDisp("Kazama","You're so carefree.
But it's me, so I'll let it slide.");
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
