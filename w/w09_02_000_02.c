switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(2,255,4,0,0,-1,-1,0,0);
    VoicePlay("W090200002_02_000");
    MsgDisp("Sassa","This cage is too narrow.");
    break ;
    case 3:
    MsgClose();
    ChOpen(2,255,3,0,4,-1,-1,0,0);
    VoicePlay("W090200002_02_010");
    MsgDisp("Sassa","Haha, this is off to a good start.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(2,255,4,0,0,-1,-1,0,0);
    VoicePlay("W090200002_02_020");
    MsgDisp("Sassa","... there was four of us at the start,
but now it's just us two.");
    MsgDisp("主人公","Yeah, that's true.");
    ChEye(2,0);
    ChMouth(2,2);
    ChMotion(2,2);
    ChCheek(2,10);
    VoicePlay("W090200002_02_030");
    MsgDisp("Sassa","...The ferris wheel was nice.");
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
CGSDAnimDisp(61,0,2);
CGSDAnimWait();
CGSDAnimClose();
MsgClose();
ScrFadeOut(0);
