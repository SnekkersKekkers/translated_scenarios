ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝.");
    MsgClose();
    ChOpen(5,34,0,0,4,#1,#1,0,0);
    VoicePlay("R040500000_05_000");
    MsgDisp("Hiiragi","Good evening.
Glad you're here.");
    MsgDisp("主人公","Yeah.
Merry Christmas, ｛柊＊＊＊｝.");
    break ;
    case 3:
    MsgClose();
    ChOpen(5,34,0,0,4,#1,#1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("R040500000_05_010");
    MsgDisp("Hiiragi","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝.
Merry Christmas!");
    VoicePlay("R040500000_05_020");
    MsgDisp("Hiiragi","Merry Christmas.");
    break ;
    case 4:
    case 5:
    VoicePlay("R040500000_05_030");
    MsgDisp("Hiiragi?","At last.");
    MsgClose();
    ChOpen(5,34,0,0,4,#1,#1,0,0);
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝.
Merry Christmas!");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,3);
    VoicePlay("R040500000_05_040");
    MsgDisp("Hiiragi","Merry Christmas.
I've been here for a long time waiting for
you...");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
