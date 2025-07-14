BGOpen("sc605",0);
MsgClose();
ChOpen(3,254,0,0,0,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Looks like things have been going well
recently!)");
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4);
    VoicePlay("X120300003_03_000");
    MsgDisp("Honda","You can't do the work of the student
council unless you're as well-liked as you
are.");
    MsgDisp("主人公","(Yay!)");
    break ;
    case 4:
    case 5:
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("X120300003_03_010");
    MsgDisp("Honda","The face of the student council may be the
president, but in reality it's being
supported by hard-working people like you!");
    MsgDisp("主人公","(Yay! I was praised!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
