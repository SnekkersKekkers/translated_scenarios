switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("S060100002_01_000");
    MsgDisp("Kazama","Don't run ahead today, okay?");
    break ;
    case 3:
    ChEye(1,2);
    ChMouth(1,0);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("S060100002_01_010");
    MsgDisp("Kazama","It can't be helped. Let's show it
to everyone else.");
    break ;
    case 4:
    case 5:
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("S060100002_01_020");
    MsgDisp("Kazama","It'll be dangerous if you fall,
okay? Stick close to me.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
