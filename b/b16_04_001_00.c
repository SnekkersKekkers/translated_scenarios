BGOpen("ex240",2);
ChNanaType(#1);
NSSOpen(4,255,0,0,#1,#1,0);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160400100_04_000");
MsgDisp("Nanatsumori","All men are wolves. 
Do you understand the meaning 
of that?");
MsgSel("｛七ツ森＊｝ is a lion▼","Roar!");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(4,2);
    NSSMouth(4,3);
    VoicePlay("B160400100_04_010");
    MsgDisp("Nanatsumori","So you're going there.
But, that's a big hit for me▼");
    break ;
    case 1:
    NSSEye(4,2);
    NSSMouth(4,2);
    VoicePlay("B160400100_04_020");
    MsgDisp("Nanatsumori","Yeah, don't fool around. 
You're more like the lamb, so
don't get eaten by a wolf, okay?");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEStop("EV_SE_754",1);
MsgClose();
ScrFadeOut(0,0);
NSSClose();
