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
    ChMouth(4,0);
    ChMotion(4,0,1);
    ScrFadeIn(0);
    VoicePlay("B060400003_04_000");
    MsgDisp("Nanatsumori","We're both tired.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDispSksp(1,#1);
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    ScrFadeIn(0);
    VoicePlay("B060400003_04_010");
    MsgDisp("Nanatsumori","Today I'm kinda... tired.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,#1);
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,0,1);
    ScrFadeIn(0);
    VoicePlay("B060400003_04_020");
    MsgDisp("Nanatsumori","... Well, there'll be days like this too.
I'm gonna laugh.
You should laugh too.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
