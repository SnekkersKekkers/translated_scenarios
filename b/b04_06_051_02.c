BGOpen("wf510",0);
BGMStop();
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040605102_06_000");
MsgDisp("Himuro","...The pair beside us weren't even
looking at the stars at all.
I wonder what they came here for.");
MsgSel("To love each other?","What a waste of money!","I'm jealous!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(6,1);
    ChMouth(6,1);
    ChMotion(6,0);
    VoicePlay("B040605102_06_010");
    MsgDisp("Himuro","Ha...?
What does that even mean?");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("B040605102_06_020");
    MsgDisp("Himuro","It's not that kind of problem but...
Well, you have a point.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(6,1);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040605102_06_030");
        MsgDisp("Himuro","To shamelessly pine after someone?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040605102_06_040");
        MsgDisp("Himuro","You're jealous...?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040605102_06_050");
        MsgDisp("Himuro","But I can't comprehend it.
It's a public space?");
        MsgDisp("主人公","It must mean there's someone you're that
crazy about right?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040605102_06_060");
        MsgDisp("Himuro","......");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040605102_06_070");
        MsgDisp("Himuro","If there's someone you love from the
bottom of your heart, you don't car about
your surroundings...?");
        ChEye(6,0);
        ChMouth(6,2);
        ChMotion(6,2);
        VoicePlay("B040605102_06_080");
        MsgDisp("Himuro","I...haven't experienced something like
that.");
        MsgDisp("主人公","Would you also want to experience a love
like that one day, ｛氷室＊＊｝?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040605102_06_090");
        MsgDisp("Himuro","...I would probably be lying if I said I
wasn't interested.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040605102_06_100");
        MsgDisp("Himuro","But, who it is very important.");
        MsgDisp("主人公","Are there any contenders?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040605102_06_110");
        MsgDisp("Himuro","That's...");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        ChCheek(6,10);
        VoicePlay("B040605102_06_120");
        MsgDisp("Himuro","There's no point in going into that much
detail.
That's a violation of privacy.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        ChClose(6);
        SEWait();
        MsgDisp("主人公","(?
｛氷室＊＊｝'s face is red?)");
        MsgClose();
        ScrFadeOut(0);
        MsgClose();
        ChOpen(6,253,0,0,0,#1,#1,0,0,0,0);
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
