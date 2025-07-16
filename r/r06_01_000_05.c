SEPlay("EV_SE_668");
SEWait();
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("R060100005_01_000");
    MsgDisp("Kazama","Well, it's fine.
I'll use it.");
    MsgDisp("主人公","(He seems pleased with my gift!)");
    break ;
    case 3:
    case 4:
    case 5:
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("R060100005_01_010");
    MsgDisp("Kazama","Hm, you have good taste.
People would be happy with this gift.");
    MsgDisp("主人公","(He seems pleased with my gift!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
