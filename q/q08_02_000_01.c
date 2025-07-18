BGMStop();
BGOpen("sc810",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","Haah...that was fun!
Thanks for coming with me.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("Q080200001_02_000");
    MsgDisp("Sassa","Yes, this time from me.
Wanna spend the next free period together
too?");
    MsgDisp("主人公","Sure!");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("Q080200001_02_010");
    MsgDisp("Sassa","Okay, I'll see you here tomorrow morning!");
    break ;
    case 3:
    MsgDisp("主人公","Haah...
It was so much fun!");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("Q080200001_02_020");
    MsgDisp("Sassa","We haven't had enough time.");
    MsgDisp("主人公","Hehe, true.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("Q080200001_02_030");
    MsgDisp("Sassa","Shall we spend tomorrow's free period
together too?");
    MsgDisp("主人公","Eh, really?
Yay!");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,1);
    VoicePlay("Q080200001_02_040");
    MsgDisp("Sassa","Alright, that's settled.
Meet me here next time.");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Haah...that was fun!");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("Q080200001_02_050");
    MsgDisp("Sassa","Me too.
I wanna to go back to this morning one
more time.");
    MsgDisp("主人公","Hehe, same!");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    ChCheek(2,10);
    VoicePlay("Q080200001_02_060");
    MsgDisp("Sassa","Well then, the day after tomorrow, let's
go for an extra round.");
    MsgDisp("主人公","Yes, let's spend the next free period
together too!");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,0);
    ChCheek(2,0);
    VoicePlay("Q080200001_02_070");
    MsgDisp("Sassa","Good.
See you back here, I'll meet you then.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
