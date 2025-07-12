BGDateAfterOpen();
ChLayout(1);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgDispSksp(1,#1);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0,1);
    ScrFadeIn(0);
    VoicePlay("B060200002_02_000");
    MsgDisp("Sassa","I had a lot of fun today.
Thank you.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDispSksp(1,#1);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,4,1);
    ScrFadeIn(0);
    VoicePlay("B060200002_02_010");
    MsgDisp("Sassa","Thanks!
That was a nice change of pace.
I'll invite you out next time.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,#1);
    ChEye(2,3);
    ChMouth(2,4);
    ChMotion(2,4,1);
    ChEyeOpenLevel(2,0);
    ScrFadeIn(0);
    VoicePlay("B060200002_02_020");
    MsgDisp("Sassa","Something like this is good.
Let's go again sometime! Next time, I'll
invite you.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
