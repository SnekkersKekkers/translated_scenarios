switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0,1);
    VoicePlay("D140201100_02_000");
    MsgDisp("Sassa","Oh, you too?
This sure is tasty huh?");
    break ;
    case 4:
    case 5:
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3,1);
    ChEyeOpenLevel(2,0);
    VoicePlay("D140201100_02_010");
    MsgDisp("Sassa","Alright, we managed to be a pair!");
    ChEye(2,0);
    ChEyeOpenLevel(2,10);
    MsgDisp("主人公","Yeah, we're matching!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
