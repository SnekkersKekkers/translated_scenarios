switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgClose();
    ChOpen(6,254,0,0,3,-1,-1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110600002_06_000");
    MsgDisp("Himuro","I heard.
The judo club won their practice match.
You did it.");
    MsgDisp("主人公","Hehe, we did our best!");
    MsgDisp("主人公","(I'm glad we won!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,254,0,0,3,-1,-1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110600002_06_010");
    MsgDisp("Himuro","It's the talk of the school.
The judo club landed a splendid ippon
during their practice match.");
    MsgDisp("主人公","｛氷室＊＊｝.
Yeah, I'm happy!");
    ChEye(6,3);
    ChMouth(6,3);
    ChMotion(6,3);
    ChEyeOpenLevel(6,0);
    VoicePlay("X110600002_06_020");
    MsgDisp("Himuro","You look happy.
Congratulations.");
    MsgDisp("主人公","(I was praised by ｛氷室＊＊｝!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
