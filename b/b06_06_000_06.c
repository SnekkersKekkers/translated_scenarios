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
    ChMouth(6,0);
    ChMotion(6,4);
    ChCheek(6,10);
    ScrFadeIn(0);
    VoicePlay("B060600006_06_000");
    MsgDisp("Himuro","Did you have fun?
You don't have to answer that.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
