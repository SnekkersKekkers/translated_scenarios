BGOpen("sc607",0);
MsgClose();
ChNanaType(0);
ChOpen(4,254,0,0,3,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Looks like things have been going well
recently!)");
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    VoicePlay("X120400002_04_000");
    MsgDisp("Nanatsumori","You sure are skilled.
Like a fashion designer.");
    MsgDisp("主人公","(Yay!)");
    break ;
    case 4:
    case 5:
    ChEye(4,0);
    ChMouth(4,3);
    VoicePlay("X120400002_04_010");
    MsgDisp("Nanatsumori","Next time can you make an item that suits
me?
I'm super interested.");
    MsgDisp("主人公","(Yay! I was praised!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
