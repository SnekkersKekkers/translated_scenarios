switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(6,255,0,0,0,#1,#1,0,0);
    VoicePlay("W090600002_06_000");
    MsgDisp("Himuro","Don't worry about me, I'm going to bed.");
    break ;
    case 3:
    MsgClose();
    ChOpen(6,255,2,0,0,0,#1,0,0);
    VoicePlay("W090600002_06_010");
    MsgDisp("Himuro","I wonder how long this hang out will last.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,255,2,0,0,0,#1,0,0);
    VoicePlay("W090600002_06_020");
    MsgDisp("Himuro","I'm glad I went with you.");
    MsgDisp("主人公","Hehe, I'm glad to hear that!");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChCheek(6,5);
    VoicePlay("W090600002_06_030");
    MsgDisp("Himuro","...No, maybe it's the other way around.");
    MsgDisp("主人公","?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
BGMStop(1);
EnvPause(1);
ChClose(6);
Wait(10,0);
CGSDAnimDisp(61,0,6);
CGSDAnimWait();
CGSDAnimClose();
MsgClose();
ScrFadeOut(0);
