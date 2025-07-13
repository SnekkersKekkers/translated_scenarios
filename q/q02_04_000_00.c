BGOpen("sc810",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChNanaType(0);
    ChOpen(4,254,0,0,0,#1,#1,0,0);
    VoicePlay("Q020400000_04_000");
    MsgDisp("Nanatsumori","Yo.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝.");
    ChMotion(4,1,1);
    VoicePlay("Q020400000_04_010");
    MsgDisp("Nanatsumori","For today's free period, do you wanna come
with me?");
    MsgSel("Sure, I'm coming！","Sorry, it's just......");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("Q020400000_04_020");
        MsgDisp("Nanatsumori","'Kay.");
        MsgDisp("主人公","Isn't it exciting?");
        ChEye(4,3);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("Q020400000_04_030");
        MsgDisp("Nanatsumori","Yeah true. Let's have fun.");
        MsgDisp("主人公","(Free time with ｛七ツ森＊｝!
I'm really excited!)");
        break ;
        case 1:
        ChMotion(4,0,1);
        VoicePlay("Q020400000_04_040");
        MsgDisp("Nanatsumori","I see......
Oh well, I'll go on my own.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        ChClose(4,0,30);
        MsgDisp("主人公","(He even invited me,
I feel bad......)");
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    case 4:
    case 5:
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChNanaType(0);
    ChOpen(4,254,0,0,0,#1,#1,0,0);
    VoicePlay("Q020400000_04_050");
    MsgDisp("Nanatsumori","Mornin'.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝!
Good morning.");
    ChEye(4,3);
    ChMouth(4,3);
    VoicePlay("Q020400000_04_060");
    MsgDisp("Nanatsumori","Mhm. It's good that you're full of energy.");
    ChMotion(4,1,1);
    VoicePlay("Q020400000_04_070");
    MsgDisp("Nanatsumori","Wanna hang out during the free period
period together?");
    MsgSel("Sure, I'm coming！","Sorry, it's just......");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(4,3);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("Q020400000_04_080");
        MsgDisp("Nanatsumori","Yay.");
        MsgDisp("主人公","Hm?");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,2,1);
        VoicePlay("Q020400000_04_090");
        MsgDisp("Nanatsumori","Nothing. I hope we can make great memories
together.");
        MsgDisp("主人公","(Hehe! I'm sure this free period will be a
blast!)");
        break ;
        case 1:
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,2,1);
        VoicePlay("Q020400000_04_100");
        MsgDisp("Nanatsumori","For real...? Got it");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        ChClose(4,0,30);
        MsgDisp("主人公","(He even invited me,
I feel bad......)");
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
