switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgClose();
    ChOpen(6,254,0,0,3,#1,#1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110600000_06_000");
    MsgDisp("Himuro","The baseball club won their
match, right? Congratulations.");
    MsgDisp("主人公","｛氷室＊＊｝, Thank you!");
    MsgDisp("主人公","(I'm glad we won...!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,254,0,0,3,#1,#1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110600000_06_010");
    MsgDisp("Himuro","I heard the baseball club won 
their practice match?");
    MsgDisp("主人公","｛氷室＊＊｝.
Yeah, we did it!");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,3);
    VoicePlay("X110600000_06_020");
    MsgDisp("Himuro","This is a result that couldn't
have been achieved without you as 
manager. Thank you for your
hard work.");
    MsgDisp("主人公","(I was praised by ｛氷室＊＊｝!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
