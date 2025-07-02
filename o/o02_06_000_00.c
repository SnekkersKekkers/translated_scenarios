BGMPlay("BGM_SPORTS_DAY",0.01);
BGOpen("sc760",0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(6,30,0,0,0,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020600000_06_000");
    MsgDisp("Himuro","You were pulling hard.
I'm glad it turned out well.");
    MsgDisp("主人公","(I did it!
I'm glad I did my best.)");
    break ;
    case 3:
    MsgClose();
    ChOpen(6,30,3,0,3,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020600000_06_010");
    MsgDisp("Himuro","You did your best.
Congrats.");
    MsgDisp("主人公","Thanks!");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("O020600000_06_020");
    MsgDisp("Himuro","Well, I thought you looked
a little too desperate.");
    MsgDisp("主人公","(I did it!
I'm glad I did my best.)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,30,0,0,4,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020600000_06_030");
    MsgDisp("Himuro","Good work.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝!
I did it!");
    ChEye(6,3);
    ChMouth(6,3);
    ChMotion(6,3);
    ChEyeOpenLevel(6,0);
    VoicePlay("O020600000_06_040");
    MsgDisp("Himuro","I know.
Good job.
Congrats.");
    MsgDisp("主人公","(I did it!
I'm glad I did my best.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
