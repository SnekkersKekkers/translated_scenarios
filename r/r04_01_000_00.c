ChLayout(1);
ScrFadeIn(0);
MsgClose();
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    ChOpen(1,34,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(1);
    VoicePlay("R040100000_01_000");
    MsgDisp("Kazama","｛主人公｝. Merry Christmas.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝! Merry Christmas.");
    MsgClose();
    break ;
    case 3:
    ChOpen(1,34,0,0,0,#1,#1,0,0);
    ChMouth(1,3);
    VoiceEVSPlay(1);
    VoicePlay("R040100000_01_010");
    MsgDisp("Kazama","｛主人公｝, Merry Christmas.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝! Merry Christmas.");
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("R040100000_01_020");
    MsgDisp("Kazama","You've got quite the smile, huh?");
    MsgClose();
    break ;
    case 4:
    case 5:
    ChOpen(1,34,0,0,3,#1,#1,0,0);
    ChEye(1,4);
    VoicePlay("R040100000_01_030");
    MsgDisp("Kazama","Merry Christmas.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝! Merry Christmas.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("R040100000_01_040");
    MsgDisp("Kazama","Are you having fun?");
    MsgDisp("主人公","Yeah, definitely!
Are you, ｛風真＊＊｝?");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("R040100000_01_050");
    MsgDisp("Kazama","If you're having fun, then I
am too, okay?");
    MsgDisp("主人公","Hehe, I'm glad!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
