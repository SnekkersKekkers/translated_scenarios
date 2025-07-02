BGOpen("sc605",0);
MsgClose();
ChOpen(7,254,0,0,0,-1,-1,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Looks like things have 
been going well recently!)");
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("X120700003_07_000");
    MsgDisp("Mikage","You're giving it your all 
in student council, right?
On behalf of Haba Academy, thank you.");
    MsgDisp("主人公","(Yay!)");
    break ;
    case 4:
    case 5:
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("X120700003_07_010");
    MsgDisp("Mikage","You're pretty skilled at running 
the student council huh?
It's not something anyone can do.");
    MsgDisp("主人公","(Yay! I was praised)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
