SEPlay("EV_SE_668");
SEWait();
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("R060200004_02_000");
    MsgDisp("Sassa","Oh, you have good taste.");
    MsgDisp("主人公","(Yay!
He's really happy with my gift.)");
    break ;
    case 3:
    case 4:
    case 5:
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,0);
    VoicePlay("R060200004_02_010");
    MsgDisp("Sassa","This is just what I wanted.
This must be fate!");
    MsgDisp("主人公","(Yay!
He's really happy with my gift.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
