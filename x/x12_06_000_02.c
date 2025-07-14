BGOpen("sc607",0);
MsgClose();
ChOpen(6,254,0,0,4,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Looks like things have been going well
recently!)");
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("X120600002_06_000");
    MsgDisp("Himuro","You're skilled.
I'll ask you for help next time a button
falls off.");
    MsgDisp("主人公","(Yay1)");
    break ;
    case 4:
    case 5:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("X120600002_06_010");
    MsgDisp("Himuro","Amazing... To the point I want you to make
something for me next time.");
    MsgDisp("主人公","(Yay! I was praised!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
