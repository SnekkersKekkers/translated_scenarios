BGOpen("sc761",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","(Next is......
Ah, it's ｛氷室＊＊｝.)");
    MsgClose();
    ChOpen(6,30,0,0,0,#1,#1,0,0);
    VoicePlay("O080600000_06_000");
    MsgDisp("Himuro","Hello.");
    MsgDisp("主人公","Hehe, let's dance.");
    break ;
    case 3:
    MsgDisp("主人公","(Next is......
Ah, it's ｛氷室＊＊｝.)");
    MsgClose();
    ChOpen(6,30,2,0,0,0,#1,0,0);
    VoicePlay("O080600000_06_010");
    MsgDisp("Himuro","This is nonsense.
This event isn't a competition, so why is
it in our sports festival.");
    MsgDisp("主人公","It's fun, though.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("O080600000_06_020");
    MsgDisp("Himuro","I don't understand.");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(Next is......
Ah, it's ｛氷室＊＊｝.)");
    MsgClose();
    ChOpen(6,30,4,0,0,#1,#1,10,0);
    VoicePlay("O080600000_06_030");
    MsgDisp("Himuro","......Hello.");
    MsgDisp("主人公","I'm looking forward to dancing with you.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("O080600000_06_040");
    MsgDisp("Himuro","Me too.
Don't step on my feet.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
