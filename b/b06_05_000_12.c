switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgDispSksp(1,3);
    ChEye(5,0);
    ChMouth(5,0);
    ChMotion(5,0);
    VoicePlay("B060500012_05_000");
    MsgDisp("Hiiragi","I'll take you home.
Which way is it?");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDispSksp(1,3);
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("B060500012_05_010");
    MsgDisp("Hiiragi","It's already this late?
Let's go home together, I'll take you.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,3);
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3,1);
    VoicePlay("B060500012_05_020");
    MsgDisp("Hiiragi","I'll take you back home.
Shall we talk some more?");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
