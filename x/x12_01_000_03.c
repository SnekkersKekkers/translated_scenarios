BGOpen("sc605",0);
MsgClose();
ChOpen(1,254,0,0,3,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Lately, it looks like things have been
going well!)");
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("X120100003_01_000");
    MsgDisp("Kazama","You sure are popular huh?
Your reputation in the student council is
gradually improving.");
    MsgDisp("主人公","(Yay!)");
    break ;
    case 4:
    case 5:
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("X120100003_01_010");
    MsgDisp("Kazama","You have the ability to move people.
It's thanks to that everyone cooperates
with student council club activities.");
    MsgDisp("主人公","(Yay!
I was praised!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
