BGOpen("sc607",0);
MsgClose();
ChOpen(5,254,0,0,3,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Looks like things have 
been going well recently!)");
switch (ChPrmGet(5,6)){
    case 3:
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("X120500002_05_000");
    MsgDisp("Hiiragi","You make everything from accessories
to western style clothing.
How impressive.");
    MsgDisp("主人公","(Yay!)");
    break ;
    case 4:
    case 5:
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("X120500002_05_010");
    MsgDisp("Hiiragi","One day, I'd like to ask you to
make some stage costumes for me.
...Would you accept?");
    MsgDisp("主人公","(Yay! I was praised!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
