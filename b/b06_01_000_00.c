BGDateAfterOpen();
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgDispSksp(1,#1);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0,1);
    ScrFadeIn(0);
    VoicePlay("B060100000_01_000");
    MsgDisp("Kazama","I laughed a lot today.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDispSksp(1,#1);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    ScrFadeIn(0);
    ChMotion(1,3);
    VoicePlay("B060100000_01_010");
    MsgDisp("Kazama","Thank you for today.
I'm glad I came back here——
It was a day that made me think that.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,#1);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0,1);
    ChCheek(1,5);
    ScrFadeIn(0);
    VoicePlay("B060100000_01_020");
    MsgDisp("Kazama","Geez... 
thanks to you, one whole day went 
by in a blink of an eye.
Invite me next time.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
