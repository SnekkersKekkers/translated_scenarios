BGOpen("sc606",0);
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
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("X120600001_06_000");
    MsgDisp("Himuro","Wow...how pretty.
You're skilled at raising plants.");
    MsgDisp("主人公","(Yay!)");
    break ;
    case 4:
    case 5:
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("X120600001_06_010");
    MsgDisp("Himuro","They're all growing prettily, free of worry.
I wonder if flowers come to resemble those
who raise them... No, there's no deeper
meaning.");
    MsgDisp("主人公","(Yay! I was praised!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0);
ChClose(6,0,0);
