BGMStop();
ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(This is my first time making a dress...
I think it turned out well but...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(5,254,0,0,4,#1,#1,0,0);
    VoicePlay("P730500001_05_000");
    MsgDisp("Hiiragi","You're making an anxious expression, yes?");
    MsgDisp("主人公","｛柊＊＊＊｝...!");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,4);
    ChEyeOpenLevel(5,0);
    VoicePlay("P730500001_05_010");
    MsgDisp("Hiiragi","It would be a shame if you couldn't look
cheerful even when wearing a dress that
wonderful.");
    MsgDisp("主人公","But, I'm nervous.");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,3);
    VoicePlay("P730500001_05_020");
    MsgDisp("Hiiragi","As long as you smile, you'll be fine.");
    MsgDisp("主人公","Eh?");
    ChMotion(5,0);
    VoicePlay("P730500001_05_030");
    MsgDisp("Hiiragi","The dress is perfect.
If you accompany it with your usual smile,
it will be complete.");
    ChEye(5,0);
    ChMotion(5,4);
    VoicePlay("P730500001_05_040");
    MsgDisp("Hiiragi","However, if you don't smile, it won't be
complete.");
    MsgDisp("主人公","Hehe, yeah!");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("P730500001_05_050");
    MsgDisp("Hiiragi","Yes, now it's complete.
Have fun.");
    MsgDisp("主人公","(Smile...huh?
Alright, let's do our best!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(5,0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(This is my first time making a dress...
I think it turned out well but...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(5,254,0,3,4,#1,#1,0,0);
    VoicePlay("P730500001_05_060");
    MsgDisp("Hiiragi","...It fits you very well.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝!");
    ChEye(5,4);
    ChMotion(5,4);
    VoicePlay("P730500001_05_070");
    MsgDisp("Hiiragi","I was so captivated that I forgot to greet
you.");
    MsgDisp("主人公","Really?
Hearing ｛柊＊＊＊｝ say that,
helped me gain some confidence.");
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("P730500001_05_080");
    MsgDisp("Hiiragi","If that's all it takes, I'll say it as
many times as you want.");
    MsgDisp("主人公","Hehe, come on.");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("P730500001_05_090");
    MsgDisp("Hiiragi","If you smile like that, you'll be
invincible.");
    MsgDisp("主人公","Eh?");
    ChEye(5,4);
    ChMotion(5,4);
    ChEyeOpenLevel(5,0);
    VoicePlay("P730500001_05_100");
    MsgDisp("Hiiragi","I'm also a bit of an actor, so I can tell
right away whether I can charm the
audience on stage");
    MsgDisp("主人公","｛柊＊＊＊｝...");
    ChEye(5,0);
    ChMotion(5,0);
    VoicePlay("P730500001_05_110");
    MsgDisp("Hiiragi","It'll be alright.
Believe in me.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0,1);
    VoicePlay("P730500001_05_120");
    MsgDisp("Hiiragi","Alright, have fun.");
    MsgDisp("主人公","Yeah.
｛柊＊＊＊｝, thank you!");
    MsgDisp("主人公","(While not forgetting to smile, I'll do my
best!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(5,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGOpen("sc725",0);
ScrFadeIn(0);
