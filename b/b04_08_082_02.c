BGOpen("fp200",0);
ChLayout(1);
ChEye(8,0);
ChMouth(8,4);
ChMotion(8,0);
ScrFadeIn(0);
ChMotion(8,2,1);
VoicePlay("B040808202_08_000");
MsgDisp("Shirahane","There's an an urban legend here.
When you look at the fireflies flying
around, you'll unintentionally reveal
what's in your heart.");
MsgSel("I don't believe it","It sure is strange, isn't it...","I want to know what's in｛大地＊＊｝'s heart.'▼");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(8,2);
    ChMouth(8,0);
    ChMotion(8,0,1);
    VoicePlay("B040808202_08_010");
    MsgDisp("Shirahane","Well, it is an urban legend.
Take it with a grain of salt, yeah?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(8,3);
    ChMouth(8,0);
    ChMotion(8,0,1);
    VoicePlay("B040808202_08_020");
    MsgDisp("Shirahane","It really is.
But, it must be that beautiful.
I'd like to see it with you one day.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(8,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(8,2);
        ChMouth(8,4);
        ChMotion(8,3,1);
        ChCheek(8,5);
        VoicePlay("B040808202_08_030");
        MsgDisp("Shirahane","Sorry!
But I definitely can't do that...");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(8,4);
        ChMouth(8,5);
        ChMotion(8,0,1);
        ChCheek(8,5);
        VoicePlay("B040808202_08_040");
        MsgDisp("Shirahane","eh...why?");
        MsgDisp("主人公","I want to know what
｛大地＊＊｝ is thinking.");
        ChEye(8,4);
        ChMouth(8,4);
        ChMotion(8,4,1);
        VoicePlay("B040808202_08_050");
        MsgDisp("Shirahane","Hmー...");
        ChMouth(8,4);
        ChEyeOpenLevel(8,-1);
        VoicePlay("B040808202_08_060");
        MsgDisp("Shirahane","That's right, but that won't be because we
saw the fireflies, but because I'll
confide in you myself.");
        MsgDisp("主人公","That's fine, let's hear it?");
        ChEye(8,4);
        ChMouth(8,2);
        ChMotion(8,3,1);
        ChCheek(8,7);
        VoicePlay("B040808202_08_070");
        MsgDisp("Shirahane","It's no good.
I can't right now!");
        MsgDisp("主人公","？");
        ChEye(8,2);
        ChMouth(8,0);
        ChMotion(8,2,1);
        VoicePlay("B040808202_08_080");
        MsgDisp("Shirahane","Please forgive me.
When I properly muster the courage, 
I'll reveal it all to you. Okay?");
        MsgDisp("主人公","（｛大地＊＊｝……）");
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
