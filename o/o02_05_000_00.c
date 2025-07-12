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
    VoicePlay("O020500000_05_000");
    MsgDisp("Hiiragi","Congratulations.
You put forth much effort.");
    MsgDisp("主人公","(I did it!　I'm happy I won.)");
    break ;
    case 3:
    MsgClose();
    ChOpen(5,30,0,4,4,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020500000_05_010");
    MsgDisp("Hiiragi","Your spirits were quite high.
Congratulations.");
    MsgDisp("主人公","(I did it!　I'm happy I won.)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(5,30,0,3,3,#1,#1,0,0);
    ScrFadeIn(0);
    ChMotion(5,3);
    Wait(15,0);
    VoicePlay("O020500000_05_020");
    MsgDisp("Hiiragi","Congratulations!
I had believed you would emerge
victorious.");
    MsgDisp("主人公","(I did it!
I'm glad I did my best!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
