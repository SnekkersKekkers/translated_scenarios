switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgDispSksp(1,3);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,0);
    VoicePlay("B060200012_02_000");
    MsgDisp("Sassa","I'll walk you home.
Let's go.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDispSksp(1,3);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,0);
    VoicePlay("B060200012_02_010");
    MsgDisp("Sassa","I'll walk you home.
That way we can have some more fun, huh?");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,3);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,2);
    ChCheek(2,10);
    VoicePlay("B060200012_02_020");
    MsgDisp("Sassa","I'll walk you home.
You know, being a bodyguard suits me.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
