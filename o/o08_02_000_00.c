BGOpen("sc761",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","(Next is......
Ah, it's ｛颯砂＊＊｝.)");
    MsgClose();
    ChOpen(2,30,4,0,2,#1,#1,0,0);
    VoicePlay("O080200000_02_000");
    MsgDisp("Sassa","Hey, what kind of face
should I be making during a folk dance?");
    MsgDisp("主人公","A smile, I guess?");
    break ;
    case 3:
    MsgDisp("主人公","(Next is......
Ah, it's ｛颯砂＊＊｝.)");
    MsgClose();
    ChOpen(2,30,4,0,0,#1,#1,10,0);
    VoicePlay("O080200000_02_010");
    MsgDisp("Sassa","Uwah, this is making me shy......
Being embarrassed like this is
embarrassing, too......");
    MsgDisp("主人公","Yeah, it's making me shy, too.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("O080200000_02_020");
    MsgDisp("Sassa","It'd be nice if you
were always my partner, though?");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(Next is......
Ah, it's ｛颯砂＊＊｝.)");
    MsgClose();
    ChOpen(2,30,4,0,4,#1,#1,0,0);
    VoicePlay("O080200000_02_030");
    MsgDisp("Sassa","Last time I held hands and danced
with you was in kindergarten, right?");
    MsgDisp("主人公","Huh!　You remember?");
    ChEye(2,3);
    ChMouth(2,4);
    ChMotion(2,4);
    ChEyeOpenLevel(2,0);
    VoicePlay("O080200000_02_040");
    MsgDisp("Sassa","No, not at all.
But, it feels like something that
would've happened.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0);
ChClose(2,0,0);
