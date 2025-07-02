switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("S060200002_02_000");
    MsgDisp("Sassa","Let's go.");
    break ;
    case 3:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("S060200002_02_010");
    MsgDisp("Sassa","Shall we go, then?
It's probably crowded, so stick close
to me.");
    break ;
    case 4:
    case 5:
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,1);
    ChCheek(2,0);
    VoicePlay("S060200002_02_020");
    MsgDisp("Sassa","Okay, let's go then!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0);
