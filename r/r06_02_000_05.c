SEPlay("EV_SE_668");
SEWait();
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("R060200005_02_000");
    MsgDisp("Sassa","It's a nice gift.
Thanks.");
    MsgDisp("主人公","(It seems like he is really
happy with my gift!)");
    break ;
    case 3:
    case 4:
    case 5:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("R060200005_02_010");
    MsgDisp("Sassa","Woah!
You picked this for me, huh.
I like this gift, then.");
    MsgDisp("主人公","(It seems like he is really
happy with my gift!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
