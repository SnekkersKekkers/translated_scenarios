switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("D140501100_05_000");
    MsgDisp("Hiiragi","You chose this one too?
These sorts of coincidences 
are nice too.");
    break ;
    case 4:
    case 5:
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("D140501100_05_010");
    MsgDisp("Hiiragi","Could it be that you chose the
same menu item after seeing mine?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
