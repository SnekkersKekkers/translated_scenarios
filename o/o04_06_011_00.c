switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(6,30,0,0,0,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040601100_06_000");
    MsgDisp("Himuro","Aah, you're on the other team.
Well, doesn't matter.");
    break ;
    case 3:
    MsgClose();
    ChOpen(6,30,0,0,0,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040601100_06_010");
    MsgDisp("Himuro","You're on that team?
But, I won't hold back.");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,30,1,1,0,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040601100_06_020");
    MsgDisp("Himuro","Why are you over there?
This is going to be tough.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
