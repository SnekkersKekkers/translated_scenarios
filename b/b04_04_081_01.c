BGOpen("fp210",0);
ChLayout(1);
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,2);
ChEyeOpenLevel(4,8);
ScrFadeIn(0);
VoicePlay("B040408101_04_000");
MsgDisp("Nanatsumori","Sakura is a common motif, so I'm a bit
tired of it...");
MsgSel("Are you thinking of posting?","The classics are great!","Are you saying you've had enough?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("B040408101_04_010");
    MsgDisp("Nanatsumori","Right.
I'll take a picture for noe.");
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,4,1);
    VoicePlay("B040408101_04_020");
    MsgDisp("Nanatsumori","I get it, so shh.
If there are people who think that, maybe
I'm just overthinking it.");
    ChMotion(4,0,1);
    MsgDispBGSksp(1,1);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(1,1);
    break ;
    case 2:
    DateRateSet(1);
    ChMotion(4,1,1);
    ChEyeOpenLevel(4,#1);
    VoicePlay("B040408101_04_030");
    MsgDisp("Nanatsumori","I didn't say that.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
