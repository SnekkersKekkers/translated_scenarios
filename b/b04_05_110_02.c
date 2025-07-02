BGMPlay("BGM_PLACE_POOL",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("B040511002_05_000");
MsgDisp("Hiiragi","There's a jacuzzi bath.");
MsgSel("Should we get in at once?","It feels warm doesn't it?","It gets you in the mood for a hot spring huh");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(5,0);
        ChMouth(5,2);
        ChMotion(5,4);
        VoicePlay("B040511002_05_010");
        MsgDisp("Hiiragi","Eh? So suddenly?
We're swimming, so we cant't.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,4);
        ChMouth(5,3);
        ChMotion(5,4);
        VoicePlay("B040511002_05_020");
        MsgDisp("Hiiragi","Heheh, so suddenly?
I don't know what you came here for.");
        MsgDisp("主人公","But, it's empty now.
Looks like it's for private use.");
        ChEye(5,0);
        ChMouth(5,4);
        VoicePlay("B040511002_05_030");
        MsgDisp("Hiiragi","Private use, huh?");
        ChEye(5,3);
        ChMouth(5,3);
        ChMotion(5,5);
        ChCheek(5,7);
        VoicePlay("B040511002_05_040");
        MsgDisp("Hiiragi","! Just the two of us——
Then, let's hurry.");
        MsgClose();
        SEPlay("EV_SE_558");
        ChClose(5);
        ChCheek(5,0);
        SEWait();
        MsgDisp("主人公","｛柊＊＊＊｝, you shouldn't run by the pool
side.");
        MsgClose();
        SEPlay("EV_SE_508");
        SEWait();
        ChOpen(5,31,0,2,4,-1,-1,0,0);
        ChMotion(5,4);
        VoicePlay("B040511002_05_050");
        MsgDisp("Hiiragi","I am ashamed.");
        ChEye(5,3);
        ChMouth(5,3);
        ChMotion(5,3);
        VoicePlay("B040511002_05_060");
        MsgDisp("Hiiragi","But, let's hurry.
To feel like I'm in a private hot spring 
with you, running by the poolside is okay.");
        MsgDisp("主人公","(｛柊＊＊＊｝, do you like jacuzzi baths
that much?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(2);
    ChMotion(5,4);
    VoicePlay("B040511002_05_070");
    MsgDisp("Hiiragi","Yes.
Shall we go for a swim?");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(5,4);
    ChMotion(5,2);
    ChCheek(5,7);
    VoicePlay("B040511002_05_080");
    MsgDisp("Hiiragi","That's right.
Feeling like I'm in a hot
spring with you...");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
