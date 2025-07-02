BGDateAfterOpen();
ChLayout(1);
ChEyeOpenLevel(4,-1);
ChMouthOpenLevel(4,-1);
ChCheek(4,0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgDispSksp(1,-1);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,2,1);
    ScrFadeIn(0);
    VoicePlay("B060400004_04_000");
    MsgDisp("Nanatsumori","Be careful on your way home.
...Haa～");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDispSksp(1,-1);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    ScrFadeIn(0);
    VoicePlay("B060400004_04_010");
    MsgDisp("Nanatsumori","They say failure is the
stepping stone to success.
Let's both cheer up.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,-1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,0,1);
    ScrFadeIn(0);
    VoicePlay("B060400004_04_020");
    MsgDisp("Nanatsumori","It's my fault...sorry.
I know you were working hard to
make this a good time.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
