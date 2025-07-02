switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("D140301100_03_000");
    MsgDisp("Honda","Ah, you chose that too?
What a coincidence!");
    break ;
    case 4:
    case 5:
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("D140301100_03_010");
    MsgDisp("Honda","Yay! You're the same as me!");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,4);
    VoicePlay("D140301100_03_020");
    MsgDisp("Honda","...Hey, 
I'm getting too excited right?
It's just that we chose 
the same menu item.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
