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
    ChOpen(22,254,0,0,3,-1,-1,0,0);
    Wait(15,0);
    ScrFadeIn(0);
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,3,1);
    VoicePlay("H2A2200000_22_000");
    MsgDisp("Hikaru","You did it!
It's Haba High's grand victory♪");
    MsgDisp("主人公","｛ひかる＊｝, thank you for
cheering us on!");
    ChEye(22,0);
    ChMouth(22,3);
    ChMotion(22,4,1);
    VoicePlay("H2A2200000_22_010");
    MsgDisp("Hikaru","Ehe▼
Good work supporting. Mari's hard work
also contributed to this win♪");
    MsgDisp("主人公","(I'm glad that I stayed as
the track and field club manager!)");
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
    ChOpen(22,254,0,0,3,-1,-1,0,0);
    Wait(15,0);
    ScrFadeIn(0);
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,5,1);
    ChEyeOpenLevel(22,0);
    VoicePlay("H2A2200000_22_020");
    MsgDisp("Hikaru","Congrats on the big win～!");
    MsgDisp("主人公","Thank you, ｛ひかる＊｝!
It's because everyone did their best.");
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,4,1);
    VoicePlay("H2A2200000_22_030");
    MsgDisp("Hikaru","You too, Mari!
It's because their manager was so good
that the track team did their best.");
    MsgDisp("主人公","Hehe!");
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,3,1);
    ChEyeOpenLevel(22,0);
    VoicePlay("H2A2200000_22_040");
    MsgDisp("Hikaru","There!
Mari's smile gives everyone strength♪
Aha▼");
    MsgDisp("主人公","(I'm glad that I stayed as
the track and field club manager!)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
