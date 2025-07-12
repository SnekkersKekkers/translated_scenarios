MsgClose();
ChOpen(3,34,1,0,3,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("R040300000_03_000");
    MsgDisp("Honda","Merry Christmas!");
    MsgDisp("主人公","Ah, ｛本多＊＊｝.
Merry Christmas!");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("R040300000_03_010");
    MsgDisp("Honda","Incredible! I've heard this is the private
mansion of the Habataki chairman.
It looks like a castle from Europe.");
    break ;
    case 3:
    VoiceEVSPlay(3);
    VoicePlay("R040300000_03_020");
    MsgDisp("Honda","｛主人公｝, I finally found you.");
    MsgDisp("主人公","Ah, ｛本多＊＊｝,
Merry Christmas!");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("R040300000_03_030");
    MsgDisp("Honda","Merry Christmas! This venue is so
big it was hard to find you.");
    break ;
    case 4:
    case 5:
    VoiceEVSPlay(3);
    VoicePlay("R040300000_03_040");
    MsgDisp("Honda","｛主人公｝,
Merry Christmas.");
    MsgDisp("主人公","Ah, ｛本多＊＊｝.
Merry Christmas!");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,0,1);
    VoicePlay("R040300000_03_050");
    MsgDisp("Honda","Within the castle, it's bustling!
Are you having fun?");
    MsgDisp("主人公","Castle?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("R040300000_03_060");
    MsgDisp("Honda","Yeah. The chairman's mansion.
It looks like a castle from Europe.
Even like a ballroom.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
