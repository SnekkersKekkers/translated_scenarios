BGOpen("fp210",0);
ChLayout(1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040408100_04_000");
MsgDisp("Nanatsumori","Ohー, they're in full bloom.");
MsgSel("｛七ツ森＊｝, the flurry of falling cherry blossoms suit you.","The time in which you can see the falling cherry blossoms is so fleeting...","I want to eat some delicious cherry blossom mochi");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,1,1);
    VoicePlay("B040408100_04_010");
    MsgDisp("Nanatsumori","Right.
It suits you too.");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,2,1);
    VoicePlay("B040408100_04_020");
    MsgDisp("Nanatsumori","Fleeting, huh?
It's definitely sad that they fall in such
a short period of time.");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040408100_04_030");
    MsgDisp("Nanatsumori","Dumplings over flowers.
Nice, count me in!");
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
