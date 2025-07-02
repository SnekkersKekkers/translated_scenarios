switch (ChPrmGet(22,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 3:
    ChLayout(1);
    MsgClose();
    ChOpen(22,254,0,0,0,-1,-1,0,0);
    ScrFadeIn(0);
    ChEye(22,0);
    ChMouth(22,2);
    VoicePlay("H282200000_22_000");
    MsgDisp("Hikaru","Wow, this place is huge......");
    MsgDisp("主人公","Ah, ｛ひかる＊｝.
Did you come to cheer us on?");
    ChEye(22,0);
    ChMouth(22,3);
    ChMotion(22,4,1);
    VoicePlay("H282200000_22_010");
    MsgDisp("Hikaru","Yeah!
I came to watch our track team win.");
    ChEye(22,0);
    ChMouth(22,3);
    ChMotion(22,3,1);
    VoicePlay("H282200000_22_020");
    MsgDisp("Hikaru","Good luck with your manager work,
Mari!
Haba High will win!");
    MsgDisp("主人公","Yeah!");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(22);
    break ;
    case 4:
    case 5:
    ChLayout(1);
    MsgClose();
    ChOpen(22,254,0,0,0,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("H282200000_22_030");
    MsgDisp("Hikaru","Mari!");
    MsgDisp("主人公","Ah, ｛ひかる＊｝!
Did you come to cheer us on?");
    ChMotion(22,3,1);
    VoicePlay("H282200000_22_040");
    MsgDisp("Hikaru","I came to cheer Mari on▼");
    MsgDisp("主人公","Huh?
I'm the manager, you know?");
    ChEye(22,0);
    ChMouth(22,3);
    ChMotion(22,4,1);
    VoicePlay("H282200000_22_050");
    MsgDisp("Hikaru","Yeah.
Isn't the Haba High track team pretty
strong already?");
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,3,1);
    ChEyeOpenLevel(22,0);
    VoicePlay("H282200000_22_060");
    MsgDisp("Hikaru","That's why Hikaru came to support
Mari, who's supporting our strong
and courageous team♪");
    MsgDisp("主人公","Thank you, ｛ひかる＊｝!");
    ChEye(22,0);
    ChMouth(22,3);
    ChMotion(22,4,1);
    VoicePlay("H282200000_22_070");
    MsgDisp("Hikaru","Ehe▼
Go win♪");
    MsgDisp("主人公","Yeah!");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(22);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
