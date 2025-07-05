BGOpen("wf610",0);
ChLayout(1);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040406202_04_000");
MsgDisp("Nanatsumori","I could stay here all day and never get
bored.");
MsgSel("It's a bit chilly in a swim suit, isn't it?","You mightneed a table and chair","I'll join you▼");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,2,1);
    ChCheek(4,5);
    VoicePlay("B040406202_04_010");
    MsgDisp("Nanatsumori","Yeah... for sure.
I wouldn't know where to look.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040406202_04_020");
    MsgDisp("Nanatsumori","Sounds nice.
If there was a fluffy sofa, 
I wouldn't move again.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(4,2);
        ChMouth(4,1);
        ChMotion(4,1,1);
        VoicePlay("B040406202_04_030");
        MsgDisp("Nanatsumori","Wait a minute.
Your eyes are kinda scary");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040406202_04_040");
        MsgDisp("Nanatsumori","Welcome, welcome.");
        MsgDisp("主人公","Hehe.");
        ChEye(4,0);
        ChMotion(4,2,1);
        ChEyeOpenLevel(4,0);
        VoicePlay("B040406202_04_050");
        MsgDisp("Nanatsumori","...
That might be the best.");
        MsgDisp("主人公","Hm?");
        ChEye(4,0);
        ChMotion(4,2);
        ChEyeOpenLevel(4,7);
        VoicePlay("B040406202_04_060");
        MsgDisp("Nanatsumori","In the best location, with
the person you like, all day. Just
the two of you. I wonder how nice
it would feel.");
        MsgDisp("主人公","That's right.
The person I like...");
        ChEye(4,0);
        ChMouth(4,0);
        ChMotion(4,0,1);
        ChMouthOpenLevel(4,0);
        VoicePlay("B040406202_04_070");
        MsgDisp("Nanatsumori","…………");
        ChEye(4,4);
        ChMouth(4,1);
        ChEyeOpenLevel(4,10);
        ChCheek(4,10);
        VoicePlay("B040406202_04_080");
        MsgDisp("Nanatsumori","∈");
        ChEye(4,4);
        ChMouth(4,4);
        ChMotion(4,2,1);
        VoicePlay("B040406202_04_090");
        MsgDisp("Nanatsumori","Crap.
I was already caught in a dream.");
        MsgDisp("主人公","？？？");
        ChEye(4,4);
        ChMouth(4,3);
        ChEyeOpenLevel(4,0);
        VoicePlay("B040406202_04_100");
        MsgDisp("Nanatsumori","I see, so it's this sort of feeling...
Like heaven on earth...");
        MsgDisp("主人公","(｛七ツ森＊｝？)");
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
