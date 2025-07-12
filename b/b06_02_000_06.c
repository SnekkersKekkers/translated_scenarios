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
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3,1);
    ChEyeOpenLevel(2,0);
    ScrFadeIn(0);
    VoicePlay("B060200006_02_000");
    MsgDisp("Sassa","I'm really happy I invited you
today! I hope you feel the same way.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
