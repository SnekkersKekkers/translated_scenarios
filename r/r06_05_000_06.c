SEPlay("EV_SE_668");
SEWait();
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("R060500006_05_000");
    MsgDisp("Hiiragi","Oh, this is a nice and safe gift.
Thank you very much.");
    MsgDisp("主人公","(Hmm, he seems happy with
my gift... I think?)");
    break ;
    case 3:
    case 4:
    case 5:
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("R060500006_05_010");
    MsgDisp("Hiiragi","Hm. I think anyone would be
happy with this gift.
Thank you.");
    MsgDisp("主人公","(Hmm, he seems happy with
my gift... I think?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
