BGDateAfterOpen();
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgDispSksp(1,#1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,4,1);
    ChEyeOpenLevel(1,8);
    ScrFadeIn(0);
    VoicePlay("B060100004_01_000");
    MsgDisp("Kazama","Where did I go wrong...");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDispSksp(1,#1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0,1);
    ScrFadeIn(0);
    VoicePlay("B060100004_01_010");
    MsgDisp("Kazama","I'll... forget what happened today.
I'll see you next time.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,#1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0,1);
    ChEyeOpenLevel(1,8);
    ScrFadeIn(0);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("B060100004_01_020");
    MsgDisp("Kazama","... I don't want to think about it but,
maybe we're.... no, my bad.
It's nothing.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
