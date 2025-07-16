switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(1,30,0,0,3,8,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040101100_01_000");
    MsgDisp("Kazama","I'm not going easy on you.");
    break ;
    case 3:
    MsgClose();
    ChOpen(1,30,0,0,2,8,#1,0,0);
    ScrFadeIn(0);
    ChMotion(1,1);
    VoicePlay("O040101100_01_010");
    MsgDisp("Kazama","......Geez, why are we on separate teams?");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(1,30,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    ChEye(1,3);
    ChMotion(1,3);
    VoicePlay("O040101100_01_020");
    MsgDisp("Kazama","Watch carefully and don't get hurt!
Watch your step.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
