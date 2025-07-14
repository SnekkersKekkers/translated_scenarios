ChLayout(1);
ChNanaType(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,34,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    MsgDisp("主人公","Ah, ｛七ツ森＊｝. Merry Christmas!");
    VoicePlay("R040400000_04_000");
    MsgDisp("Nanatsumori","Merry Christmas.");
    break ;
    case 3:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,34,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(4);
    VoicePlay("R040400000_04_010");
    MsgDisp("Nanatsumori","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝. Merry Christmas!");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("R040400000_04_020");
    MsgDisp("Nanatsumori","Merry Christmas.
You seem to be in high spirits.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,34,0,4,4,#1,#1,6,0);
    ScrFadeIn(0);
    VoiceEVSPlay(4);
    VoicePlay("R040400000_04_030");
    MsgDisp("Nanatsumori","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝. Merry Christmas!");
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("R040400000_04_040");
    MsgDisp("Nanatsumori","Merry Christmas.
Are you having fun at this party?");
    MsgDisp("主人公","Are you, ｛七ツ森＊｝?");
    ChMotion(4,0,1);
    VoicePlay("R040400000_04_050");
    MsgDisp("Nanatsumori","I'm about to have some fun now.");
    MsgDisp("主人公","?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChCheek(4,0);
