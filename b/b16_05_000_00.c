BGOpen("ex240",2);
NSSOpen(5,255,0,0,#1,#1,0);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160500000_05_000");
MsgDisp("Hiiragi","Is it really that enjoyable?
That sort of poking.");
MsgSel("It's fun!","I'm doing it just because?");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(5,3);
    NSSMouth(5,3);
    VoicePlay("B160500000_05_010");
    MsgDisp("Hiiragi","Heheh, I suppose it cannot be helped then?");
    break ;
    case 1:
    NSSEye(5,2);
    NSSMouth(5,4);
    VoicePlay("B160500000_05_020");
    MsgDisp("Hiiragi","In spite of that, you are persistent...");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEStop("EV_SE_754",1);
MsgClose();
ScrFadeOut(0,0);
NSSClose();
