BGMStop();
BGOpen("sc810",0);
ChLayout(1);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,254,0,0,3,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("Q080400000_04_000");
    MsgDisp("Nanatsumori","Phew!
We looked around a lot.");
    MsgDisp("主人公","Yeah.
Thanks for inviting me.");
    ChEye(4,3);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("Q080400000_04_010");
    MsgDisp("Nanatsumori","Also.
The next free time, is booking 
you ＯＫ?");
    MsgDisp("主人公","ＯＫ！");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,254,0,0,3,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("Q080400000_04_020");
    MsgDisp("Nanatsumori","I am satisfied.");
    MsgDisp("主人公","Me too.
Thanks for inviting me, ｛七ツ森＊｝.");
    ChEye(4,3);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("Q080400000_04_030");
    MsgDisp("Nanatsumori","You're welcome.
Let's go together the day after tomorrow
too.");
    MsgDisp("主人公","Yeah, sure!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
