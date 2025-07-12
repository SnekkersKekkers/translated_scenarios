BGOpen("sc605",0);
MsgClose();
ChOpen(2,254,0,0,3,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Looks like things have 
been going well recently!)");
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("X120200003_02_000");
    MsgDisp("Sassa","The student council work 
is tough right? I say thanks 
on behalf of everyone.
Thank you for always!");
    MsgDisp("主人公","(Yay!)");
    break ;
    case 4:
    case 5:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("X120200003_02_010");
    MsgDisp("Sassa","People always take the student council's 
work as if it were a given, but, 
seriously, thank you for everything.");
    MsgDisp("主人公","(Yay! I was praised!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
