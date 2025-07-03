BGOpen("sc810",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    break ;
    case 3:
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(1,254,0,0,0,-1,-1,0,0);
    VoiceEVSPlay(1);
    VoicePlay("Q020100000_01_000");
    MsgDisp("Kazama","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝, Good morning.");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("Q020100000_01_010");
    MsgDisp("Kazama","Hey, how about we spend
the free time together?");
    MsgSel("Yes, I'm coming！","Sorry, it's just……");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,3);
        VoicePlay("Q020100000_01_020");
        MsgDisp("Kazama","I knew it.");
        MsgDisp("主人公","Hehe, thanks for inviting me!");
        ChEye(1,0);
        ChMouth(1,0);
        ChMotion(1,0);
        VoicePlay("Q020100000_01_030");
        MsgDisp("Kazama","So, where do you want to go first?");
        MsgDisp("主人公","(I'm glad.
This is going to be fun!)");
        break ;
        case 1:
        ChEye(1,4);
        ChMouth(1,2);
        ChMotion(1,0);
        VoicePlay("Q020100000_01_040");
        MsgDisp("Kazama","Ah, is that so.
Don't wander off and get lost.
......Well then.");
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
    ChOpen(1,254,0,0,0,-1,-1,0,0);
    VoiceEVSPlay(1);
    VoicePlay("Q020100000_01_050");
    MsgDisp("Kazama","｛主人公｝.");
    MsgDisp("主人公","｛風真＊＊｝, Good morning.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("Q020100000_01_060");
    MsgDisp("Kazama","Good morning.
About the free time,
Have you decided who you're going with?");
    MsgDisp("主人公","No.
｛風真＊＊｝, have you?");
    ChEye(1,0);
    ChMouth(1,4);
    ChMotion(1,0);
    ChCheek(1,7);
    VoicePlay("Q020100000_01_070");
    MsgDisp("Kazama","I want to go with you.");
    MsgSel("Sure, I'm coming！","Sorry, it's just……");
    switch (MsgSelRsltGet()){
        case 0:
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,3);
        ChCheek(1,0);
        VoicePlay("Q020100000_01_080");
        MsgDisp("Kazama","Phew. You worried me for a second there.
Don't suddenly go quiet on me.");
        MsgDisp("主人公","Sorry.
I was thinking of where I want to go.");
        ChEye(1,4);
        ChMouth(1,3);
        ChMotion(1,3);
        VoicePlay("Q020100000_01_090");
        MsgDisp("Kazama","Oh well......
So, where do you want to go?");
        MsgDisp("主人公","(Hehe, this free time is gonna be fun!)");
        break ;
        case 1:
        ChEye(1,2);
        ChMouth(1,4);
        ChMotion(1,3);
        ChEyeOpenLevel(1,8);
        ChCheek(1,0);
        VoicePlay("Q020100000_01_100");
        MsgDisp("Kazama","Oh, so you already have a prior
commitment? Alright. Have fun.");
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
ChClose(1,0,0);
