BGOpen("sc607",0);
MsgClose();
ChOpen(1,254,0,0,3,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I seem to be doing well lately!)");
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("X120100002_01_000");
    MsgDisp("Kazama","It's hard to make the stuff in your head,
isn't it? You're amazing for making it
look so easy.");
    MsgDisp("主人公","(Yay!)");
    break ;
    case 4:
    case 5:
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("X120100002_01_010");
    MsgDisp("Kazama","I'm sure everyone will like your work.
It's much better than those bizarre ones.");
    MsgDisp("主人公","(Yay!
I was complimented!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
