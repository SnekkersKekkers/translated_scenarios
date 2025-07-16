SEPlay("EV_SE_668");
SEWait();
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("R060100004_01_000");
    MsgDisp("Kazama","This is my favorite, not bad.
Thank you.");
    MsgDisp("主人公","(Yay!
He's perfectly happy with my gift.)");
    break ;
    case 3:
    case 4:
    case 5:
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    ChCheek(1,5);
    VoicePlay("R060100004_01_010");
    MsgDisp("Kazama","Awesome... it's just what I wanted.
Thank you.");
    MsgDisp("主人公","(Yay!
He's perfectly happy with my gift.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
