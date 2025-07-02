BGOpen("sc604",0);
MsgClose();
ChOpen(7,254,0,0,0,-1,-1,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Looks like things have 
been going well recently!)");
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("X120700000_07_000");
    MsgDisp("Mikage","Looks like you've been working hard at the
orchestra. Vice-Principal Himuro praised
you too.");
    MsgDisp("主人公","(Yay!)");
    break ;
    case 4:
    case 5:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("X120700000_07_010");
    MsgDisp("Mikage","Looks like you're enjoying the orchestra.
I wonder if by hearing your sound, 
the horticulture club's plants will 
grow well too?");
    MsgDisp("主人公","(Yay! I was praised)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
