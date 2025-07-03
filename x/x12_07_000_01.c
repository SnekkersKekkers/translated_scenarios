BGOpen("sc606",0);
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
    ChMotion(7,3);
    VoicePlay("X120700001_07_000");
    MsgDisp("Mikage","The plants you grew are happy.");
    MsgDisp("主人公","(Yay!)");
    break ;
    case 4:
    case 5:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("X120700001_07_010");
    MsgDisp("Mikage","I think the passion and kindness
you have for your flowers is great.");
    MsgDisp("主人公","(Yay! I was praised!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
