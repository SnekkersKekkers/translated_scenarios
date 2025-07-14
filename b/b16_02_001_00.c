BGOpen("ex240",2);
NSSOpen(2,255,0,0,#1,#1,0);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160200100_02_000");
MsgDisp("Sassa","You seem restless, though, is there
something bothering you?");
MsgSel("I was just born like this","There are always things bothering me");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(2,3);
    NSSMouth(2,3);
    NSSEyeOpenLevel(2,0);
    VoicePlay("B160200100_02_010");
    MsgDisp("Sassa","Well I guess that can't
be helped then.");
    break ;
    case 1:
    NSSEye(2,2);
    NSSMouth(2,0);
    VoicePlay("B160200100_02_020");
    MsgDisp("Sassa","What, am I acting 
strange or something?");
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
