BGOpen("sc605",0);
MsgClose();
ChNanaType(0);
ChOpen(4,254,0,0,3,-1,-1,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Looks like things have 
been going well recently!)");
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    VoicePlay("X120400003_04_000");
        MsgDisp("Nanatsumori","Thanks for all the hard work
you do for the school.
I'll also cooperate.");
        MsgDisp("主人公","(Yay!)");
        break ;
        case 4:
        case 5:
        ChEye(4,0);
        ChMouth(4,3);
        VoicePlay("X120400003_04_010");
        MsgDisp("Nanatsumori","Thanks for the hard work today too.
I think the reason Haba Academy
is so peaceful is thanks to you.
Seriously.");
    MsgDisp("主人公","(Yay! I was praised)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
