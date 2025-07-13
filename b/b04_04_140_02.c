BGOpen("ne210",0);
ChLayout(1);
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,1,1);
ScrFadeIn(0);
VoicePlay("B040414002_04_000");
MsgDisp("Nanatsumori","Both rock and visual 
kei bands are cool...");
MsgSel("Let's judge based off their music!","Does ｛七ツ森＊｝ want to try it too?","They're overflowing with individuality aren't they?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,0,1);
    VoicePlay("B040414002_04_010");
    MsgDisp("Nanatsumori","Ha?
What are you misunderstanding?");
    MsgDateResultDisp();
    break ;
    case 1:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(4,0);
        ChMouth(4,2);
        ChMotion(4,2,1);
        VoicePlay("B040414002_04_020");
        MsgDisp("Nanatsumori","I won't.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,4);
        ChMouth(4,2);
        ChMotion(4,2,1);
        VoicePlay("B040414002_04_030");
        MsgDisp("Nanatsumori","It's impossible.
I don't have any confidence 
in my sense of style.");
        MsgDisp("主人公","Really?
I think it's cool though.");
        ChEye(4,2);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("B040414002_04_040");
        MsgDisp("Nanatsumori","You can't start a band 
just because you're cool.");
        ChMouth(4,4);
        VoicePlay("B040414002_04_050");
        MsgDisp("Nanatsumori","Well, I'm trying to do something
similar in terms of outfits.");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,2,1);
        VoicePlay("B040414002_04_060");
        MsgDisp("Nanatsumori","But, if I could,
it would be funー....");
        MsgDisp("主人公","Right...");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("B040414002_04_070");
        MsgDisp("Nanatsumori","...Pfft!
Even you're considering it.");
        MsgDisp("主人公","It's making me imagin
e all sorts of things.");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040414002_04_080");
        MsgDisp("Nanatsumori","Then, how about the two of 
us form an amateur band?");
        MsgDisp("主人公","Ehh∋");
        ChEye(4,4);
        ChMouth(4,4);
        ChMotion(4,0,1);
        VoicePlay("B040414002_04_090");
        MsgDisp("Nanatsumori","You can do the vocals.
I'll... pretend to play some instruments");
        MsgDisp("主人公","That's unfair!
Then, I'll also, pretend to
do some vocals...");
        ChEye(4,0);
        ChMouth(4,0);
        ChMouthOpenLevel(4,0);
        VoicePlay("B040414002_04_100");
        MsgDisp("Nanatsumori","............");
        MsgDisp("主人公","............");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040414002_04_110");
        MsgDisp("Nanatsumori","In the end, we're better
off as the audience.");
        MsgDisp("主人公","right?");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040414002_04_120");
    MsgDisp("Nanatsumori","I can understand what each 
of them want to express...
I have to learn from their example.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
