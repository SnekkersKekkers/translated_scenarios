ScrFadeIn(0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(2,30,0,0,4,#1,#1,0,0);
    VoicePlay("O040201100_02_000");
    MsgDisp("Sassa","Oh, you're on that side.
No helping it, let's have a good match!");
    break ;
    case 3:
    MsgClose();
    ChOpen(2,30,3,0,4,#1,#1,0,0);
    VoicePlay("O040201100_02_010");
    MsgDisp("Sassa","So you're on the other team.
I don't wanna do this, but no holding
back!");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(2,30,2,0,0,7,#1,0,0);
    VoicePlay("O040201100_02_020");
    MsgDisp("Sassa","So you're on the other team.
Haa, I wanted to celebrate with you.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0);
ChClose(2,0,0);
