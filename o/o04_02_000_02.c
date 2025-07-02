BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY");
ChLayout(1);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(2,30,3,0,4,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040200002_02_000");
    MsgDisp("Sassa","Uwah, I'm not satisfied!");
    MsgDisp("主人公","(Hm, we could've won.
But it was a good match.)");
    break ;
    case 3:
    MsgClose();
    ChOpen(2,30,3,0,4,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040200002_02_010");
    MsgDisp("Sassa","Just one more!
One more and we would have won, right?");
    MsgDisp("主人公","(A draw, huh.
It was a good match.)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(2,30,4,0,0,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040200002_02_020");
    MsgDisp("Sassa","A draw, huh......
I wanted to show you
my good side, though.");
    MsgDisp("主人公","(Even though we were so close......
Too bad it was a draw.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0);
ChClose(2,0,0);
