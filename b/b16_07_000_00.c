BGOpen("ex240",2);
NSSOpen(7,255,0,0,-1,-1,0);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160700000_07_000");
MsgDisp("Mikage","What's wrong?
Are you wanting me to 
teach you something bad?");
MsgSel("Please teach me!","I-I'm sorry...");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(7,1);
    NSSMouth(7,0);
    VoicePlay("B160700000_07_010");
    MsgDisp("Mikage","Hey, deny it.
...Geez, there's nothing I can do.");
    break ;
    case 1:
    NSSEye(7,0);
    NSSMouth(7,0);
    NSSEyeOpenLevel(7,5);
    VoicePlay("B160700000_07_020");
    MsgDisp("Mikage","Right?
...Geez, don't push yourself.");
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
ChOpen(7,255,0,0,0,-1,-1,0,0,0,0);
