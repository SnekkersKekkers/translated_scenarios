BGOpen("ex240",2);
ChNanaType(#1);
NSSOpen(4,255,2,1,#1,#1,0);
SEPlay("EV_SE_754",0.5,0.5,0.25);
ScrFadeIn(0);
VoicePlay("B160400200_04_000");
MsgDisp("Nanatsumori","Aah, hey!
It's that defenseless 
side of you...");
MsgSel("｛七ツ森＊｝ will protect me?","That's not true!");
switch (MsgSelRsltGet()){
    case 0:
    NSSEye(4,2);
    NSSMouth(4,3);
    VoicePlay("B160400200_04_010");
    MsgDisp("Nanatsumori","Then... 
I guess I'm your knight.
I have to send you home safely...");
    break ;
    case 1:
    NSSEye(4,3);
    NSSMouth(4,3);
    VoicePlay("B160400200_04_020");
    MsgDisp("Nanatsumori","It's not impossible. I guess
I'll be the one to properly teach
a pure and unaware girl like you...");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
SEStop("EV_SE_754",1);
MsgClose();
ScrFadeOut(0,0);
NSSClose();
