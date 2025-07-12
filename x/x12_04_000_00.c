BGOpen("sc604",0);
MsgClose();
ChNanaType(0);
ChOpen(4,254,0,0,3,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Looks like things have 
been going well recently!)");
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    VoicePlay("X120400000_04_000");
    MsgDisp("Nanatsumori","You're good at that big instrument.
You're kind of cool. ");
    MsgDisp("主人公","(Yay!)");
    break ;
    case 4:
    case 5:
    ChEye(4,0);
    ChMouth(4,3);
    VoicePlay("X120400000_04_010");
    MsgDisp("Nanatsumori","I'm guessing the solo performance
I heard just now was you?
I knew right away. I really like it.");
    MsgDisp("主人公","(Yay! I was praised!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
