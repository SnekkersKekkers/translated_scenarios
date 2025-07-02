SEPlay("EV_SE_668");
SEWait();
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("R060600005_06_000");
    MsgDisp("Himuro","Well, this was a safe bet for a gift.
I hope it wasn't too hard to get.");
    MsgDisp("主人公","(It seems that he's
happy about my gift!)");
    break ;
    case 3:
    case 4:
    case 5:
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("R060600005_06_010");
    MsgDisp("Himuro","A present from you means a lot
to me.
I'll treasure this.");
    MsgDisp("主人公","(It seems that he's
happy about my gift!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
