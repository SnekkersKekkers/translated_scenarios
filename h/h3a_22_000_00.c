switch (ChPrmGet(22,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc624",0);
    ChLayout(1);
    MsgClose();
    BGMPlay("BGM_C22_HIKARU_A",0.01);
    ChOpen(22,254,0,0,3,#1,#1,0,0);
    Wait(15,0);
    ScrFadeIn(0);
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,3,1);
    ChEyeOpenLevel(22,0);
    VoicePlay("H3A2200000_22_000");
    MsgDisp("Hikaru","Congrats on winning～!");
    MsgDisp("主人公","Thank you!
Your support became my strength,
｛ひかる＊｝.");
    ChEye(22,0);
    ChMouth(22,3);
    ChMotion(22,4,1);
    VoicePlay("H3A2200000_22_010");
    MsgDisp("Hikaru","Really?
You could hear me cheering Go Mari～?
Aha▼");
    MsgDisp("主人公","(Hehe!
I'm glad I worked so hard at judo club!)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc624",0);
    ChLayout(1);
    MsgClose();
    BGMPlay("BGM_C22_HIKARU_A",0.01);
    ChOpen(22,254,0,0,3,#1,#1,0,0);
    Wait(15,0);
    ScrFadeIn(0);
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,5,1);
    ChEyeOpenLevel(22,0);
    VoicePlay("H3A2200000_22_020");
    MsgDisp("Hikaru","Mari!
You're the best, you won～!");
    MsgDisp("主人公","Ah, ｛ひかる＊｝.
Thank you!");
    ChEye(22,0);
    ChMouth(22,3);
    ChMotion(22,3,1);
    VoicePlay("H3A2200000_22_030");
    MsgDisp("Hikaru","Hikaru fell in love with Mari▼
Ah, I was already in love with you, but
even more so now♪");
    MsgDisp("主人公","Hehe!");
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,4,1);
    VoicePlay("H3A2200000_22_040");
    MsgDisp("Hikaru","It's true, okay?
You were so cool...... the strongest Mari!");
    MsgDisp("主人公","(Hehe!
I'm glad I worked so hard at judo club!)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
