switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(6,255,0,0,0,#1,#1,0,0);
    VoicePlay("W090600000_06_000");
    MsgDisp("Himuro","Greetings.");
    break ;
    case 3:
    MsgClose();
    ChOpen(6,255,1,0,3,#1,#1,0,0);
    VoicePlay("W090600000_06_010");
    MsgDisp("Himuro","I'm going to the front.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,255,1,0,0,#1,#1,5,0);
    VoicePlay("W090600000_06_020");
    MsgDisp("Himuro","Can I sit next to you?");
    MsgDisp("主人公","Huh?
Of course!");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("W090600000_06_030");
    MsgDisp("Himuro","Ah, okay.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
BGMStop(1);
EnvPause(1.0);
ChClose(6);
Wait(10,0);
CGSDAnimDisp(60,0,6);
CGSDAnimWait();
CGSDAnimClose();
MsgClose();
ScrFadeOut(0);
