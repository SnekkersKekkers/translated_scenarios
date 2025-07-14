switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgDispSksp(1,3);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B060600012_06_000");
    MsgDisp("Himuro","I'll walk you home.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDispSksp(1,3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B060600012_06_010");
    MsgDisp("Himuro","I'll walk you home.
I have some things I want to talk about.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,1);
    VoicePlay("B060600012_06_020");
    MsgDisp("Himuro","What are you doing?
Let's go.
Your home is that way, right?");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
