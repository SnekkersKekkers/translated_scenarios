BGMStop();
BGOpen("sc810",0);
ChLayout(1);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,254,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("Q080400001_04_000");
    MsgDisp("Nanatsumori","Quite enjoyed it.");
    MsgDisp("主人公","Yes.
We looked around a lot, not?");
    ChMotion(4,1,1);
    VoicePlay("Q080400001_04_010");
    MsgDisp("Nanatsumori","True.
Let's spend the next free period together
too.");
    MsgDisp("主人公","Yeah, great idea!");
    break ;
    case 3:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,254,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("Q080400001_04_020");
    MsgDisp("Nanatsumori","Thanks for inviting me.
It was fun.");
    MsgDisp("主人公","Me too.
I'm happy I could spent it with
｛七ツ森＊｝!");
    ChMotion(4,1,1);
    VoicePlay("Q080400001_04_030");
    MsgDisp("Nanatsumori","Then, wanna spend the free time the day
after tomorrow together?");
    MsgDisp("主人公","Yes!");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,254,0,4,4,#1,#1,0,0);
    ScrFadeIn(0);
    ChMotion(4,2,1);
    VoicePlay("Q080400001_04_040");
    MsgDisp("Nanatsumori","The day went by like a flash......");
    MsgDisp("主人公","Hehe!
Wasn't it so much fun?");
    ChEye(4,3);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("Q080400001_04_050");
    MsgDisp("Nanatsumori","It was really fun.
I really underestimated school trips.");
    ChMotion(4,0,1);
    VoicePlay("Q080400001_04_060");
    MsgDisp("Nanatsumori","So, wanna spend the next free period with
me too?");
    MsgDisp("主人公","Yeah!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
