ChNanaType(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,255,0,0,0,-1,-1,0,0);
    VoicePlay("W090400002_04_000");
    MsgDisp("Nanatsumori","Let's get on.");
    break ;
    case 3:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,255,0,0,3,-1,-1,0,0);
    VoicePlay("W090400002_04_010");
    MsgDisp("Nanatsumori","We have to pick a color for the
gondola. Any color fine with you?");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,255,0,0,0,-1,-1,0,0);
    VoicePlay("W090400002_04_020");
    MsgDisp("Nanatsumori","Watch your step.");
    MsgDisp("主人公","Yeah, don't worry.");
    ChEye(4,0);
    ChMouth(4,3);
    VoicePlay("W090400002_04_030");
    MsgDisp("Nanatsumori","Okay. Well then,
let's enjoy this alone time we have.");
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
CGSDAnimDisp(61,0,4);
CGSDAnimWait();
CGSDAnimClose();
MsgClose();
ScrFadeOut(0);
