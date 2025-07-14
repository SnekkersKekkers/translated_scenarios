BGOpen("tr420",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(2,255,4,0,4,#1,#1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040223102_02_000");
MsgDisp("Sassa","When it comes to rollercoasters, I never
know when to stop, you know?");
MsgSel("When your feet begin to stagger","Isn't once enough?","I wish it was longer");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("B040223102_02_010");
    MsgDisp("Sassa","That's no good.
From now on, let's only go once.");
    MsgDateResultDisp();
    break ;
    case 1:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(2,0);
        ChMouth(2,2);
        ChMotion(2,0);
        VoicePlay("B040223102_02_020");
        MsgDisp("Sassa","Sorry, did I push you too hard?
But, you need to say it sooner.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,5);
        VoicePlay("B040223102_02_030");
        MsgDisp("Sassa","Eh? Did you dislike it that much?");
        MsgDisp("主人公","No. It's just that I don't ride it many
times.");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040223102_02_040");
        MsgDisp("Sassa","I see, but make sure you tell me?
I also quite like things that aren't
coasters.");
        ChEye(2,0);
        ChMouth(2,2);
        ChMotion(2,2);
        ChEyeOpenLevel(2,7);
        VoicePlay("B040223102_02_050");
        MsgDisp("Sassa","...Ah, But there are things I'm not eager
about.");
        MsgDisp("主人公","Hehe.");
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,4);
        VoicePlay("B040223102_02_060");
        MsgDisp("Sassa","You're laughing huh?");
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,3);
        VoicePlay("B040223102_02_070");
        MsgDisp("Sassa","That's right.
Things like haunted houses.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,3);
        VoicePlay("B040223102_02_080");
        MsgDisp("Sassa","But, that's that.
If I'm with you, anything is fine.");
        MsgDisp("主人公","That goes for me too.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040223102_02_090");
        MsgDisp("Sassa","Then, let's try each other's weaknesses
once.
It's a gentleman's agreement.");
        MsgDisp("主人公","Yes.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040223102_02_100");
        MsgDisp("Sassa","Alright, then next...");
        MsgDisp("主人公","(｛颯砂＊＊｝, Thanks for always looking
out for me.)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040223102_02_110");
    MsgDisp("Sassa","That's a good idea.
A long distance rollercoaster.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
