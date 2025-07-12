switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(3,255,5,0,3,#1,#1,0,0);
    VoicePlay("W090300000_03_000");
    MsgDisp("Honda","Ah, he said to the front row.
Okay, let's go!");
    break ;
    case 3:
    MsgClose();
    ChOpen(3,255,1,0,3,#1,#1,0,0);
    VoicePlay("W090300000_03_010");
    MsgDisp("Honda","Things like this are mostly exciting
before the ride actually starts.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(3,255,1,0,3,#1,#1,0,0);
    VoicePlay("W090300000_03_020");
    MsgDisp("Honda","Rides like this are less scary
and more fun if you scream as loud
as you can. Wanna try?");
    MsgDisp("主人公","Hehe, okay.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4);
    ChEyeOpenLevel(3,0);
    VoicePlay("W090300000_03_030");
    MsgDisp("Honda","Cough! ...Ah, phew.
Okay, my vocal chords are ready.");
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
CGSDAnimDisp(60,0,3);
CGSDAnimWait();
CGSDAnimClose();
MsgClose();
ScrFadeOut(0);
