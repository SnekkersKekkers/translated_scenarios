switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(5,255,0,0,4,-1,-1,0,0);
    VoicePlay("W090500000_05_000");
    MsgDisp("Hiiragi","Please let us ride at the very front.");
    break ;
    case 3:
    MsgClose();
    ChOpen(5,255,0,4,4,-1,-1,0,0);
    VoicePlay("W090500000_05_010");
    MsgDisp("Hiiragi","Ah, the front row...
I've been looking forward to this.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(5,255,0,4,4,-1,-1,0,0);
    VoicePlay("W090500000_05_020");
    MsgDisp("Hiiragi","Watch your step.
After you.");
    MsgDisp("主人公","Okay, thanks.");
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("W090500000_05_030");
    MsgDisp("Hiiragi","Even a blink and you'll be missing out.
I enjoyed this from beginning to end!");
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
CGSDAnimDisp(60,0,5);
CGSDAnimWait();
CGSDAnimClose();
MsgClose();
ScrFadeOut(0);
