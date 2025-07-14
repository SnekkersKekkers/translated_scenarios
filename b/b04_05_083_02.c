BGOpen("fp200",0);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChMouth(5,4);
VoicePlay("B040508302_05_000");
MsgDisp("Hiiragi","Over there, the walking pavement stretches
deep into the forest.");
MsgSel("It's a popular walking course","Seems like there's lots of mosquitoes...","Evening, the time of the fireflies is wonderful");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,4);
    VoicePlay("B040508302_05_010");
    MsgDisp("Hiiragi","That's nice.
It's hot, so let's take our time walking
in the shade.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChMotion(5,4);
    VoicePlay("B040508302_05_020");
    MsgDisp("Hiiragi","I thought it was fine in the daytime
though...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(5,2);
        ChEyeOpenLevel(5,8);
        VoicePlay("B040508302_05_030");
        MsgDisp("Hiiragi","I think even now is enough of a wonderful
time.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,2);
        ChMouth(5,2);
        ChEyeOpenLevel(5,8);
        VoicePlay("B040508302_05_040");
        MsgDisp("Hiiragi","I think even now is enough of a wonderful
time though?");
        MsgDisp("主人公","Ah, sorry.
That's not what I meant.");
        ChEye(5,3);
        ChMouth(5,4);
        ChMotion(5,4);
        VoicePlay("B040508302_05_050");
        MsgDisp("Hiiragi","I was just being a little mean-spirited.
I know you meant no malice by that.");
        MsgDisp("主人公","Hey...");
        ChEye(5,2);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("B040508302_05_060");
        MsgDisp("Hiiragi","I'm sorry...");
        ChEye(5,4);
        VoicePlay("B040508302_05_070");
        MsgDisp("Hiiragi","But, it's mysterious even to me.
The fact I did something so childish.");
        MsgDisp("主人公","Maybe it's caused by this place?");
        ChEye(5,0);
        ChMotion(5,4);
        VoicePlay("B040508302_05_080");
        MsgDisp("Hiiragi","Since it's a power spot?");
        ChEye(5,4);
        ChMotion(5,0);
        VoicePlay("B040508302_05_090");
        MsgDisp("Hiiragi","A powerspot that makes you mean to the
person you like a lot.
I'm not happy about it.");
        MsgDisp("主人公","Eh, like a lot...");
        ChEye(5,2);
        ChMouth(5,4);
        ChMotion(5,2);
        ChCheek(5,7);
        VoicePlay("B040508302_05_100");
        MsgDisp("Hiiragi","Ah, just now that was my inner voice.");
        MsgDisp("主人公","(｛柊＊＊＊｝'s liked person... Ehhh∈)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    default :
    DbgAssert(0);
    break ;
    }
