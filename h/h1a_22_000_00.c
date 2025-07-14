switch (ChPrmGet(22,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc620",0);
    ChLayout(1);
    MsgClose();
    ChOpen(22,254,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,5,1);
    ChEyeOpenLevel(22,0);
    VoicePlay("H1A2200000_22_000");
    MsgDisp("Hikaru","Mari, amazing～!
You won!");
    MsgDisp("主人公","Thank you, ｛ひかる＊｝!
Everyone did their best!");
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,3,1);
    VoicePlay("H1A2200000_22_010");
    MsgDisp("Hikaru","Yes, yes.
Mari too, of course♪
Congrats!");
    MsgDisp("主人公","(I'm glad that I stayed as the baseball
club manager!)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc620",0);
    ChLayout(1);
    MsgClose();
    ChOpen(22,254,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,5,1);
    ChEyeOpenLevel(22,0);
    VoicePlay("H1A2200000_22_020");
    MsgDisp("Hikaru","Congrats, Mari～!
Amazing, you won～!");
    MsgDisp("主人公","Thank you, ｛ひかる＊｝!
It's because everyone did their best.");
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,4,1);
    VoicePlay("H1A2200000_22_030");
    MsgDisp("Hikaru","I'm sure the baseball club did their best
because Mari was their manager♪ Aha▼");
    MsgDisp("主人公","That's......");
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,3,1);
    ChEyeOpenLevel(22,0);
    VoicePlay("H1A2200000_22_040");
    MsgDisp("Hikaru","And there's this, too.
Mari must be the goddess of victory♪");
    MsgDisp("主人公","(I'm glad that I stayed as the baseball
club manager!)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
