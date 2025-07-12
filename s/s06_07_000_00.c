BGOpen("ho100",0);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_DOOR_001");
SEWait();
SEPlay("EV_SE_DOOR_022");
SEWait();
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    ChOpen(7,255,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(7);
    VoicePlay("S060700000_07_000");
    MsgDisp("Mikage","｛主人公｝,
Happy New Year.");
    MsgDisp("主人公","Happy New Year to you too.");
    break ;
    case 3:
    ChOpen(7,255,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(7);
    VoicePlay("S060700000_07_010");
    MsgDisp("Mikage","｛主人公｝,
Happy Holidays!
Have a great year.");
    MsgDisp("主人公","｛御影＊＊｝,
Happy New Year.");
    break ;
    case 4:
    case 5:
    ChOpen(7,255,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(7);
    VoicePlay("S060700000_07_020");
    MsgDisp("Mikage","｛主人公｝,
Happy New Year!
Good luck this year too.");
    MsgDisp("主人公","｛御影＊＊｝,
Happy New Year.
I wish you the best this year.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChEye(7,#1);
ChMouth(7,#1);
