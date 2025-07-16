BGOpen("tr110",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChLayout(1);
ChEye(4,2);
ChMouth(4,1);
ChMotion(4,2);
ScrFadeIn(0);
VoicePlay("B040420001_04_000");
MsgDisp("Nanatsumori","The landscape is beautiful but...
It;s cold∈");
MsgSel("This cold is nice.","You'll get warm if you move about","Maybe it's best to look at it from indoors?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(4,2);
    ChMotion(4,1,1);
    ChEyeOpenLevel(4,8);
    VoicePlay("B040420001_04_010");
    MsgDisp("Nanatsumori","Okay?
What?
Don't just say nonsense.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("B040420001_04_020");
    MsgDisp("Nanatsumori","Our tempo is a bit dodgy but... well, lets
skate.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0,1);
    ChEyeOpenLevel(4,8);
    VoicePlay("B040420001_04_030");
    MsgDisp("Nanatsumori","Seriously, that's it.
In a warm place, gracefully, and
comfortably.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
