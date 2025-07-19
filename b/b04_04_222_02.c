BGOpen("tr310",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChLayout(1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ScrFadeIn(0);
ChMotion(4,1,1);
VoicePlay("B040422202_04_000");
MsgDisp("Nanatsumori","For some reason we came here...
Do you like this place?");
MsgSel("Yeah, I do!","Not really...","If I'm with ｛七ツ森＊｝▼");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040422202_04_010");
    MsgDisp("Nanatsumori","Got it.
I feel like I'm getting somewhat
interested too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,0,1);
    ChEyeOpenLevel(4,10);
    VoicePlay("B040422202_04_020");
    MsgDisp("Nanatsumori","Eh? then, why did we come here?");
    MsgDateResultDisp();
    break ;
    case 2:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,2,1);
        ChEyeOpenLevel(4,8);
        VoicePlay("B040422202_04_030");
        MsgDisp("Nanatsumori","Uh...
There's no need for stuff like that.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,2);
        ChMouth(4,4);
        ChMotion(4,2,1);
        VoicePlay("B040422202_04_040");
        MsgDisp("Nanatsumori","I don't get your reasoning.");
        MsgDisp("主人公","｛七ツ森＊｝, do you hate it here?");
        ChEye(4,0);
        ChMouth(4,0);
        ChMotion(4,0,1);
        VoicePlay("B040422202_04_050");
        MsgDisp("Nanatsumori","Hmm.
I don't think it's suited for a date.");
        MsgDisp("主人公","I see.");
        ChEye(4,0);
        ChMouth(4,0);
        ChMotion(4,1,1);
        VoicePlay("B040422202_04_060");
        MsgDisp("Nanatsumori","So?
Is the reason you came here with me is
because it's fun?");
        MsgDisp("主人公","That's because...
It feels like we're going back in time,
the two of us.");
        ChEye(4,0);
        ChMouth(4,0);
        ChMotion(4,3,1);
        VoicePlay("B040422202_04_070");
        MsgDisp("Nanatsumori","I see...so you're having delusions.");
        MsgDisp("主人公","Hey, don't put it like that.");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040422202_04_080");
        MsgDisp("Nanatsumori","But, they are delusions?
Are we following the story of the town
girl and the lord, then?");
        ChEye(4,0);
        ChMouth(4,0);
        ChMotion(4,2,1);
        ChEyeOpenLevel(4,0);
        ChMouthOpenLevel(4,0);
        VoicePlay("B040422202_04_090");
        MsgDisp("Nanatsumori","......");
        ChEye(4,0);
        ChMouth(4,4);
        ChMotion(4,0,1);
        ChCheek(4,7);
        VoicePlay("B040422202_04_100");
        MsgDisp("Nanatsumori","It's not bad.");
        MsgDisp("主人公","(I won!)");
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
