ChNanaType(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,255,2,2,4,-1,-1,0,0);
    VoicePlay("W090400000_04_000");
    MsgDisp("Nanatsumori","Sigh...");
    break ;
    case 3:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,255,2,2,3,-1,-1,0,0);
    VoicePlay("W090400000_04_010");
    MsgDisp("Nanatsumori","This is what amusement parks are 
about, huh? What do you think...?");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,255,1,4,4,-1,-1,0,0);
    VoicePlay("W090400000_04_020");
    MsgDisp("Nanatsumori","Don't laugh if I freak out and scream?");
    MsgDisp("主人公","Hehe!");
    ChEye(4,4);
    ChMouth(4,2);
    ChMotion(4,2,1);
    ChCheek(4,5);
    VoicePlay("W090400000_04_030");
    MsgDisp("Nanatsumori","Woah...
Okay, I'm not gonna scream...");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
BGMStop(1);
EnvPause(1);
ChClose(4);
Wait(10,0);
CGSDAnimDisp(60,0,4);
CGSDAnimWait();
CGSDAnimClose();
MsgClose();
ScrFadeOut(0);
