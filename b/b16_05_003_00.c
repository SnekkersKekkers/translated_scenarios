BGOpen("ex240",2);
NSSOpen(5,255,0,0,#1,#1,0);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160500300_05_000");
MsgDisp("Hiiragi","With this, If I were to take your hand,
what would you do?");
MsgSel("Because it's ｛柊＊＊＊｝, anything is fine.","...What should I do?");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(5,2);
    NSSMouth(5,3);
    VoicePlay("B160500300_05_010");
    MsgDisp("Hiiragi","Haha, is that so?
I have already been defeated.");
    break ;
    case 1:
    NSSEye(5,4);
    NSSMouth(5,3);
    VoicePlay("B160500300_05_020");
    MsgDisp("Hiiragi","Yes, please take your time in thinking
about it.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEStop("EV_SE_754",1);
MsgClose();
ScrFadeOut(0,0);
NSSClose();
