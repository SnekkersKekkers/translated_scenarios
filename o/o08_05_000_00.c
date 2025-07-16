BGOpen("sc761",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","(Next is......
Ah, it's ｛柊＊＊＊｝. )");
    MsgClose();
    ChOpen(5,30,0,0,4,#1,#1,0,0);
    VoicePlay("O080500000_05_000");
    MsgDisp("Hiiragi","Yes, I'm with you.
Shall we?");
    MsgDisp("主人公","Yes, let's.");
    break ;
    case 3:
    MsgDisp("主人公","(Next is......
Ah, it's ｛柊＊＊＊｝. )");
    MsgClose();
    ChOpen(5,30,0,0,4,#1,#1,0,0);
    VoicePlay("O080500000_05_010");
    MsgDisp("Hiiragi","To be given the opportunity to dance with
you, the sports festival is truly great.");
    ChEye(5,4);
    VoicePlay("O080500000_05_020");
    MsgDisp("Hiiragi","Well, shall we dance?");
    MsgDisp("主人公","Hehe, yes!");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(Next is......
Ah, it's ｛柊＊＊＊｝. )");
    MsgClose();
    ChOpen(5,30,0,4,4,#1,#1,0,0);
    VoicePlay("O080500000_05_030");
    MsgDisp("Hiiragi","I've been waiting for you, princess.
Now, your hand?");
    MsgDisp("主人公","Huh?");
    ChEye(5,0);
    ChMotion(5,4);
    VoicePlay("O080500000_05_040");
    MsgDisp("Hiiragi","Oh, are you not feeling it today?");
    MsgDisp("主人公","Hehe.
Be at ease.");
    ChEye(5,3);
    ChMotion(5,0);
    VoicePlay("O080500000_05_050");
    MsgDisp("Hiiragi","Haha, as expected of you.
Wouldn't it be nice if this time could
last forever?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
