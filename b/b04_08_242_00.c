BGOpen("tr520",0);
ChLayout(1);
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,0);
ScrFadeIn(0);
ChMotion(8,3,1);
VoicePlay("B040824200_08_000");
MsgDisp("Shirahane","It's a pretty place!
Not only that, it's a
perfect day for camping♪");
MsgSel("｛大地＊＊｝,I'm counting on you♪","Camping means BBQ!","It seems inconvenient and tough...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(8,4);
    ChMouth(8,0);
    ChMotion(8,3,1);
    ChEyeOpenLevel(8,0);
    VoicePlay("B040824200_08_010");
    MsgDisp("Shirahane","Leave it to me.
Today is a chance for me to show
you my manliness!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,0,1);
    VoicePlay("B040824200_08_020");
    MsgDisp("Shirahane","Sounds good!
Leave the cooking and
preparation to me.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(8,0);
    ChMouth(8,0);
    ChMotion(8,0,1);
    VoicePlay("B040824200_08_030");
    MsgDisp("Shirahane","It's not as inconvenient as you say?
Well, leave it to me.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
