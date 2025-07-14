switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("D140501101_05_000");
    MsgDisp("Hiiragi","We got the same.
We get along well.");
    break ;
    case 4:
    case 5:
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("D140501101_05_010");
    MsgDisp("Hiiragi","Ah, we got te same.
Somehow, I feel as though I have gained
something.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
