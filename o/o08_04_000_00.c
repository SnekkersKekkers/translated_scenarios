BGOpen("sc761",0);
ChLayout(1);
ChNanaType(0);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","(Next is......
Ah, it's ｛七ツ森＊｝. )");
    MsgClose();
    ChNanaType(0);
    ChOpen(4,30,0,0,0,#1,#1,0,0,0,60);
    VoicePlay("O080400000_04_000");
    MsgDisp("Nanatsumori","Hello.");
    MsgDisp("主人公","Hi!");
    break ;
    case 3:
    MsgDisp("主人公","(Next is......
Ah, it's ｛七ツ森＊｝. )");
    MsgClose();
    ChNanaType(0);
    ChOpen(4,30,0,2,3,#1,#1,0,0,0,60);
    VoicePlay("O080400000_04_010");
    MsgDisp("Nanatsumori","Even if they tell us to dance, this is
pretty embarrassing......");
    MsgDisp("主人公","Hehe!");
    ChEye(4,0);
    ChMotion(4,1,1);
    VoicePlay("O080400000_04_020");
    MsgDisp("Nanatsumori","Well, give me your hands.");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(Next is......
Ah, it's ｛七ツ森＊｝. )");
    MsgClose();
    ChNanaType(0);
    ChOpen(4,30,0,0,3,#1,#1,0,0,0,60);
    VoicePlay("O080400000_04_030");
    MsgDisp("Nanatsumori","Mission cleared.");
    MsgDisp("主人公","Mission?");
    ChEye(4,0);
    ChMouth(4,3);
    VoicePlay("O080400000_04_040");
    MsgDisp("Nanatsumori","I don't like the sports festival, but I
can't miss this event.
Give me both your hands.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
