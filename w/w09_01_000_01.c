switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(1,255,0,0,0,#1,#1,0,0);
    ChEye(1,2);
    ChMouth(1,3);
    VoicePlay("W090100001_01_000");
    MsgDisp("Kazama","So, I'm going with you.");
    break ;
    case 3:
    MsgClose();
    ChOpen(1,255,0,0,3,#1,#1,0,0);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("W090100001_01_010");
    MsgDisp("Kazama","Let's go.
You like these kinds of rides, huh?");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(1,255,0,0,3,#1,#1,0,0);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("W090100001_01_020");
    MsgDisp("Kazama","I'm just relieved I'm riding with you.");
    MsgDisp("主人公","Huh, how come?");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("W090100001_01_030");
    MsgDisp("Kazama","In a ride like this, isn't your partner
really important?
I wouldn't want anyone but you.");
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
CGSDAnimDisp(62,0,1);
CGSDAnimWait();
CGSDAnimClose();
MsgClose();
ScrFadeOut(0);
