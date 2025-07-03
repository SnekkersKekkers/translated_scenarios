BGOpen("ex240",2);
ChNanaType(-1);
NSSOpen(4,255,0,0,-1,-1,8);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160400300_04_000");
MsgDisp("Nanatsumori","Is that a sign of being spoilt?");
MsgSel("Yeah...","I just want to tease｛七ツ森＊｝!");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(4,6);
    NSSMouth(4,4);
    VoicePlay("B160400300_04_010");
    MsgDisp("Nanatsumori","Ah...right.
Now that you've answered so 
honestly, I don't know
how to respond.");
    break ;
    case 1:
    NSSEye(4,2);
    NSSMouth(4,3);
    VoicePlay("B160400300_04_020");
    MsgDisp("Nanatsumori","It's not at teasing level.
Well...I don't hate it, so I'll allow
it. Feel free to continue.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEStop("EV_SE_754",1);
MsgClose();
ScrFadeOut(0,0);
NSSClose();
