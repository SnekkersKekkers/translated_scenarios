BGMPlay("BGM_SPORTS_DAY",0.01);
BGOpen("sc760",0);
ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(5,30,0,0,4,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020500001_05_000");
    MsgDisp("Hiiragi","That was quite close.
Thank you for your hard work.");
    MsgDisp("主人公","(Haa, but I wanted to win...
I should've tried harder.)");
    break ;
    case 3:
    MsgClose();
    ChOpen(5,30,0,4,4,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020500001_05_010");
    MsgDisp("Hiiragi","You put all your effort into pulling.
Thank you for your hard work.");
    MsgDisp("主人公","(Haa, but I wanted to win...
I should've tried harder.)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(5,30,0,4,4,#1,#1,0,0);
    ScrFadeIn(0);
    ChMotion(5,4);
    VoicePlay("O020500001_05_020");
    MsgDisp("Hiiragi","Yes, it doesn't look like you have any
injuries.
Thank you for your hard work.");
    MsgDisp("主人公","(Haa, but I wanted to win...
I should've tried harder.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
