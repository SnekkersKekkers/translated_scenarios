switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(1,255,0,0,0,#1,#1,0,0);
    ChMouth(1,3);
    ChMotion(1,1);
    VoicePlay("W090100000_01_000");
    MsgDisp("Kazama","Well, this is happening, I guess.");
    break ;
    case 3:
    MsgClose();
    ChOpen(1,255,0,0,3,#1,#1,0,0);
    ChMotion(1,3);
    VoicePlay("W090100000_01_010");
    MsgDisp("Kazama","Yeah, it's gonna be this way.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(1,255,0,0,0,10,#1,0,0);
    ChMouth(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("W090100000_01_020");
    MsgDisp("Kazama","Looks like we're in the front row.
Will you be okay?");
    MsgDisp("主人公","Yeah. It will be fun.");
    ChEyeOpenLevel(1,0);
    Wait(10,0);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("W090100000_01_030");
    MsgDisp("Kazama","Alright. Since there's no one in front of
us, it feels like we're alone.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
BGMStop(1);
EnvPause(1);
ChClose(1);
Wait(10,0);
CGSDAnimDisp(60,0,1);
CGSDAnimWait();
CGSDAnimClose();
MsgClose();
ScrFadeOut(0);
