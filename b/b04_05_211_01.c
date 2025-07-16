BGOpen("tr210",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040521101_05_000");
MsgDisp("Hiiragi","Konami the elephant looks well.");
MsgSel("She's like Habataki Zoo's mascot.","She's staring intently at ｛柊＊＊＊｝?","Seems like you like her?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(5,4);
    ChMotion(5,4);
    VoicePlay("B040521101_05_010");
    MsgDisp("Hiiragi","She's been loved by the citizens of
Habataki for many years... I hope the
theatre company will be like that too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040521101_05_020");
    MsgDisp("Hiiragi","Really, she remembered me?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(5,4);
    ChMotion(5,3);
    VoicePlay("B040521101_05_030");
    MsgDisp("Hiiragi","Yes, she has calm and gentle eyes.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
