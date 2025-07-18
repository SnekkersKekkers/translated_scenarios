BGDateAfterOpen();
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgDispSksp(1,#1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0,1);
    ChEyeOpenLevel(1,0);
    ScrFadeIn(0);
    VoicePlay("B060100003_01_000");
    MsgDisp("Kazama","How should I put it...that wasn't like
us.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDispSksp(1,#1);
    ChEye(1,2);
    ChMouth(1,0);
    ChMotion(1,4,1);
    ChEyeOpenLevel(1,0);
    ScrFadeIn(0);
    VoicePlay("B060100003_01_010");
    MsgDisp("Kazama","It's fine if you enjoyed it but...");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,#1);
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0,1);
    ScrFadeIn(0);
    VoicePlay("B060100003_01_020");
    MsgDisp("Kazama","Well, there are days like this too...
Don't mind it too much.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
