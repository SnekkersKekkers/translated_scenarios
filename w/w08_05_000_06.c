switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(5,255,0,4,4,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080500006_05_000");
    MsgDisp("Hiiragi","Let's go.
Are you okay with heights,
Hanatsubaki-san?");
    break ;
    case 3:
    MsgClose();
    ChOpen(5,255,0,0,4,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080500006_05_010");
    MsgDisp("Hiiragi","Hanatsubaki-san and I?
I see, well, let's go.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(5,255,2,4,4,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080500006_05_020");
    MsgDisp("Hiiragi","I'm going with Hanatsubaki-san, huh.
Okay.
Understood.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ChClose(5,0,30);
ChClose(21,0,30);
