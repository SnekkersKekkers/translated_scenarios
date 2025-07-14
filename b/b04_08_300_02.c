BGOpen("bh810",0);
ChLayout(1);
ChEye(8,4);
ChMouth(8,0);
ChMotion(8,2);
ChCheek(8,5);
ScrFadeIn(0);
VoicePlay("B040830002_08_000");
MsgDisp("Shirahane","I'm so nervous even though it's my own
room...");
MsgSel("It's just us right?","Should we make things more exciting?","You won't notice it as soon as we start talking.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChMotion(8,4,1);
    ChCheek(8,3);
    VoicePlay("B040830002_08_010");
    MsgDisp("Shirahane","That's right....
It's just the two of us.");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(8,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(8,2);
        ChMouth(8,4);
        ChMotion(8,0,1);
        VoicePlay("B040830002_08_020");
        MsgDisp("Shirahane","That's no good.
That sorta teasin' isn't like you.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(8,2);
        ChMouth(8,4);
        ChMotion(8,0,1);
        ChCheek(8,7);
        VoicePlay("B040830002_08_030");
        MsgDisp("Shirahane","Don't do that!
That sorta...");
        ChEye(8,2);
        ChMouth(8,4);
        ChMotion(8,4,1);
        ChMouthOpenLevel(8,0);
        VoicePlay("B040830002_08_040");
        MsgDisp("Shirahane","............");
        ChMouth(8,4);
        VoicePlay("B040830002_08_050");
        MsgDisp("Shirahane","...Am I bein' a coward?");
        MsgDisp("主人公","Eh?");
        ChEye(8,2);
        ChMouth(8,4);
        ChMotion(8,0,1);
        VoicePlay("B040830002_08_060");
        MsgDisp("Shirahane","Should I become the kinda guy who can
respond coolly to things like that?");
        ChEye(8,2);
        ChMouth(8,2);
        ChEyeOpenLevel(8,0);
        VoicePlay("B040830002_08_070");
        MsgDisp("Shirahane","Haa...");
        MsgDisp("主人公","｛大地＊＊｝?");
        ChEye(8,2);
        ChMouth(8,0);
        ChMotion(8,2,1);
        VoiceEVSPlay(8);
        VoicePlay("B040830002_08_080");
        MsgDisp("Shirahane","｛主人公｝, forgive me.
I'm a late bloomer when it comes ta love.");
        ChEye(8,2);
        ChMouth(8,4);
        ChMotion(8,0,1);
        VoicePlay("B040830002_08_090");
        MsgDisp("Shirahane","That's why I might not be able ta meet up
ta yer expectations.");
        ChEye(8,0);
        ChMouth(8,4);
        ChEyeOpenLevel(8,10);
        VoicePlay("B040830002_08_100");
        MsgDisp("Shirahane","But, I want ta understand.
I like you, so I feel like I want ta
cherish you.");
        ChEye(8,4);
        ChMouth(8,0);
        ChMotion(8,4,1);
        VoicePlay("B040830002_08_110");
        MsgDisp("Shirahane","Hehe..
I said it.");
        MsgDisp("主人公","(｛大地＊＊｝......)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(3);
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,0,1);
    VoicePlay("B040830002_08_120");
    MsgDisp("Shirahane","That's right!
Then, le's talk!
There's plenty ta talk about♪");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
