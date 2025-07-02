SEPlay("EV_SE_668");
SEWait();
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    ChEye(4,2);
    ChMouth(4,4);
    VoicePlay("R060400007_04_000");
    MsgDisp("Nanatsumori","This is...
No comment.");
    MsgDisp("主人公","(Darn, it seems that he
isn't happy with my gift...)");
    break ;
    case 3:
    case 4:
    case 5:
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,2);
    VoicePlay("R060400007_04_010");
    MsgDisp("Nanatsumori","... Gimme a sec. Let
me think about what to say.");
    MsgDisp("主人公","(Darn, it seems that he
isn't happy with my gift...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
