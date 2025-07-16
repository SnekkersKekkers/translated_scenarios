BGOpen("fp410",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040510100_05_000");
MsgDisp("Hiiragi","It's nice here.
I can learn a lot about Habataki City.");
MsgSel("Habataki City's history is wonderful huh?","That mask looks like someone...","I feel the romance of ancient times");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(5,4);
    ChMotion(5,3);
    VoicePlay("B040510100_05_010");
    MsgDisp("Hiiragi","That's right. As a Habtaki citizen I'd
like to know about it. I would be happy if
you taught me.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(5,4);
    ChMouth(5,2);
    ChMotion(5,4);
    VoicePlay("B040510100_05_020");
    MsgDisp("Hiiragi","Come to think of it, I think I see it
every morning.
... Does it resemble me?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChMouth(5,2);
    ChMotion(5,2);
    VoicePlay("B040510100_05_030");
    MsgDisp("Hiiragi","Habataki-style pottery?
I wonder which part of it is Habataki
style...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
