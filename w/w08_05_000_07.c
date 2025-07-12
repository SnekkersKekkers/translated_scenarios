switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(5,255,0,0,4,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080500007_05_000");
    MsgDisp("Hiiragi","Hanatsubaki-san, are okay with heights?");
    break ;
    case 3:
    MsgClose();
    ChOpen(5,255,0,4,4,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080500007_05_010");
    MsgDisp("Hiiragi","Yeah. I'll hang out with
Hanatsubaki-san.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(5,255,2,2,4,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080500007_05_020");
    MsgDisp("Hiiragi","Hanatsubaki-san, huh.
Shall we go?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ChClose(5,0,30);
ChClose(22,0,30);
