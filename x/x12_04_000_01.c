BGOpen("sc606",0);
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
    VoicePlay("X120400001_04_000");
    MsgDisp("Nanatsumori","Is that an edible flower?
No, I just thought it looked tasty, that's
all.");
    MsgDisp("主人公","(Yay!)");
    break ;
    case 4:
    case 5:
    ChEye(4,0);
    ChMouth(4,3);
    VoicePlay("X120400001_04_010");
    MsgDisp("Nanatsumori","It's super pretty.
Maybe you'll discover a new species of
flower?");
    MsgDisp("主人公","(Yay!
I was praised!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
