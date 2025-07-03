BGOpen("tr320",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChLayout(1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040422100_04_000");
MsgDisp("Nanatsumori","Hmー.
The view is nice, as I thought.");
MsgSel("You can see the whole of Habataki City in one sweep of the eye▼","Just the scenery?","I'm happy to see this with｛七ツ森＊｝");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    VoicePlay("B040422100_04_010");
    MsgDisp("Nanatsumori","The city, the sea, the mountains, too.
You can see it allー.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,1,1);
    ChEyeOpenLevel(4,8);
    VoicePlay("B040422100_04_020");
    MsgDisp("Nanatsumori","...Was there something else?");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,2,1);
    VoicePlay("B040422100_04_030");
    MsgDisp("Nanatsumori","...Well, I'm also glad
it's you next to me.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }