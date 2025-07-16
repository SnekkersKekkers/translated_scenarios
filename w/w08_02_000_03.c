switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(2,255,4,0,4,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080200003_02_000");
    MsgDisp("Sassa","Michiru-san, do you like the tea cups?");
    break ;
    case 3:
    MsgClose();
    ChOpen(2,255,0,0,4,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080200003_02_010");
    MsgDisp("Sassa","I'm going with Michiru-san huh.
Got it.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(2,255,4,0,0,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080200003_02_020");
    MsgDisp("Sassa","With Michiru-san, huh...
Hmm, then, shall we go?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ChClose(2,0,30);
ChClose(21,0,30);
