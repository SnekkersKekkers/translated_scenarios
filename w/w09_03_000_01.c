switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(3,255,1,0,3,#1,#1,0,0);
    VoicePlay("W090300002_03_000");
    MsgDisp("Honda","Yeah, the tea cups!
Let's go!");
    break ;
    case 3:
    MsgClose();
    ChOpen(3,255,4,4,3,#1,#1,0,0);
    VoicePlay("W090300002_03_010");
    MsgDisp("Honda","Do you have a strong grip?
Be careful not to turn it too much.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(3,255,4,0,4,#1,#1,0,0);
    VoicePlay("W090300002_03_020");
    MsgDisp("Honda","We're gonna ride in this tea cup, right?");
    MsgDisp("主人公","Yeah, I guess?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("W090300002_03_030");
    MsgDisp("Honda","Yeah.
That one looks good.
Okay, let's go!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
BGMStop(1);
EnvPause(1);
ChClose(3);
Wait(10,0);
CGSDAnimDisp(62,0,3);
CGSDAnimWait();
CGSDAnimClose();
MsgClose();
ScrFadeOut(0);
