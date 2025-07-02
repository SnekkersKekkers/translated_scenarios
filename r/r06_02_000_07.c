SEPlay("EV_SE_668");
SEWait();
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("R060200007_02_000");
    MsgDisp("Sassa","O-Oh...
This certainly is a gut punch.");
    MsgDisp("主人公","(Darn, I don't think he's
really happy with my gift...)");
    break ;
    case 3:
    case 4:
    case 5:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("R060200007_02_010");
    MsgDisp("Sassa","Hmm, be careful for what
you wish for.");
    MsgDisp("主人公","(Darn, I don't think he's
really happy with my gift...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
