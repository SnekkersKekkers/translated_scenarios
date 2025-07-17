BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY",0.01);
ChLayout(1);
ChNanaType(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,30,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020400000_04_000");
    MsgDisp("Nanatsumori","That was a battle.
Tug of war is pretty interesting.");
    MsgDisp("主人公","(I did it!
I'm glad I did my best.)");
    break ;
    case 3:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,30,0,2,4,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020400000_04_010");
    MsgDisp("Nanatsumori","Stupidly powerful...");
    MsgDisp("主人公","Geez!");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("O020400000_04_020");
    MsgDisp("Nanatsumori","But it's true, right?
You won, so congrats.");
    MsgDisp("主人公","(I did it!
I'm glad I did my best.)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,30,0,3,4,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020400000_04_030");
    MsgDisp("Nanatsumori","Wow...");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝!
I won!");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("O020400000_04_040");
    MsgDisp("Nanatsumori","I saw.
Any guy could fall in love with you,
seeing you pull that rope...");
    MsgDisp("主人公","Geez!");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("O020400000_04_050");
    MsgDisp("Nanatsumori","Haha!
Congrats.
Make sure to care for your hands, alright?");
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
ChClose(4,0,0);
