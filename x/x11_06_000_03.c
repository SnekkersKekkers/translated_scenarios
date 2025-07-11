switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgClose();
    ChOpen(6,254,0,0,4,-1,-1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110600003_06_000");
    MsgDisp("Himuro","Good work for the joint practice.
I heard you decided on a new move?");
    MsgDisp("主人公","Yeah, I did my best!");
    MsgDisp("主人公","(I'm glad I got a good result!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,254,0,0,0,-1,-1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110600003_06_010");
    MsgDisp("Himuro","Your performance was captivating.
You have a certain charm.");
    MsgDisp("主人公","Could it be that you came to see the
rhythmic gymnastics' club joint practice?");
    ChEye(6,3);
    ChMouth(6,3);
    ChMotion(6,3);
    ChEyeOpenLevel(6,0);
    VoicePlay("X110600003_06_020");
    MsgDisp("Himuro","Yeah.
I'm glad I went to see it.
I'll be cheering you on 
from now on as well.");
    MsgDisp("主人公","(Yay! Let's keep doing our best from now
on!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
