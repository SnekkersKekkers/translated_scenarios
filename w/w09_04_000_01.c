ChNanaType(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,255,0,0,0,-1,-1,0,0);
    VoicePlay("W090400001_04_000");
    MsgDisp("Nanatsumori","Go ahead and take a seat.");
    break ;
    case 3:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,255,0,0,3,-1,-1,0,0);
    VoicePlay("W090400001_04_010");
    MsgDisp("Nanatsumori","Colorful～.
If it was a real cup,
it would be cute.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,255,0,0,0,-1,-1,0,0);
    VoicePlay("W090400001_04_020");
    MsgDisp("Nanatsumori","After you.");
    MsgDisp("主人公","Thank you.");
    ChEye(4,0);
    ChMouth(4,3);
    VoicePlay("W090400001_04_030");
    MsgDisp("Nanatsumori","...Yeah, perfect.
Cute things match well
with cute people.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
BGMStop(1);
EnvPause(1);
ChClose(4);
Wait(10,0);
CGSDAnimDisp(62,0,4);
CGSDAnimWait();
CGSDAnimClose();
MsgClose();
ScrFadeOut(0);
