BGOpen("ne600",1);
MsgClose();
ChOpen(7,254,0,0,0,-1,-1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040718500_07_000");
MsgDisp("Mikage","What do you think about the
\"Road to First Love\" being the theme of 
our class field trip?");
MsgSel("I would like it!","Does ｛御影＊＊｝ dislike it?","What about your first love, Sensei?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("B040718500_07_010");
    MsgDisp("Mikage","That's probably true.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(1);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,4);
    VoicePlay("B040718500_07_020");
    MsgDisp("Mikage","I don't dislike it. But, watching it
with students is quite difficult,
isn't it?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("B040718500_07_030");
    MsgDisp("Mikage","Whereabouts unknown.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
