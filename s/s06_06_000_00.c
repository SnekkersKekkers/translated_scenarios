BGOpen("ho100",0);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_DOOR_001");
SEWait();
SEPlay("EV_SE_DOOR_022");
SEWait();
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    ChOpen(6,255,0,0,0,#1,#1,0,0);
    VoicePlay("S060600000_06_000");
    MsgDisp("Himuro","Happy New Year.");
    MsgDisp("主人公","Happy New Year!");
    break ;
    case 3:
    ChOpen(6,255,0,0,0,#1,#1,0,0);
    VoicePlay("S060600000_06_010");
    MsgDisp("Himuro","Happy New Year to you.");
    MsgDisp("主人公","Happy New Year.");
    break ;
    case 4:
    case 5:
    ChOpen(6,255,4,0,0,#1,#1,5,0);
    VoicePlay("S060600000_06_020");
    MsgDisp("Himuro","Happy New Year.
Sorry to keep you waiting.
......Did you wait long?");
    MsgDisp("主人公","Happy New Year.
No, it's okay.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("S060600000_06_030");
    MsgDisp("Himuro","I'm glad.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
