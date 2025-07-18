BGOpen("ex240",2);
NSSOpen(2,255,0,4,#1,#1,0);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160200000_02_000");
MsgDisp("Sassa","...Hm?
Did something happen?");
MsgSel("It's nothing","Don't pay it any mind");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(2,0);
    NSSMouth(2,4);
    VoicePlay("B160200000_02_010");
    MsgDisp("Sassa","Hmm, it seems like something's up though?");
    break ;
    case 1:
    NSSEye(2,3);
    NSSMouth(2,0);
    VoicePlay("B160200000_02_020");
    MsgDisp("Sassa","Of course I'd be worried if something
happened to you.");
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
ChOpen(2,255,0,0,0,#1,#1,0,0,0,0);
