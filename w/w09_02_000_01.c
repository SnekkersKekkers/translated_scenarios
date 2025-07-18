switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(2,255,4,0,4,#1,#1,0,0);
    VoicePlay("W090200001_02_000");
    MsgDisp("Sassa","This looks like some kind of training.");
    break ;
    case 3:
    MsgClose();
    ChOpen(2,255,4,0,2,7,#1,0,0);
    VoicePlay("W090200001_02_010");
    MsgDisp("Sassa","You look motivated...");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(2,255,4,2,0,0,#1,0,0);
    VoicePlay("W090200001_02_020");
    MsgDisp("Sassa","When I see your smile, I can't stop myself
from smiling either～");
    MsgDisp("主人公","What do you mean?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("W090200001_02_030");
    MsgDisp("Sassa","Never mind.
Maybe I just like copying you.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
BGMStop(1);
EnvPause(1.0);
ChClose(2);
Wait(10,0);
CGSDAnimDisp(62,0,2);
CGSDAnimWait();
CGSDAnimClose();
MsgClose();
ScrFadeOut(0);
