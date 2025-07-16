SEPlay("EV_SE_668");
SEWait();
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0,1);
    VoicePlay("R060700004_07_000");
    MsgDisp("Mikage","I like this.
Thank you.");
    MsgDisp("主人公","(Yay!
He seems really happy with this gift.)");
    break ;
    case 3:
    case 4:
    case 5:
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0,1);
    VoicePlay("R060700004_07_010");
    MsgDisp("Mikage","You got this gift for me?
You have no idea how grateful I am.
Thank you.");
    MsgDisp("主人公","(Yay!
He seems really happy with this gift.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
