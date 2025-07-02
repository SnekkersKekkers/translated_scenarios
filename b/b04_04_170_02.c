BGOpen("ne340",0);
ChLayout(1);
ChNanaType(-1);
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,2);
ScrFadeIn(0);
VoicePlay("B040417002_04_000");
MsgDisp("Nanatsumori","This room...
is surprisingly closed off.");
MsgSel("When you become aware of it, it's a bit embarassing...","Shall we do something heart-racing?","It's a bit hot, huh");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040417002_04_010");
    MsgDisp("Nanatsumori","Now you realize?
Even though we've come here so
many times together.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(4,2);
        ChMouth(4,1);
        ChMotion(4,1,1);
        VoicePlay("B040417002_04_020");
        MsgDisp("Nanatsumori","Your eyes are naughty.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,4);
        ChMouth(4,4);
        ChMotion(4,0,1);
        VoicePlay("B040417002_04_030");
        MsgDisp("Nanatsumori","How provocative...");
        ChEye(4,0);
        ChMotion(4,1,1);
        VoicePlay("B040417002_04_040");
        MsgDisp("Nanatsumori","...So?
What exactly are you going to do?");
        MsgDisp("主人公","How about I get a bit closer?");
        ChMotion(4,0,1);
        VoicePlay("B040417002_04_050");
        MsgDisp("Nanatsumori","Hmm.");
        MsgClose();
        SEPlay("EV_SE_530",0,0.9);
        ChClose(4,0,30);
        MsgClose();
        ChLayout(0);
        ChNanaType(-1);
        ChOpen(4,255,0,0,4,-1,-1,6,0,0,60);
        SEWait();
        VoicePlay("B040417002_04_060");
        MsgDisp("Nanatsumori","Like this?");
        MsgDisp("主人公","(Waah...his face is so close.)");
        ChMotion(4,1,1);
        ChEyeOpenLevel(4,10);
        VoicePlay("B040417002_04_070");
        MsgDisp("Nanatsumori","How is it?
Is this \"heart-racing\"?");
        ChEyeOpenLevel(4,-1);
        MsgDisp("主人公","Y-yeah.
My heart is beating super fast...");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("B040417002_04_080");
        MsgDisp("Nanatsumori","Mine too.");
        MsgDisp("主人公","(As I thought, 
｛七ツ森＊｝ really is cool...)");
        ChEye(4,0);
        ChMouth(4,0);
        ChEyeOpenLevel(4,10);
        ChMouthOpenLevel(4,0);
        ChCheek(4,8);
        VoicePlay("B040417002_04_090");
        MsgDisp("Nanatsumori","…………");
        ChEyeOpenLevel(4,-1);
        ChMouthOpenLevel(4,-1);
        VoicePlay("B040417002_04_100");
        MsgDisp("Nanatsumori","You really are cute.");
        MsgDisp("主人公","∈
Did you read my mind∋");
        ChEye(4,4);
        ChMouth(4,0);
        ChMotion(4,0,1);
        VoicePlay("B040417002_04_110");
        MsgDisp("Nanatsumori","Hm?
You mean to say that I'm cute?");
        MsgDisp("主人公","No, that you're cool.");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,2,1);
        ChCheek(4,10);
        VoicePlay("B040417002_04_120");
        MsgDisp("Nanatsumori","A-Ah, I see.");
        MsgClose();
        SEPlay("EV_SE_552",0.5,0.7,0.1);
        ChClose(4,0,30);
        MsgClose();
        ChLayout(1);
        ChNanaType(-1);
        ChOpen(4,255,0,4,3,-1,-1,10,0,0,60);
        SEWait();
        ChEye(4,4);
        ChMouth(4,1);
        ChMotion(4,2,1);
        VoicePlay("B040417002_04_130");
        MsgDisp("Nanatsumori","The excitement of the closed room has
come to an end. It's over.");
        MsgDisp("主人公","Y-yeah.");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040417002_04_140");
        MsgDisp("Nanatsumori","Crap.
I don' feel like singing anynmore.
Right?");
        MsgDisp("主人公","(Definitely.
That might've been a bit 
too stimulating...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("B040417002_04_150");
    MsgDisp("Nanatsumori","It's small, and tense.
Maybe I'll get comething cold to drink.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
