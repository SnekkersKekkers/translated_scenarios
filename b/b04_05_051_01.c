BGOpen("wf510",0);
BGMStop();
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChMouth(5,4);
VoicePlay("B040505101_05_000");
MsgDisp("Hiiragi","How was today's starry sky?");
MsgSel("It was beautiful!","It's no match for the real thing.","I was only looking at｛柊＊＊＊｝▼");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,4);
    VoicePlay("B040505101_05_010");
    MsgDisp("Hiiragi","Yes. I know they're man-made lights, but I
was completely taken by it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,1);
    VoicePlay("B040505101_05_020");
    MsgDisp("Hiiragi","That's very straight to the point.
I guess that's how it is.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChMotion(5,4);
    VoicePlay("B040505101_05_030");
    MsgDisp("Hiiragi","Yes, I noticed.
Then, please let me hear the
reasoning as to why that is.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
