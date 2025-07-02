ChEyeOpenLevel(4,-1);
ChMouthOpenLevel(4,-1);
ChCheek(4,0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgDispSksp(1,3);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0);
    VoicePlay("B060400012_04_000");
    MsgDisp("Nanatsumori","I'll walk you.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDispSksp(1,3);
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,0);
    VoicePlay("B060400012_04_010");
    MsgDisp("Nanatsumori","I'll walk you.
It's already late.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,3);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0);
    ChCheek(4,7);
    VoicePlay("B060400012_04_020");
    MsgDisp("Nanatsumori","I'll walk you home.
I want to... stay a little longer.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
