BGOpen("fp410",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040510101_05_000");
MsgDisp("Hiiragi","There's plenty of documentation on
Habataki city.");
MsgSel("There's even a helmet passed down generations by castle lords","A princess' kimono!","An expensive looking vase");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,4);
    VoicePlay("B040510101_05_010");
    MsgDisp("Hiiragi","Yes, I could use it as reference 
for stage costumes.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040510101_05_020");
    MsgDisp("Hiiragi","It was state of the art fashion back
in those days. Even now,
it is perfectly beautiful.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(0);
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,1);
    ChEyeOpenLevel(5,0);
    VoicePlay("B040510101_05_030");
    MsgDisp("Hiiragi","As a Habataki citizen, you 
can't attach a price onto 
the objects here.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
