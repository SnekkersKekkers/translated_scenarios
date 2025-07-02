SEPlay("EV_SE_668");
SEWait();
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChEyeOpenLevel(6,8);
    VoicePlay("R060600007_06_000");
    MsgDisp("Himuro","Would I normally like something like this?");
    MsgDisp("主人公","(Darn, I don't think he's
really happy with my gift...)");
    break ;
    case 3:
    case 4:
    case 5:
    ChEye(6,2);
    ChMouth(6,2);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("R060600007_06_010");
    MsgDisp("Himuro","How do I put this...
... No, never mind.");
    MsgDisp("主人公","(Darn, I don't think he's
really happy with my gift...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
