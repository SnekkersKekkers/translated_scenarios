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
    MsgDispSksp(1,#1);
    ChEye(2,2);
    ChMouth(2,0);
    ChMotion(2,0,1);
    ScrFadeIn(0);
    VoicePlay("B060200009_02_000");
    MsgDisp("Sassa","I invited you but I didn't plan well
enough.
Sorry.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
