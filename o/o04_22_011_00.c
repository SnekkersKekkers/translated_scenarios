BGOpen("sc760",0);
ChLayout(1);
MsgClose();
ChOpen(22,30,0,0,3,-1,-1,0,0);
ScrFadeIn(0);
switch (ChPrmGet(22,6)){
    case 0:
    case 1:
    case 2:
    ChEye(22,0);
    ChMouth(22,3);
    ChMotion(22,4,1);
    ChEyeOpenLevel(22,8);
    VoicePlay("O042201100_22_000");
    MsgDisp("Hikaru","Aha▼
Mari, let's get serious!");
    break ;
    case 3:
    ChMotion(22,3,1);
    VoicePlay("O042201100_22_010");
    MsgDisp("Hikaru","So Mari's the enemy～!
Maybe Hikaru will get a little serious♪");
    break ;
    case 4:
    case 5:
    ChMotion(22,4,1);
    VoicePlay("O042201100_22_020");
    MsgDisp("Hikaru","Mari's on the enemy team!?
But Hikaru's going to get serious!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(22,0,0);
