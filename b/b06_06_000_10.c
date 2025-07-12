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
    MsgDispSksp(1,#1);
    ChEye(6,2);
    ChMouth(6,2);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    ScrFadeIn(0);
    VoicePlay("B060600010_06_000");
    MsgDisp("Himuro","Was I a bad lead or......?");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
