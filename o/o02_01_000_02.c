BGMPlay("BGM_SPORTS_DAY",0.01);
BGOpen("sc760",0);
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(1,30,0,2,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020100002_01_000");
    MsgDisp("Kazama","They say it's a tie.
It was close.");
    MsgDisp("主人公","(A tie......
And we were so close, too......)");
    break ;
    case 3:
    MsgClose();
    ChOpen(1,30,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020100002_01_010");
    MsgDisp("Kazama","It was a tie, but I could see
how hard you were trying.
You really did your best.");
    MsgDisp("主人公","(A tie......
And we were so close, too......)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(1,30,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    ChMotion(1,3);
    VoicePlay("O020100002_01_020");
    MsgDisp("Kazama","That was a good match.
Really close.");
    MsgDisp("主人公","Yeah......
Sorry that you came to cheer for this.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("O020100002_01_030");
    MsgDisp("Kazama","It was worth it.
You looked cool, you know?");
    MsgDisp("主人公","(I wanted to show you a win,
not a draw......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
