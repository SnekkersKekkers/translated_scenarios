switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(6,255,2,1,0,0,#1,0,0);
    VoicePlay("W090600001_06_000");
    MsgDisp("Himuro","I don't care who I ride with.");
    break ;
    case 3:
    MsgClose();
    ChOpen(6,255,2,2,0,0,#1,0,0);
    VoicePlay("W090600001_06_010");
    MsgDisp("Himuro","Well, I guess it's better if it's
you.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,255,4,0,0,#1,#1,5,0);
    VoicePlay("W090600001_06_020");
    MsgDisp("Himuro","I'm not saying this just cause it's you.
How can you get on things like this?");
    MsgDisp("主人公","Because I think it'll be fun?");
    ChEye(6,2);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("W090600001_06_030");
    MsgDisp("Himuro","...I hope so.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
BGMStop(1);
EnvPause(1);
ChClose(6);
Wait(10,0);
CGSDAnimDisp(62,0,6);
CGSDAnimWait();
CGSDAnimClose();
MsgClose();
ScrFadeOut(0);
