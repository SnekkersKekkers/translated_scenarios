BGDateAfterOpen();
ChLayout(1);
ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgDispSksp(1,#1);
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,0,1);
    ScrFadeIn(0);
    VoicePlay("B060400000_04_000");
    MsgDisp("Nanatsumori","It wasn't bad, tbh.
I'm very satisfied.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDispSksp(1,#1);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    ScrFadeIn(0);
    VoicePlay("B060400000_04_010");
    MsgDisp("Nanatsumori","To say the least, it was the best.
I would come again.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,#1);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0,1);
    ChCheek(4,7);
    ScrFadeIn(0);
    VoicePlay("B060400000_04_020");
    MsgDisp("Nanatsumori","Basic words like \"It was fun\" won't cut
it.
I don't know what to say...");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
