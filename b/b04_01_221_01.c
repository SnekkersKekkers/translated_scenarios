BGOpen("tr320",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChLayout(1);
ChSet(1,0,1);
ScrFadeIn(0);
ChMotion(1,1);
VoicePlay("B040122101_01_000");
MsgDisp("Kazama","I wonder what the lord of Habataki
Castle was thinking as he stood here.");
MsgSel("What are you thinking,｛風真＊＊｝?","To unify the nation by force∈","Maybe that it was a bit tall and scary");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040122101_01_010");
    MsgDisp("Kazama","\"What is this elusive person
next to me thinking?\"");
    ChEyeOpenLevel(1,-1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040122101_01_020");
    MsgDisp("Kazama","What's wrong?
Did gou eat something strange?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,0);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040122101_01_030");
    MsgDisp("Kazama","That's how you felt just now...");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
