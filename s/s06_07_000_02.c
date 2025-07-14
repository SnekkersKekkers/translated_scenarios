switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0,1);
    VoicePlay("S060700002_07_000");
    MsgDisp("Mikage","Shall we go then?
It's better if we visit the shrine early");
    break ;
    case 3:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0,1);
    VoicePlay("S060700002_07_010");
    MsgDisp("Mikage","Okay, let's take our time going there.
We can think of a wish along the way.");
    break ;
    case 4:
    case 5:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0,1);
    VoicePlay("S060700002_07_020");
    MsgDisp("Mikage","Shall we go soon then?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChEye(7,#1);
ChMouth(7,#1);
