switch (ChPrmGet(5,6)){
    case 3:
    MsgClose();
    ChOpen(5,254,0,0,4,#1,#1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110500002_05_000");
    MsgDisp("Hiiragi","The match was so heated, almost to the
point it didn't seem like a practice match
right? This is also the result of your
daily discipline.");
    MsgDisp("主人公","Hehe, thank you!");
    MsgDisp("主人公","(I'm glad I won...!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(5,254,0,0,4,#1,#1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110500002_05_010");
    MsgDisp("Hiiragi","I heard that your shoulder throw was
immensely beautiful.");
    MsgDisp("主人公","Hehe, thank you!");
    ChEye(5,4);
    VoicePlay("X110500002_05_020");
    MsgDisp("Hiiragi","Daily practice speaks for itself. You
looked so dignified in your judo uniform,
with your back perfectly straight.");
    MsgDisp("主人公","(Yay!
I was praised by ｛柊＊＊＊｝)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
