BGOpen("fp310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1);
ScrFadeIn(0);
VoicePlay("B040409002_04_000");
MsgDisp("Nanatsumori","It's missing some impact...
It would be good for them to 
do a flashy event.");
MsgSel("I think it's fine as it is though...","｛七ツ森＊｝ should produce it!","Like setting off some huge fireworks?");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(4,0);
        ChMouth(4,2);
        ChMotion(4,2,1);
        VoicePlay("B040409002_04_010");
        MsgDisp("Nanatsumori","Ah-, well I guess they still have
some visitors that think that.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,0);
        ChMouth(4,0);
        ChMotion(4,0,1);
        VoicePlay("B040409002_04_020");
        MsgDisp("Nanatsumori","So that's what you think.
Hmmm....");
        MsgDisp("主人公","Is it weird?");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040409002_04_030");
        MsgDisp("Nanatsumori","No.
It's taught me something again.");
        ChEye(4,0);
        ChMouth(4,0);
        ChMotion(4,0,1);
        VoicePlay("B040409002_04_040");
        MsgDisp("Nanatsumori","I always thought that because there was a
\"standard\", that made the flashy and
lively changes all the more interesting.");
        ChEye(4,2);
        ChMouth(4,0);
        ChMotion(4,2,1);
        VoicePlay("B040409002_04_050");
        MsgDisp("Nanatsumori","Maybe it's my own ego that forces
changes that are not wanted.");
        MsgDisp("主人公","that's not...");
        ChEye(4,0);
        ChMouth(4,4);
        ChMotion(4,0,1);
        VoicePlay("B040409002_04_060");
        MsgDisp("Nanatsumori","It's true.
Thank you, as always.");
        MsgDisp("主人公","Eh?");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040409002_04_070");
        MsgDisp("Nanatsumori","When I'm with you, I begin to
notice my own egotistic side.");
        ChMotion(4,3,1);
        VoicePlay("B040409002_04_080");
        MsgDisp("Nanatsumori","That's why, you should continue to not 
hold back what you think.");
        MsgDisp("主人公","What I think...");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("B040409002_04_090");
        MsgDisp("Nanatsumori","Right.
Without hesitation.
Say what's on your mind.");
        MsgDisp("主人公","｛七ツ森＊｝......
yeah, got it!");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040409002_04_100");
        MsgDisp("Nanatsumori","Well even if we disagree and end up
fighting, let's enjoy that too, okay?");
        MsgDisp("主人公","(Ehhh～∋)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("B040409002_04_110");
    MsgDisp("Nanatsumori","No, I don't know much
about botanical gardens.
I don't think I can do it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040409002_04_120");
    MsgDisp("Nanatsumori","Ahー,\"flowers\" (hana), and \"fireworks\"
(hanabi). It's a bad pun, but it's easy to
understand. Why don't you try suggesting
that for real?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
