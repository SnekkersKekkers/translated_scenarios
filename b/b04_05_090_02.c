BGOpen("fp310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChMouth(5,2);
ChMotion(5,4);
VoicePlay("B040509002_05_000");
MsgDisp("Hiiragi","Tropical plant illumination...
It seems to be open at night for a limited
time.");
MsgSel("It's like a jungle expedition team.","I wonder if the flowers bloom even at night...","Seems fun let's go!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,0);
    ChMouth(5,3);
    ChMotion(5,0);
    VoicePlay("B040509002_05_010");
    MsgDisp("Hiiragi","Yes, tropical plants at night...
There's a disquieting feeling to it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,2);
    VoicePlay("B040509002_05_020");
    MsgDisp("Hiiragi","Apparently it's a survival strategy that
focuses on moths. There's something to be
learnt from that way of thinking...");
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
        ChMouth(5,2);
        ChMotion(5,0);
        VoicePlay("B040509002_05_030");
        MsgDisp("Hiiragi","Aah, I'm sorry.
It starts a bit too late at night.
I'm sorry for getting your hopes up.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,4);
        ChMouth(5,2);
        ChMotion(5,2);
        VoicePlay("B040509002_05_040");
        MsgDisp("Hiiragi","Hーm...
It seems a bit too late for us.");
        ChEye(5,2);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("B040509002_05_050");
        MsgDisp("Hiiragi","I'm sorry for getting you excited for
nothing.");
        MsgDisp("主人公","No.
It is unfortunate though...");
        ChEye(5,3);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("B040509002_05_060");
        MsgDisp("Hiiragi","I see, well let's ask Mikage-sensei. I'm
sure he grows it at the horticulture club
or at home; a plant that blooms at night.");
        MsgDisp("主人公","Umm... I wanted to go to the botanical
garden at night with ｛柊＊＊＊｝.");
        ChEye(5,3);
        ChMouth(5,2);
        ChMotion(5,5);
        VoicePlay("B040509002_05_070");
        MsgDisp("Hiiragi","Ah, is that so.");
        ChMouth(5,3);
        ChMotion(5,0);
        ChEyeOpenLevel(5,#1);
        VoicePlay("B040509002_05_080");
        MsgDisp("Hiiragi","The crucial part is to be with you at
night, and not to look at plants!");
        MsgDisp("主人公","(｛柊＊＊＊｝, you can't say those kinds
of things at a botanical garden?)");
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
