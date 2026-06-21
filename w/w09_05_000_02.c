switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(5,255,4,0,4,#1,#1,0,0);
    VoicePlay("W090500002_05_000");
    MsgDisp("Hiiragi","Let's relax and enjoy the view.");
    break ;
    case 3:
    MsgClose();
    ChOpen(5,255,0,4,4,#1,#1,0,0);
    VoicePlay("W090500002_05_010");
    MsgDisp("Hiiragi","So this was one of the recommended spots
of Habataki City, huh.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(5,255,4,4,4,#1,#1,0,0);
    VoicePlay("W090500002_05_020");
    MsgDisp("Hiiragi","I'm glad I went with you.");
    MsgDisp("主人公","Huh?");
    ChMotion(5,0);
    VoicePlay("W090500002_05_030");
    MsgDisp("Hiiragi","Since I'm going with you, it won't be
awkward.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
BGMStop(1);
EnvPause(1.0);
ChClose(5);
Wait(10,0);
CGSDAnimDisp(61,0,5);
CGSDAnimWait();
CGSDAnimClose();
ScrFadeOut(0);
