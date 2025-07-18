SEPlay("EV_SE_668");
SEWait();
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,2,1);
    VoicePlay("R060700006_07_000");
    MsgDisp("Mikage","Is this really okay?
I guess this is a safe gift.");
    MsgDisp("主人公","(Hmm, he liked the gift ...right?)");
    break ;
    case 3:
    case 4:
    case 5:
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0,1);
    VoicePlay("R060700006_07_010");
    MsgDisp("Mikage","Hahaha, you seem so on edge.
Thank you.");
    MsgDisp("主人公","(Hmm, he liked the gift ...right?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
