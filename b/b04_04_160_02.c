BGOpen("ne330",0);
ChLayout(1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1);
ScrFadeIn(0);
VoicePlay("B040416002_04_000");
MsgDisp("Nanatsumori","I've never dont photo stickers before.
Shall we take some?");
MsgSel("Eh∋That's surprising...","Are you okay with doing it with me?","Maybe it's better not to?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("B040416002_04_010");
    MsgDisp("Nanatsumori","Really?
I never go to the arcade by
myself after all.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040416002_04_020");
    MsgDisp("Nanatsumori","Huh, are you getting red?
Cute.");
    MsgDispSksp(1,0);
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
        ChMouth(4,2);
        ChMotion(4,0,1);
        ChEyeOpenLevel(4,8);
        VoicePlay("B040416002_04_030");
        MsgDisp("Nanatsumori","...For what reason?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,0,1);
        VoicePlay("B040416002_04_040");
        MsgDisp("Nanatsumori","Why?");
        MsgDisp("主人公","After all, ｛七ツ森＊｝ is a very popular
high school model. If this photo
were to be leaked...");
        ChEye(4,4);
        ChMouth(4,4);
        ChMotion(4,1,1);
        VoicePlay("B040416002_04_050");
        MsgDisp("Nanatsumori","Ahh, so that's what.
You really are a worrywart, aren't you?");
        MsgDisp("主人公","I mean, won't that cause 
you trouble, ｛七ツ森＊｝?");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("B040416002_04_060");
        MsgDisp("Nanatsumori","It won't.
If you'd like, I could 
even post it here?");
        MsgDisp("主人公","Ehhh∋");
        ChEye(4,3);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040416002_04_070");
        MsgDisp("Nanatsumori","Haha.");
        ChEye(4,4);
        ChMouth(4,2);
        ChMotion(4,2,1);
        VoicePlay("B040416002_04_080");
        MsgDisp("Nanatsumori","Ah... actually, I can't.
I can't post it.");
        MsgDisp("主人公","？");
        VoicePlay("B040416002_04_090");
        MsgDisp("Nanatsumori","You'll become a target.
Of guys.");
        MsgDisp("主人公","Eh?
There's no way that's true.");
        ChEye(4,0);
        ChMouth(4,2);
        ChMotion(4,0,1);
        VoicePlay("B040416002_04_100");
        MsgDisp("Nanatsumori","Hey...");
        ChEye(4,0);
        ChMouth(4,0);
        ChMotion(4,1,1);
        VoicePlay("B040416002_04_110");
        MsgDisp("Nanatsumori","It's time you realize it.
You're super attractive yourself.");
        ChEye(4,2);
        ChMouth(4,4);
        ChMotion(4,0,1);
        VoicePlay("B040416002_04_120");
        MsgDisp("Nanatsumori","Even when we're on a date, 
I'm more worried about how defenseless
you are than my true identity 
being revealed.");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040416002_04_130");
        MsgDisp("Nanatsumori","I'll be careful too.
But, you should as well.");
        MsgDisp("主人公","(｛七ツ森＊｝...)");
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