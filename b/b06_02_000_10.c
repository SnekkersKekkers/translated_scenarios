BGDateAfterOpen();
ChLayout(1);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,-1);
    ChEye(2,2);
    ChMouth(2,0);
    ChMotion(2,2,1);
    ScrFadeIn(0);
    VoicePlay("B060200010_02_000");
    MsgDisp("Sassa","I have nothing to say......
I'll reflect on it for next time.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
