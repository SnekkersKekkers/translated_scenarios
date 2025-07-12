BGOpen("wf330",0);
BGMPlay("BGM_PLACE_AQUA_DEEP",0.01);
ChLayout(1);
ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1);
ChEyeOpenLevel(4,9);
ScrFadeIn(0);
VoicePlay("B040403302_04_000");
MsgDisp("Nanatsumori","Hmmー......
as I get used to looking at them, 
these guys start to seem kinda cute...");
ChEyeOpenLevel(4,#1);
MsgSel("Yeah, they're creepy cute▼","Hmmm....","They're not cute at all");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040403302_04_010");
    MsgDisp("Nanatsumori","Is that a compliment? 
Let's look at the merch section later.
Maybe they'll have some deep sea fish
items.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("B040403302_04_020");
    MsgDisp("Nanatsumori","Is it no good? Well, it might 
be too much for girls, I guess.");
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
        VoicePlay("B040403302_04_030");
        MsgDisp("Nanatsumori","Don't get angry.
I'm not asking for your agreement.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,0,1);
        VoicePlay("B040403302_04_040");
        MsgDisp("Nanatsumori","I see.
My tastes are different to yours.
That's unfortunate.");
        MsgDisp("主人公","Sorry, I didn't mean for...");
        ChEye(4,4);
        ChMouth(4,4);
        ChMotion(4,1,1);
        VoicePlay("B040403302_04_050");
        MsgDisp("Nanatsumori","That's not it.
I prefer it when someone gives me their
opinion clearly, rather than being
overly considerate.");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("B040403302_04_060");
        MsgDisp("Nanatsumori","Besides, isn't it because our
tastes are different that we can 
respect the other?");
        MsgDisp("主人公","Yeah, that's right.");
        ChEye(4,4);
        ChMouth(4,4);
        ChMotion(4,2,1);
        ChEyeOpenLevel(4,10);
        VoicePlay("B040403302_04_070");
        MsgDisp("Nanatsumori","Of course, 
I want to like the same things.");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040403302_04_080");
        MsgDisp("Nanatsumori","Isn't it super fun to have
someone you can share your empathy
and discomfort with? ");
        MsgDisp("主人公","Yep!");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,3,1);
        ChCheek(4,8);
        VoicePlay("B040403302_04_090");
        MsgDisp("Nanatsumori","That's why, from now on, I want to
continue to go to different places
together, see different things, and talk
about different things, ＯＫ?");
        MsgDisp("主人公","Hehe, ＯＫ!");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,2,1);
        ChCheek(4,10);
        VoicePlay("B040403302_04_100");
        MsgDisp("Nanatsumori","...Thank you.
Hehe.");
        MsgDisp("主人公","(｛七ツ森＊｝ seems happy.)");
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
