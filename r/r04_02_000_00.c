ChLayout(1);
ScrFadeIn(0);
MsgClose();
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    ChOpen(2,34,3,0,4,#1,#1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("R040200000_02_000");
    MsgDisp("Sassa","｛主人公｝, Merry Christmas!");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝. Merry Christmas!");
    break ;
    case 3:
    MsgClose();
    ChOpen(2,34,3,0,3,#1,#1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("R040200000_02_010");
    MsgDisp("Sassa","｛主人公｝, Merry Christmas!");
    MsgDisp("主人公","｛颯砂＊＊｝. Merry Christmas!");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("R040200000_02_020");
    MsgDisp("Sassa","This Habataki party is great.
I like how fancy it is.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(2,34,3,0,4,#1,#1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("R040200000_02_030");
    MsgDisp("Sassa","｛主人公｝, Merry Christmas!");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝. Merry Christmas!");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("R040200000_02_040");
    MsgDisp("Sassa","You, then the food, then the gifts.");
    MsgDisp("主人公","Huh?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("R040200000_02_050");
    MsgDisp("Sassa","Those are my priorities for today.");
    MsgDisp("主人公","Hehe, sounds like a 
practice menu.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
