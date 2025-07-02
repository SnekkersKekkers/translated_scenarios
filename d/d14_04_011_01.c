switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1);
    VoicePlay("D140401101_04_000");
    MsgDisp("Nanatsumori","We got the same item.
We sure get along, huh?");
    break ;
    case 4:
    case 5:
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0);
    VoicePlay("D140401101_04_010");
    MsgDisp("Nanatsumori","I expected as much.
I thought you would also
choose the same thing.");
    ChEye(4,4);
    ChMotion(4,1);
    VoicePlay("D140401101_04_020");
    MsgDisp("Nanatsumori","It has no meaning whatsoever, 
but I'm kind of happy when overlaps
like this happen.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
