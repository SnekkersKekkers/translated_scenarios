SEPlay("EV_SE_668");
SEWait();
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1);
    VoicePlay("R060400005_04_000");
    MsgDisp("Nanatsumori","Hmm.
This makes me a little happy.
Thank you.");
    MsgDisp("主人公","(He seems really happy with my gift!)");
    break ;
    case 3:
    case 4:
    case 5:
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1);
    VoicePlay("R060400005_04_010");
    MsgDisp("Nanatsumori","I see...
You did a good job.
Thank you.");
    MsgDisp("主人公","(He seems really happy with my gift!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
