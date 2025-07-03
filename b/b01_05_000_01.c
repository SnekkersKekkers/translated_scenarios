BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(｛柊＊＊＊｝
isn't here yet...)");
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C05_HIIRAGI_A",0.01);
    MsgClose();
    ChOpen(5,253,0,2,2,-1,-1,0,0);
    VoicePlay("B010500001_05_000");
    MsgDisp("Hiiragi","I'm sorry to have kept you waiting.");
    MsgDisp("主人公","No, it's alright.");
    MsgDispSksp(1,0);
    ChEye(5,0);
    ChMouth(5,4);
    VoicePlay("B010500001_05_010");
    MsgDisp("Hiiragi","Thank you. I'll be more careful from here
on. Then, let's be off.");
    MsgDispSksp(0);
    break ;
    case 3:
    SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C05_HIIRAGI_A",0.01);
    MsgClose();
    ChOpen(5,253,0,2,2,-1,-1,0,0);
    VoicePlay("B010500001_05_020");
    MsgDisp("Hiiragi","I'm sorry, I was running late...");
    MsgDisp("主人公","No, it's alright.");
    MsgDispSksp(1,0);
    ChMotion(5,2);
    VoicePlay("B010500001_05_030");
    MsgDisp("Hiiragi","I am hesitant to forgive myself
for keeping you waiting.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C05_HIIRAGI_A",0.01);
    MsgClose();
    ChOpen(5,253,0,2,2,-1,-1,0,0);
    VoicePlay("B010500001_05_040");
    MsgDisp("Hiiragi","Ahh,thank goodness...");
    MsgDisp("主人公","Oh, ｛柊＊＊＊｝.
What's wrong?");
    ChMotion(5,4);
    VoicePlay("B010500001_05_050");
    MsgDisp("Hiiragi","If you hadn't been waiting here... No,
I'll perish the thought.");
    MsgDisp("主人公","Hey, I waited for you.");
    MsgDispSksp(1,0);
    ChEye(5,4);
    ChMouth(5,3);
    ChMotion(5,0);
    VoicePlay("B010500001_05_060");
    MsgDisp("Hiiragi","Thank you for that.
However, I will not let myself become
complacent to your kindness.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
