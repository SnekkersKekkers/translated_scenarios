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
    ChMotion(22,5,1);
    ChEyeOpenLevel(22,0);
    VoicePlay("H4A2200000_22_000");
    MsgDisp("Hikaru","We did it!
Hikaru and everyone else's victory～!");
    MsgDisp("主人公","Yeah!
We did it perfectly!");
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,3,1);
    VoicePlay("H4A2200000_22_010");
    MsgDisp("Hikaru","Yeah, yeah.
Mari's performance was so pretty!
The judges all fell for you▼");
    MsgDisp("主人公","Hehe, really?");
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,4,1);
    VoicePlay("H4A2200000_22_020");
    MsgDisp("Hikaru","Really▼
Haa～I'm so happy♪");
    MsgDisp("主人公","(I'm really glad I stayed in the rhythmic
gymnastics club!)");
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
    VoicePlay("H4A2200000_22_030");
    MsgDisp("Hikaru","Haba High victory♪
Mari and Hikaru were perfect▼");
    MsgDisp("主人公","Yeah, we did it!");
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,3,1);
    VoicePlay("H4A2200000_22_040");
    MsgDisp("Hikaru","Yeah yeah, we did♪
It's because Mari gave Hikaru and the
others strength.");
    MsgDisp("主人公","Huh, me?");
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,4,1);
    VoicePlay("H4A2200000_22_050");
    MsgDisp("Hikaru","Yeah.
Serious, beautiful, and cute.
Everyone wants to be like Mari.");
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,3,1);
    ChEyeOpenLevel(22,0);
    VoicePlay("H4A2200000_22_060");
    MsgDisp("Hikaru","Mari is the rhythmic gymnastics club's
etoile▼");
    MsgDisp("主人公","(｛ひかる＊｝... I'm so happy! I'm
really glad I stayed in the rhythmic
gymnastics club!)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
