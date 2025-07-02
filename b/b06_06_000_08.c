BGDateAfterOpen();
ChLayout(1);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    ScrFadeIn(0);
    break ;
    case 3:
    ScrFadeIn(0);
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,-1);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    ScrFadeIn(0);
    VoicePlay("B060600008_06_000");
    MsgDisp("Himuro","Today wasn't so bad, huh?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgDispSksp(0);
