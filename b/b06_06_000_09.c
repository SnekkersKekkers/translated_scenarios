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
    ChEye(6,2);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    ScrFadeIn(0);
    VoicePlay("B060600009_06_000");
    MsgDisp("Himuro","......I guess the choice of location
was a mistake.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgDispSksp(0);
