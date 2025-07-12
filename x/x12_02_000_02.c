BGOpen("sc607",0);
MsgClose();
ChOpen(2,254,0,0,3,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Looks like things have been
going well recently!)");
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("X120200002_02_000");
    MsgDisp("Sassa","Handicrafts are amazing.
You seem like you could make anything.");
    MsgDisp("主人公","(Yay! Maybe I'm 
improving bit by bit!)");
    break ;
    case 4:
    case 5:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("X120200002_02_010");
    MsgDisp("Sassa","That must have taken a lot of work.
I'm jealous of the people who can 
wear what you make.");
    MsgDisp("主人公","(Yay! I was praised!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
