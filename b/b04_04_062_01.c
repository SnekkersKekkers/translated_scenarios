BGOpen("wf610",0);
ChLayout(1);
ChEye(4,0);
ChMouth(4,4);
ChMotion(4,1);
ScrFadeIn(0);
VoicePlay("B040406201_04_000");
MsgDisp("Nanatsumori","Oh... it's super pretty from this angle.
I wonder if I can take a good one.");
MsgSel("If it's ｛七ツ森＊｝, he can do it!","Burn it in your mind's eye instead of taking a picture!","Quantity wins!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("B040406201_04_010");
    MsgDisp("Nanatsumori","Well, I can.
There's no need to get worked up.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,0,1);
    ChEyeOpenLevel(4,8);
    VoicePlay("B040406201_04_020");
    MsgDisp("Nanatsumori","after I've engraved it into my memory, I
need to take one for the record.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040406201_04_030");
    MsgDisp("Nanatsumori","That's right. Alright. My phone is fully
charged. Let's take pictures of this blue
world.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
