BGOpen("ex240",2);
NSSOpen(3,255,0,3,#1,#1,0);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160300100_03_000");
MsgDisp("Honda","You look like you're having so much fun.
Do you like touching me?");
MsgSel("Yeah, I like it!","Ah, I was unconsciously...");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(3,3);
    NSSMouth(3,3);
    NSSEyeOpenLevel(3,0);
    VoicePlay("B160300100_03_010");
    MsgDisp("Honda","Haha then go ahead!
Touch me as much as you like!");
    break ;
    case 1:
    NSSEye(3,0);
    NSSMouth(3,4);
    VoicePlay("B160300100_03_020");
    MsgDisp("Honda","I see... but doing it unconsciously with
other people is kinda of...");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEStop("EV_SE_754",1);
MsgClose();
ScrFadeOut(0,0);
NSSClose();
