ScrFadeIn(0);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(5,30,0,0,4,#1,#1,0,0);
    VoicePlay("O040501100_05_000");
    MsgDisp("Hiiragi","So you are the opponent.
Understood.");
    break ;
    case 3:
    MsgClose();
    ChOpen(5,30,0,0,4,#1,#1,0,0);
    ChMotion(5,4);
    VoicePlay("O040501100_05_010");
    MsgDisp("Hiiragi","Hm. Even if you are my opponent, I shall
not lose.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(5,30,0,0,4,#1,#1,0,0);
    ChMotion(5,4);
    Wait(15,0);
    ChMouth(5,3);
    VoicePlay("O040501100_05_020");
    MsgDisp("Hiiragi","I apologize. Even if you are to be my
opponent, I do not wish to lose in this
competition. Are you prepared?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
