switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(2,255,3,0,3,#1,#1,0,0);
    VoicePlay("W090200000_02_000");
    MsgDisp("Sassa","Coasters are the best
right before the big drop.");
    break ;
    case 3:
    MsgClose();
    ChOpen(2,255,3,0,3,#1,#1,0,0);
    VoicePlay("W090200000_02_010");
    MsgDisp("Sassa","Be sure not to blink.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(2,255,0,0,4,#1,#1,10,0);
    VoicePlay("W090200000_02_020");
    MsgDisp("Sassa","Every part of my body is nervous.");
    MsgDisp("主人公","I thought you liked roller coasters?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("W090200000_02_030");
    MsgDisp("Sassa","... I do like them. For sure.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
BGMStop(1);
EnvPause(1);
ChClose(2);
Wait(10,0);
CGSDAnimDisp(60,0,2);
CGSDAnimWait();
CGSDAnimClose();
MsgClose();
ScrFadeOut(0);
