BGMPlay("BGM_SPORTS_DAY",0.01);
BGOpen("sc760",0);
ChLayout(1);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(2,30,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020200002_02_000");
    MsgDisp("Sassa","So the tug of war ended in a draw.");
    MsgDisp("主人公","(Hm, I wanted to settle it...)");
    break ;
    case 3:
    MsgClose();
    ChOpen(2,30,3,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020200002_02_010");
    MsgDisp("Sassa","That was intense.
You looked serious, too.");
    MsgDisp("主人公","(A draw, huh.
And we were so close...)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(2,30,4,3,3,0,#1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(2);
    VoicePlay("O020200002_02_020");
    MsgDisp("Sassa","｛主人公｝, you got excited, huh.");
    MsgDisp("主人公","Yeah, but we didn't win...");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("O020200002_02_030");
    MsgDisp("Sassa","You just needed a bit more.
I did my best to shout your name.");
    MsgDisp("主人公","(Ugh, that was a little embarrassing...
But, instead of a tie, I wanted to win.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
