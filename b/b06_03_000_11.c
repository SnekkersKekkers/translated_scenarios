ChLayout(1);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("B060300011_03_000");
    MsgDisp("Honda","Alright, let's go home.");
    break ;
    case 3:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B060300011_03_010");
    MsgDisp("Honda","Until next time.");
    break ;
    case 4:
    case 5:
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,4);
    VoicePlay("B060300011_03_020");
    MsgDisp("Honda","I want to talk more but it'd never end,
huh?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0);
ChClose(3,0,0);
