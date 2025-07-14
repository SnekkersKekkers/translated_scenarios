BGOpen("sc606",0);
MsgClose();
ChOpen(1,254,0,0,3,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Recently, it looks like things have been
going well!)");
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("X120100001_01_000");
    MsgDisp("Kazama","Ohh, nice.
As expected, you have good senses.");
    MsgDisp("主人公","(Yay!)");
    break ;
    case 4:
    case 5:
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("X120100001_01_010");
    MsgDisp("Kazama","Haha, 
You've done very well.");
    MsgDisp("主人公","(Yay! 
I was praised!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
