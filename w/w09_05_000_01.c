switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(5,255,4,4,4,#1,#1,0,0);
    VoicePlay("W090500001_05_000");
    MsgDisp("Hiiragi","I can't ride by myself.
So I appreciate moments like this.");
    break ;
    case 3:
    MsgClose();
    ChOpen(5,255,0,3,3,#1,#1,0,0);
    VoicePlay("W090500001_05_010");
    MsgDisp("Hiiragi","It's like going to an exciting,
new world.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(5,255,0,3,4,#1,#1,0,0);
    VoicePlay("W090500001_05_020");
    MsgDisp("Hiiragi","It's a big deal to me.");
    MsgDisp("主人公","You like riding the tea cups?");
    ChEye(5,4);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("W090500001_05_030");
    MsgDisp("Hiiragi","Yeah. Especially if I can ride it with
you.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
BGMStop(1);
EnvPause(1);
ChClose(5);
Wait(10,0);
CGSDAnimDisp(62,0,5);
CGSDAnimWait();
CGSDAnimClose();
MsgClose();
ScrFadeOut(0);
