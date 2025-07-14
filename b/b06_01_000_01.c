BGDateAfterOpen();
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgDispSksp(1,#1);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0,1);
    ScrFadeIn(0);
    VoicePlay("B060100001_01_000");
    MsgDisp("Kazama","Today felt kinda nostalgic.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDispSksp(1,#1);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ScrFadeIn(0);
    ChMotion(1,3);
    VoicePlay("B060100001_01_010");
    MsgDisp("Kazama","Hey, when should we do this next?
Well, maybe I'm being hasty...");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,#1);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0,1);
    ScrFadeIn(0);
    VoicePlay("B060100001_01_020");
    MsgDisp("Kazama","Looking at your face, I'm guessing you
enjoyed this as much as I did?
Alright, let's come again.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
