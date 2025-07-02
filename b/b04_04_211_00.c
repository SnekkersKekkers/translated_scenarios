BGOpen("tr210",0);
ChLayout(1);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040421100_04_000");
MsgDisp("Nanatsumori","Lots of animals are
coming out to greeet us.");
MsgSel("Let's take a closer look!","Let's take a picture with the animals!","Is there anywhere you want to see, ｛七ツ森＊｝?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B040421100_04_010");
    MsgDisp("Nanatsumori","ＯＫ.
The animals also have facial
expresssions? Let's be sure 
to get a proper look.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("B040421100_04_020");
    MsgDisp("Nanatsumori","That's fine but...
Let's look at the animals first, 
shall we?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,4);
    VoicePlay("B040421100_04_030");
    MsgDisp("Nanatsumori","I'm okay with starting anywhere.
I'll leave it to you.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
