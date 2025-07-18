BGOpen("wf221",0);
ChLayout(1);
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,0);
ScrFadeIn(0);
ChMotion(8,3,1);
ChEyeOpenLevel(8,0);
VoicePlay("B040802201_08_000");
MsgDisp("Shirahane","What nice weather!
Both the sea and sun are beautiful.");
MsgSel("Is it because ｛大地＊＊｝ is a sunny guy?","A perfect day for a date.","Is it blessing us?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(8,0);
    ChMouth(8,4);
    ChMotion(8,2,1);
    VoicePlay("B040802201_08_010");
    MsgDisp("Shirahane","Hm?
I wonder.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(8,4);
    ChMouth(8,0);
    ChMotion(8,2,1);
    ChCheek(8,7);
    VoicePlay("B040802201_08_020");
    MsgDisp("Shirahane","Hehe!
Is it cause we've both been on our best
behaviour?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(8,4);
    ChMouth(8,4);
    ChMotion(8,2,1);
    ChCheek(8,5);
    VoicePlay("B040802201_08_030");
    MsgDisp("Shirahane","That's a bit of an exaggeration isn't it?
....But, that is how I feel.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
