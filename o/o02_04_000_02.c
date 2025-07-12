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
    ChOpen(4,30,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020400002_04_000");
    MsgDisp("Nanatsumori","A draw in tug of war?
How skillful......");
    MsgDisp("主人公","(A draw, huh......
And we were so close......)");
    break ;
    case 3:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,30,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020400002_04_010");
    MsgDisp("Nanatsumori","A draw is actually pretty amazing.
You all have the same power level, huh?");
    MsgDisp("主人公","(A draw, huh......
And we were so close......)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,30,0,2,4,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020400002_04_020");
    MsgDisp("Nanatsumori","Close.
It looked like you were almost there.");
    MsgDisp("主人公","It's a real shame......");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("O020400002_04_030");
    MsgDisp("Nanatsumori","Guess so.
But I wanted to see you red in the face
a little more.");
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("O020400002_04_040");
    MsgDisp("Nanatsumori","Well, it's good you weren't hurt.
Good work.");
    MsgDisp("主人公","(Hm, but I wanted to show
｛七ツ森＊｝ a win.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
