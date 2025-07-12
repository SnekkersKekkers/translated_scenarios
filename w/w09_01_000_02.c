switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(1,255,0,0,0,#1,#1,0,0);
    ChEye(1,2);
    ChMouth(1,3);
    VoicePlay("W090100002_01_000");
    MsgDisp("Kazama","Thank goodness you picked me.");
    break ;
    case 3:
    MsgClose();
    ChOpen(1,255,0,0,3,10,#1,0,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("W090100002_01_010");
    MsgDisp("Kazama","If it wasn't you, I would have left.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(1,255,0,0,3,#1,#1,0,0);
    ChEye(1,2);
    ChMotion(1,3);
    VoicePlay("W090100002_01_020");
    MsgDisp("Kazama","You really saved me. I wouldn't
have done this if it wasn't you.");
    MsgDisp("主人公","Huh?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("W090100002_01_030");
    MsgDisp("Kazama","I feel like I got a reward 
for surviving a certain death.");
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
CGSDAnimDisp(61,0,1);
CGSDAnimWait();
CGSDAnimClose();
MsgClose();
ScrFadeOut(0);
