BGOpen("fp200",0);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChMouth(5,4);
VoicePlay("B040508501_05_000");
MsgDisp("Hiiragi","Strangely, it might be warmer here than
elsewhere.");
MsgSel("It's because it's a powerspot","｛柊＊＊＊｝'s clothes look nice and warm'","I think I'm a bit cold");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(5,3);
    ChMouth(5,2);
    ChMotion(5,4);
    VoicePlay("B040508501_05_010");
    MsgDisp("Hiiragi","Is this also an effect of the fireflies?");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(5,4);
    ChMouth(5,3);
    VoicePlay("B040508501_05_020");
    MsgDisp("Hiiragi","Not judging by its temperature, but my
fashion, how is it?");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(5,2);
    ChMouth(5,2);
    VoicePlay("B040508501_05_030");
    MsgDisp("Hiiragi","Eh? You should've said that sooner. Let's
go somewhere warm. Come on.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
