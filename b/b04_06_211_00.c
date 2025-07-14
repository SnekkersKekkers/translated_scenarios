BGOpen("tr210",0);
ChLayout(1);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040621100_06_000");
MsgDisp("Himuro","I can hear all sorts 
of different cries...");
MsgSel("Let's get a closer look!","Let's take a picture with the animals!","｛氷室＊＊｝, is there anywhere you want to go?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040621100_06_010");
    MsgDisp("Himuro","Sounds good.
Since we're here anyways.
What do you want to see first?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040621100_06_020");
    MsgDisp("Himuro","I'll take the picture for you, feel free
to take some solo.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040621100_06_030");
    MsgDisp("Himuro","...Don't make me decide?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
