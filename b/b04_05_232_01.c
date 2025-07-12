BGOpen("tr430",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(5,255,0,4,4,#1,#1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040523201_05_000");
MsgDisp("Hiiragi","At the highest point, you can see the
horizon.");
MsgSel("｛柊＊＊＊｝, did you fall asleep?","That was Hanegasaki beach","I could also see the gondola next to us");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040523201_05_010");
    MsgDisp("Hiiragi","Was that obvious?
But, I woke up at the very top.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,4);
    VoicePlay("B040523201_05_020");
    MsgDisp("Hiiragi","With you here, 
we can go sightseeing around Habataki
city in the ferris wheel.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,0);
    VoicePlay("B040523201_05_030");
    MsgDisp("Hiiragi","Hey, next time tell me
when you can see it.
Okay?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
