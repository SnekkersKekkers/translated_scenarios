BGOpen("sc810",0);
ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    ScrFadeIn(0);
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(5,254,0,0,4,#1,#1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("Q020500000_05_000");
    MsgDisp("Hiiragi","｛主人公｝,
Good morning.
Are you enjoying the school trip?");
    MsgDisp("主人公","Good morning.
Yes, and you ｛柊＊＊＊｝?");
    ChMotion(5,4);
    VoicePlay("Q020500000_05_010");
    MsgDisp("Hiiragi","About that, 
I have something to ask you.");
    MsgDisp("主人公","Huh, what may it be?");
    ChMotion(5,0);
    VoicePlay("Q020500000_05_020");
    MsgDisp("Hiiragi","Would you mind spending the free period
period today with me?");
    MsgSel("Sure, I'm coming！","Sorry, it's just……");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(5,4);
        ChMouth(5,4);
        ChMotion(5,0,1);
        VoicePlay("Q020500000_05_030");
        MsgDisp("Hiiragi","Thank you. With this, I'm able to say with
full confidence that I'm enjoying the
school trip.");
        MsgDisp("主人公","Hehe, yay!");
        ChEye(5,0);
        ChMouth(5,4);
        ChMotion(5,4);
        VoicePlay("Q020500000_05_040");
        MsgDisp("Hiiragi","Well then, where shall we begin?");
        MsgDisp("主人公","(Yeah, I'm sure this will be fun!)");
        MsgClose();
        ScrFadeOut(0,0);
        ChClose(5,0,0);
        break ;
        case 1:
        ChEye(5,0);
        ChMouth(5,4);
        ChMotion(5,0,1);
        VoicePlay("Q020500000_05_050");
        MsgDisp("Hiiragi","No, I apologize for the invitation out of
the blue. To each our own, let us enjoy
Nagasaki.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        ChClose(5);
        MsgDisp("主人公","(I feel a bit bad refusing,
he even invited me......)");
        MsgClose();
        ScrFadeOut(0,0);
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    case 4:
    case 5:
    ScrFadeIn(0);
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(5,254,0,4,4,#1,#1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("Q020500000_05_060");
    MsgDisp("Hiiragi","｛主人公｝, Good morning.");
    MsgDisp("主人公","Ah, good morning!");
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("Q020500000_05_070");
    MsgDisp("Hiiragi","I never knew school trips are so fun.");
    MsgDisp("主人公","Hehe,
I'm happy for you, ｛柊＊＊＊｝.");
    ChEye(5,4);
    ChMotion(5,3);
    Wait(20,1);
    VoicePlay("Q020500000_05_080");
    MsgDisp("Hiiragi","Thank you. It's my first time, so I am
excited more than everyone else.");
    ChEye(5,0);
    ChMotion(5,0);
    VoicePlay("Q020500000_05_090");
    MsgDisp("Hiiragi","While I'm riding this high, I'd like to
ask you too. Would you like to join me for
today's free period?");
    MsgSel("Yes, let's go!","Sorry, I……");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(5,4);
        ChMouth(5,4);
        ChMotion(5,4);
        ChEyeOpenLevel(5,0);
        VoicePlay("Q020500000_05_100");
        MsgDisp("Hiiragi","This will make the experience more
enjoyable.");
        ChEye(5,3);
        ChMotion(5,0);
        VoicePlay("Q020500000_05_110");
        MsgDisp("Hiiragi","Well then, shall we go?");
        MsgDisp("主人公","Um, wait a minute.
I'll get ready quickly!");
        ChEye(5,4);
        ChMotion(5,0,1);
        ChCheek(5,5);
        VoicePlay("Q020500000_05_120");
        MsgDisp("Hiiragi","Oh right, please take your time.
I will rejoice here as I wait for you.");
        MsgDisp("主人公","(Hehe! ｛柊＊＊＊｝ looks so excited.
I'm sure it will be a wonderful school
trip!)");
        MsgClose();
        ScrFadeOut(0,0);
        ChClose(5,0,0);
        break ;
        case 1:
        ChEye(5,2);
        ChMouth(5,4);
        ChMotion(5,4);
        ChEyeOpenLevel(5,9);
        VoicePlay("Q020500000_05_130");
        MsgDisp("Hiiragi","Is that so......
It's unfortunate, but it can't be 
helped.");
        ChEye(5,0);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("Q020500000_05_140");
        MsgDisp("Hiiragi","Since we are in an unfamiliar place,
please take caution with your
surroundings.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        ChClose(5);
        MsgDisp("主人公","(He even invited me, 
I fell a bit bad......)");
        MsgClose();
        ScrFadeOut(0,0);
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
