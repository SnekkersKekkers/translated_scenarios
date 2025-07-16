BGOpen("fp410",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,2);
ChEyeOpenLevel(4,0);
ScrFadeIn(0);
VoicePlay("B040410100_04_000");
MsgDisp("Nanatsumori","I'm sleepy.
I feel like I've been hypnotised.");
MsgSel("The history of Habataki City sure is wonderful, right?","I feel like that mask looks like someone...","I feel a sense of ancient romance");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    VoicePlay("B040410100_04_010");
    MsgDisp("Nanatsumori","I don't get what you mean by wonderful...");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChMotion(4,0,1);
    ChEyeOpenLevel(4,7);
    VoicePlay("B040410100_04_020");
    MsgDisp("Nanatsumori","Eh, which one?
... Hmmー who, I wonder...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("B040410100_04_030");
    MsgDisp("Nanatsumori","Romance huh..
Well, if it was stimulating for you, I'm
glad.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
