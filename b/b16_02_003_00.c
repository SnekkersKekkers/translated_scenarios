BGOpen("ex240",2);
NSSOpen(2,255,0,0,-1,-1,10);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160200300_02_000");
MsgDisp("Sassa","Ah, sorry.
I think I accidentally bumped into you.");
MsgSel("N-No it's fine.","I was the one trying to get your attention.");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(2,6);
    NSSMouth(2,0);
    VoicePlay("B160200300_02_010");
    MsgDisp("Sassa","It was definitely not on purpose.");
    break ;
    case 1:
    NSSEye(2,6);
    NSSMouth(2,2);
    VoicePlay("B160200300_02_020");
    MsgDisp("Sassa","...I see.
That's a good way of
getting my attention.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEStop("EV_SE_754",1);
MsgClose();
ScrFadeOut(0,0);
NSSClose();
MsgClose();
ChOpen(2,255,0,0,0,-1,-1,0,0,0,0);
