SEPlay("EV_SE_668");
SEWait();
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    ChEye(4,0);
    ChMouth(4,0);
    VoicePlay("R060400006_04_000");
    MsgDisp("Nanatsumori","... I see.
Thanks.");
    MsgDisp("主人公","(Hmm, he seems pleased with
my gift... I think?)");
    break ;
    case 3:
    case 4:
    case 5:
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,1);
    VoicePlay("R060400006_04_010");
    MsgDisp("Nanatsumori","I see... I guess this is
a pleasing gift for anyone.");
    MsgDisp("主人公","(Hmm, he seems pleased with
my gift... I think?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
