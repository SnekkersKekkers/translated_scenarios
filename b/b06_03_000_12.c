ChLayout(1);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0);
    MsgDispSksp(1,3);
    VoicePlay("B060300012_03_000");
    MsgDisp("Honda","Ah, it's about time to go.
I'll walk you home.");
    MsgDispSksp(0);
    break ;
    case 3:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4);
    MsgDispSksp(1,3);
    VoicePlay("B060300012_03_010");
    MsgDisp("Honda","Naturally, I'll walk you home.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    ChEyeOpenLevel(3,0);
    MsgDispSksp(1,3);
    VoicePlay("B060300012_03_020");
    MsgDisp("Honda","I'll walk you home so we get to
talk a bit more! I'm glad!");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0);
ChSet(3,0);
