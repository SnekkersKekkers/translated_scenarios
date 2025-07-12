switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(2,255,0,0,4,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080200006_02_000");
    MsgDisp("Sassa","The ferris wheel with Michiru-san, huh.
You're not afraid of heights, right?");
    break ;
    case 3:
    MsgClose();
    ChOpen(2,255,0,0,4,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080200006_02_010");
    MsgDisp("Sassa","With Michiru-san, huh.
How many minutes does one loop take?");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(2,255,4,0,2,#1,#1,0,1);
    ScrFadeIn(0);
    VoicePlay("W080200006_02_020");
    MsgDisp("Sassa","...With Michiru-san, huh.
S-Sure. Shall we go?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ChClose(2,0,30);
ChClose(21,0,30);
