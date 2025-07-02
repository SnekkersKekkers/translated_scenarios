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
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3,1);
    ScrFadeIn(0);
    VoicePlay("B060200007_02_000");
    MsgDisp("Sassa","Another fun day.
I'm really glad I invited you.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
