BGOpen("sc810",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    break ;
    case 3:
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(2,254,3,0,4,#1,#1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("Q020200000_02_000");
    MsgDisp("Sassa","｛主人公｝.
Good morning!");
    MsgDisp("主人公","｛颯砂＊＊｝, good morning.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("Q020200000_02_010");
    MsgDisp("Sassa","What's your plan for today?
Let's spend the free period together.");
    MsgSel("Sure, let's go!","Sorry, it's just......");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,3);
        VoicePlay("Q020200000_02_020");
        MsgDisp("Sassa","That's the spirit.
Let's get going, then!");
        MsgDisp("主人公","Yeah!
I'm really excited to see more of
Nagasaki.");
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,0);
        VoicePlay("Q020200000_02_030");
        MsgDisp("Sassa","Me too.
This is my first time, and I even get to
be with you!");
        MsgDisp("主人公","(Spending my free period with
｛颯砂＊＊｝......
This will surely be a fun day!)");
        break ;
        case 1:
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,3);
        VoicePlay("Q020200000_02_040");
        MsgDisp("Sassa","I see......
Well, I guess I'll ask someone else......");
        MsgDisp("主人公","(He even invited me, I feel bad......)");
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
    ChOpen(2,254,3,0,4,#1,#1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("Q020200000_02_050");
    MsgDisp("Sassa","｛主人公｝.
Morning, I was looking for you.");
    MsgDisp("主人公","｛颯砂＊＊｝, good morning.
What's up?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("Q020200000_02_060");
    MsgDisp("Sassa","What do you mean 'what's up'?
Of course this is about the free period.
Let's go together.");
    MsgSel("Sure, let's go together!","Sorry, it's......");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("Q020200000_02_070");
        MsgDisp("Sassa","Awesome! Did it sound natural when I asked you? I was practicing that in my head.");
        MsgDisp("主人公","Hehe, you did.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("Q020200000_02_080");
        MsgDisp("Sassa","It worked, then.
Whether or not I get to go with you or is the
turning point of fate.");
        MsgDisp("主人公","(T-That much...?
Still, I'm glad you asked me!)");
        break ;
        case 1:
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        VoicePlay("Q020200000_02_090");
        MsgDisp("Sassa","I see...
I'll ask someone else.");
        MsgDisp("主人公","Yeah, I'm sorry.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("Q020200000_02_100");
        MsgDisp("Sassa","Don't apologize, I hope you can enjoy it
too.
...... See ya.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
        ChClose(2);
        Wait(30);
        MsgDisp("主人公","(He even invited me, I feel bad......)");
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
ChClose(2,0,0);
