BGOpen("tr440",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChNanaType(-1);
ChOpen(4,255,0,1,1,-1,-1,0,0);
ScrFadeIn(0);
ChMotion(4,2,1);
VoicePlay("B040423302_04_000");
MsgDisp("Nanatsumori","Ahー...
My hair and clothes are a mess.");
MsgSel("That disheveled look gets my heart racing...","I'm probably a mess too...","That's how amusement parks are!");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,0,1);
        VoicePlay("B040423302_04_010");
        MsgDisp("Nanatsumori","Scary.
Please don't look at me?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,2);
        ChMouth(4,4);
        ChMotion(4,0,1);
        VoicePlay("B040423302_04_020");
        MsgDisp("Nanatsumori","Is that so?");
        MsgDisp("主人公","Yeah.
There's a sort of grown-up,
sexy look to it...");
        ChEye(4,0);
        ChMouth(4,0);
        ChMotion(4,1,1);
        VoicePlay("B040423302_04_030");
        MsgDisp("Nanatsumori","Well, I am that kind of model.");
        MsgDisp("主人公","Hmm, is that so?");
        ChEye(4,2);
        ChMouth(4,1);
        ChMotion(4,0,1);
        VoicePlay("B040423302_04_040");
        MsgDisp("Nanatsumori","Eh?
...What did you think I was?");
        MsgDisp("主人公","I thought you were a model who
could fit into any situation.");
        ChEye(4,0);
        ChMouth(4,0);
        ChMotion(4,1,1);
        ChEyeOpenLevel(4,10);
        VoicePlay("B040423302_04_050");
        MsgDisp("Nanatsumori","...Wow.
That's kind of surprising.");
        ChEyeOpenLevel(4,-1);
        MsgDisp("主人公","Really?
｛七ツ森＊｝'s work photos always show
a different world.");
        ChEye(4,5);
        ChMouth(4,2);
        ChMotion(4,0,1);
        VoicePlay("B040423302_04_060");
        MsgDisp("Nanatsumori","！");
        MsgDisp("主人公","Sometimes it's gentle, sometimes scary,
you can also sometimes feel something sad
about it. Of course, there's sexy too.");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,2,1);
        ChEyeOpenLevel(4,0);
        VoicePlay("B040423302_04_070");
        MsgDisp("Nanatsumori","Haha...");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("B040423302_04_080");
        MsgDisp("Nanatsumori","This is the happiest I've been.
More than being praised by the cameraman
or the producer on site.");
        VoicePlay("B040423302_04_090");
        MsgDisp("Nanatsumori","It got through to the person 
I wanted to convey it to most.
My message, I mean.");
        MsgDisp("主人公","Your message...");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040423302_04_100");
        MsgDisp("Nanatsumori","I'm mixing work with my private affairs,
right? But, with this, I'm suddenly
motivated again!");
        MsgDisp("主人公","(???)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("B040423302_04_110");
    MsgDisp("Nanatsumori","It's a complete mess.
Shall we go fix it?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040423302_04_120");
    MsgDisp("Nanatsumori","...Pfft!
I agree. It's probably weird to be 
acting all pretentious here.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
