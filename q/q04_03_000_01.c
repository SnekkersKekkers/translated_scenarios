switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1,1);
    VoicePlay("Q040300001_03_000");
    MsgDisp("Honda","Sure thing, let's go!");
    MsgDisp("主人公","Awesome!");
    break ;
    case 3:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("Q040300001_03_010");
    MsgDisp("Honda","Hm, nice idea!
With you, it sure will be fun.");
    MsgDisp("主人公","That's settled, then.");
    break ;
    case 4:
    case 5:
    ChSet(3,3);
    VoicePlay("Q040300001_03_020");
    MsgDisp("Honda","Of course it's A-OK with me!");
    MsgDisp("主人公","Awesome!
Let's get going then.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
