BGOpen("sc530",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","｛氷室＊＊｝.");
    MsgClose();
    BGMPlay("BGM_C06_INORI_A");
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    VoicePlay("K010600100_06_000");
    MsgDisp("Himuro","What?");
    MsgDisp("主人公","It's your birthday today, right?
Here's a present.");
    SEPlay("EV_SE_664");
    SEWait();
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("K010600100_06_010");
    MsgDisp("Himuro","Huh... for me?");
    MsgDisp("主人公","Yeah!
Do you want to open it now?");
    break ;
    case 3:
    MsgDisp("主人公","｛氷室＊＊｝.");
    MsgClose();
    BGMPlay("BGM_C06_INORI_A");
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    VoicePlay("K010600100_06_020");
    MsgDisp("Himuro","Ah, it's you.
What?");
    MsgDisp("主人公","It's your birthday, right?
So, here.
Your present.");
    SEPlay("EV_SE_664");
    SEWait();
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("K010600100_06_030");
    MsgDisp("Himuro","Thanks for going through the trouble.
Then, I'll go ahead and take it.");
    MsgDisp("主人公","Yeah!
If you'd like, you can open it now!");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","｛氷室＊＊｝.");
    MsgClose();
    BGMPlay("BGM_C06_INORI_A");
    ChOpen(6,254,0,0,0,#1,#1,5,0);
    VoicePlay("K010600100_06_040");
    MsgDisp("Himuro","...What?");
    MsgDisp("主人公","It's your birthday today, right?
So, here.
A gift to celebrate.");
    SEPlay("EV_SE_664");
    SEWait();
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChCheek(6,10);
    VoicePlay("K010600100_06_050");
    MsgDisp("Himuro","Ah, I see.
Then, I'll take it.
... Can I open it?");
    MsgDisp("主人公","Yeah, go ahead.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
