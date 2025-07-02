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
    ChMouth(4,4);
    ChMotion(4,0,1);
    ScrFadeIn(0);
    VoicePlay("B060400001_04_000");
    MsgDisp("Nanatsumori","It was unexpectedly fun.
This sort of thing is surprisingly good.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDispSksp(1,-1);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    ScrFadeIn(0);
    VoicePlay("B060400001_04_010");
    MsgDisp("Nanatsumori","Ah, we seriously laughed so much today.
This is the perfect way to get tired.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,-1);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0,1);
    ChCheek(4,7);
    ScrFadeIn(0);
    VoicePlay("B060400001_04_020");
    MsgDisp("Nanatsumori","It's a shame we have to go home already.
...I had so much fun.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
