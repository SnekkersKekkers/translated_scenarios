BGOpen("fp210",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040508101_05_000");
MsgDisp("Hiiragi","Sakura petals are dancing around you.");
MsgSel("That's a cute-sounding expression right?","Well, join in too,｛柊＊＊＊｝?","They're dancing around｛柊＊＊＊｝too?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,4);
    VoicePlay("B040508101_05_010");
    MsgDisp("Hiiragi","Yes, that's a perfectly-suited expression
for you.");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(5,4);
    ChMouth(5,2);
    ChMotion(5,4);
    VoicePlay("B040508101_05_020");
    MsgDisp("Hiiragi","I'm not dancing.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("B040508101_05_030");
    MsgDisp("Hiiragi","That's right.
It's as if I can hear their 
happy sounding voices.");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
