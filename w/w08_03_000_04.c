switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(3,255,1,3,3,0,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080300004_03_000");
    MsgDisp("Honda","Pika-chan, heeey!");
    break ;
    case 3:
    MsgClose();
    ChOpen(3,255,1,0,0,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080300004_03_010");
    MsgDisp("Honda","Ah, again?
Well, let's go, Pika-chan!");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(3,255,5,4,0,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080300004_03_020");
    MsgDisp("Honda","Gah, not what I expected.
Well...
I don't mind this once in a while.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ChClose(3,0,30);
ChClose(22,0,30);
