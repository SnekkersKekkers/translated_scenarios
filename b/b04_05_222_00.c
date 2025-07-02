BGOpen("tr310",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChEye(5,2);
ChMotion(5,4);
VoicePlay("B040522200_05_000");
MsgDisp("Hiiragi","I have special sentiments towards Habataki
castle, but as for the historical
documents and records...");
MsgSel("I'm also really don't know much about it.","I wonder if it'll be fun once you read it?","It's amazing these objects are several hundred years old.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("B040522200_05_010");
    MsgDisp("Hiiragi","Whilst it is embarassing, me too.
It's not enough to just like it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChMotion(5,2);
    VoicePlay("B040522200_05_020");
    MsgDisp("Hiiragi","I think it'll be enjoyable.
Hmm, should I study it?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChMouth(5,2);
    ChEyeOpenLevel(5,0);
    VoicePlay("B040522200_05_030");
    MsgDisp("Hiiragi","I understand that well enough but...");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
