BGMPlay("BGM_PLACE_SHOP",0.01);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0);
ChLayout(1);
ScrFadeIn(0);
ChEye(5,3);
ChMouth(5,3);
ChMotion(5,3);
VoicePlay("B040501001_05_000");
MsgDisp("Hiiragi","Ah, that's nice.
How about wearing clothes like this once
in a while?");
MsgSel("Really, I might buy it!","Is that so...","It doesn't suit me!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,2);
    VoicePlay("B040501001_05_010");
    MsgDisp("Hiiragi","I'm sorry.
I'm rather bad at making jokes.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040501001_05_020");
    MsgDisp("Hiiragi","No need to hesitate.
As it was a joke.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040501001_05_030");
    MsgDisp("Hiiragi","That's right.
Please excuse me.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
