BGOpen("ex240",2);
NSSOpen(8,255,0,4,5,#1,8);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160800100_08_000");
MsgDisp("Shirahane","What's up, yer
bein' assertive today, huh?");
MsgSel("It's because I want to touch ｛大地＊＊｝.","I'm sorry...");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(8,2);
    NSSMouth(8,4);
    NSSCheek(8,10);
    VoicePlay("B160800100_08_010");
    MsgDisp("Shirahane","I understand that but, I'll get my hopes
up...");
    break ;
    case 1:
    NSSMouth(8,3);
    VoicePlay("B160800100_08_020");
    MsgDisp("Shirahane","It's fine.
I didn't particularly dislike it.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEStop("EV_SE_754",1);
MsgClose();
ScrFadeOut(0,0);
NSSClose();
