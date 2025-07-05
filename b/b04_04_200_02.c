BGOpen("tr110",0);
BGMPlay("BGM_PLACE_SKI_SKAT",0.01);
ChLayout(1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040420002_04_000");
MsgDisp("Nanatsumori","Skiwear is tough, isn't it?
I mean, it makes you look bulky...");
MsgSel("It's not a problem if you can ski coolly.","I don't care about fashion when skiing","If it's you, ｛七ツ森＊｝, you can pull it off!");
switch (MsgSelRsltGet()){
    case 0:
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
        VoicePlay("B040420002_04_010");
        MsgDisp("Nanatsumori","That prerequisite is impossible.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,2);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040420002_04_020");
        MsgDisp("Nanatsumori","If I could, that is.");
        ChEye(4,2);
        ChMouth(4,1);
        ChMotion(4,2,1);
        VoicePlay("B040420002_04_030");
        MsgDisp("Nanatsumori","Haa.
Maybe I should get an 
instructor to teach meー...");
        ChEye(4,1);
        ChMouth(4,1);
        ChEyeOpenLevel(4,0);
        VoicePlay("B040420002_04_040");
        MsgDisp("Nanatsumori","But, that would waste
our date time...");
        ChEye(4,0);
        ChMouth(4,0);
        ChMotion(4,0,1);
        VoicePlay("B040420002_04_050");
        MsgDisp("Nanatsumori","...Hey.
Is it unattractive to
not skate coolly?");
        MsgDisp("主人公","Hm?");
        ChEye(4,2);
        ChMotion(4,2,1);
        VoicePlay("B040420002_04_060");
        MsgDisp("Nanatsumori","I mean, both my skiwear and my
skiing are half-baked.");
        MsgDisp("主人公","Haha...!");
        ChEye(4,4);
        ChMouth(4,2);
        ChMotion(4,0,1);
        ChCheek(4,8);
        VoicePlay("B040420002_04_070");
        MsgDisp("Nanatsumori","Why are you laughing?");
        MsgDisp("主人公","That's just like you, ｛七ツ森＊｝.");
        ChEye(4,2);
        ChMouth(4,1);
        ChMotion(4,1,1);
        ChCheek(4,0);
        VoicePlay("B040420002_04_080");
        MsgDisp("Nanatsumori","Is it?");
        MsgDisp("主人公","No matter when it is, and no matter what
the situation is, you're always serious
about style and treat it with importance.");
        ChEye(4,4);
        ChMouth(4,4);
        ChMotion(4,2,1);
        VoicePlay("B040420002_04_090");
        MsgDisp("Nanatsumori","Well yeah?
If you took that from me,
I would have nothing left,");
        MsgDisp("主人公","That's not true.
I respect that of you 
very much, ｛七ツ森＊｝.");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,0,1);
        ChCheek(4,8);
        VoiceEVSPlay(4);
        VoicePlay("B040420002_04_100");
        MsgDisp("Nanatsumori","｛主人公｝...");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,3,1);
        ChCheek(4,0);
        VoicePlay("B040420002_04_110");
        MsgDisp("Nanatsumori","I kind of feel like I've broken 
through my doubts. I only need to 
try looking cool at work.");
        ChEye(4,4);
        VoicePlay("B040420002_04_120");
        MsgDisp("Nanatsumori","You accept me as I am.
...Thank you.");
        MsgDisp("主人公","(｛七ツ森＊｝……)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,2,1);
    ChEyeOpenLevel(4,8);
    VoicePlay("B040420002_04_130");
    MsgDisp("Nanatsumori","Hmm...
That's quite sloppy.");
    MsgDateResultDisp();
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040420002_04_140");
    MsgDisp("Nanatsumori","That's a baseless overestimation.
Well, I would like to think so.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
