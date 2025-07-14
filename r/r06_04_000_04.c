SEPlay("EV_SE_668");
SEWait();
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3);
    VoicePlay("R060400004_04_000");
    MsgDisp("Nanatsumori","I'm really happy.
I'll treasure this.");
    MsgDisp("主人公","(Yay! He's really happy
with my gift.)");
    break ;
    case 3:
    case 4:
    case 5:
    ChEye(4,3);
    ChMouth(4,3);
    ChMotion(4,3);
    VoicePlay("R060400004_04_010");
    MsgDisp("Nanatsumori","Nice... I'm seriously impressed right now.
I'll cherish it.");
    MsgDisp("主人公","(Yay! He's really happy
with my gift.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
