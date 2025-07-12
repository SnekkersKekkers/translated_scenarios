BGOpen("sc604",0);
MsgClose();
ChOpen(2,254,0,0,3,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Recently, it looks like 
things have been going well!)");
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("X120200000_02_000");
    MsgDisp("Sassa","Looks like you've been working
hard at the school orchestra.
Apparently Himuro-sensei praised you.
You're amazing.");
    MsgDisp("主人公","(Yay! I'm glad I worked hard!)");
    break ;
    case 4:
    case 5:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("X120200000_02_010");
    MsgDisp("Sassa","When I'm running, I hear the pretty
sound of the orchestra. I feel like
it gives me that push on the back.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("X120200000_02_020");
    MsgDisp("Sassa","Thank you.");
    MsgDisp("主人公","(Yay!
I was praised by ｛颯砂＊＊｝ )");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
