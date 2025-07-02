switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0);
    VoicePlay("D140401100_04_000");
    MsgDisp("Nanatsumori","Ah, we got the same thing.
You were also beckoned over by
this one.");
    break ;
    case 4:
    case 5:
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0);
    VoicePlay("D140401100_04_010");
    MsgDisp("Nanatsumori","We got the same thing.");
    MsgDisp("主人公","Ah, we really did.
I was in the mood for this today.");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1);
    VoicePlay("D140401100_04_020");
    MsgDisp("Nanatsumori","Me too.
We were both lured in 
by this one.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
