BGDateAfterOpen();
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgDispSksp(1,-1);
    ChSet(1,0,1);
    ScrFadeIn(0);
    VoicePlay("B060100002_01_000");
    MsgDisp("Kazama","Thank you for today.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDispSksp(1,-1);
    ChSet(1,0,1);
    ScrFadeIn(0);
    VoicePlay("B060100002_01_010");
    MsgDisp("Kazama","I guess it's fine because 
I got to see your face.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,-1);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ScrFadeIn(0);
    VoicePlay("B060100002_01_020");
    MsgDisp("Kazama","I guess time's up... but
I'm fully charged. Thanks.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
