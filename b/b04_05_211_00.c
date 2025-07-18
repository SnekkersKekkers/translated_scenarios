BGOpen("tr210",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,2,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040521100_05_000");
MsgDisp("Hiiragi","As expected of Habtaki Zoo.
It's abundant in both variety and
quantity.");
MsgSel("I want to see more up close!","Let's take a picture with the animals!","｛柊＊＊＊｝, do you have somewhere you want to see?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040521100_05_010");
    MsgDisp("Hiiragi","That's fine but, that depends on what
animal it is.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B040521100_05_020");
    MsgDisp("Hiiragi","It's a baby isn't it.
I'm relieved if that's the case.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChMotion(5,4);
    VoicePlay("B040521100_05_030");
    MsgDisp("Hiiragi","That's right. If you don't wish to see
that...Let's start with the elephant over
there, in order of largest to smallest.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
