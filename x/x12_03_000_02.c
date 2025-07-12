BGOpen("sc607",0);
MsgClose();
ChOpen(3,254,0,0,0,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Looks like things have 
been going well recently!)");
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,0);
    VoicePlay("X120300002_03_000");
    MsgDisp("Honda","You're good with your hands too?
You can make anything, 
that's so coool!");
    MsgDisp("主人公","(Yay!)");
    break ;
    case 4:
    case 5:
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("X120300002_03_010");
    MsgDisp("Honda","Your creations have become art.
Could you teach me how
to make them too?");
    MsgDisp("主人公","(Yay! I got praised!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
