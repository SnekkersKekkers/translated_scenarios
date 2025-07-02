switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(3,255,0,0,0,-1,-1,0,0);
    VoicePlay("W090300001_03_000");
    MsgDisp("Honda","Well, shall we go?");
    break ;
    case 3:
    MsgClose();
    ChOpen(3,255,1,0,3,-1,-1,0,0);
    VoicePlay("W090300001_03_010");
    MsgDisp("Honda","It's a relaxing ride, but it's 
impressive when you see it up close!");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(3,255,4,0,0,-1,-1,0,0);
    VoicePlay("W090300001_03_020");
    MsgDisp("Honda","If you look at it this way, there 
are couples that go on ferris wheels, 
right?");
    MsgDisp("主人公","Yeah, I guess?");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("W090300001_03_030");
    MsgDisp("Honda","I wonder, do you think that's
how other people see us?");
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
CGSDAnimDisp(61,0,3);
CGSDAnimWait();
CGSDAnimClose();
MsgClose();
ScrFadeOut(0);
