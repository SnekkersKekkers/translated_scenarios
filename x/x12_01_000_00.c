BGOpen("sc604",0);
MsgClose();
ChOpen(1,254,0,0,3,-1,-1,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(It looks like things have 
been going well recently!)");
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("X120100000_01_000");
    MsgDisp("Kazama","Recently, I can tell which is your
sound right away. It's of a different
quality to the others.");
    MsgDisp("主人公","(Yay!)");
    break ;
    case 4:
    case 5:
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("X120100000_01_010");
    MsgDisp("Kazama","You have a talent for music.
...What's more, you earnestly polish
it every single day. That's impressive.");
    MsgDisp("主人公","(Yay! I was praised)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
