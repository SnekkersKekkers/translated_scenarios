SEPlay("EV_SE_668");
SEWait();
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,0);
    VoicePlay("R060500004_05_000");
    MsgDisp("Hiiragi","Yeah, I'm really happy.
Thank you for the lovely present.");
    MsgDisp("主人公","(Yay! He seems really
happy with my gift.)");
    break ;
    case 3:
    case 4:
    case 5:
    ChEye(5,4);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("R060500004_05_010");
    MsgDisp("Hiiragi","Did you choose this gift with
me in mind? ...I hope you did.
Thank you, I'll treasure this.");
    MsgDisp("主人公","(Yay! He seems really
happy with my gift.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
