BGOpen("ar100",0);
ChLayout(1);
ChNanaType(1);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","(Today's my first delivery of coffee and
snacks to ｛七ツ森＊｝'s
modeling agency!)");
    SEPlay("EV_SE_DOOR_014");
    MsgClose();
    ScrFadeOut(0,0,10);
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    SEStop("EV_SE_DOOR_014");
    MsgClose();
    BGOpen("ex100",0);
    ScrFadeIn(0);
    MsgDisp("主人公","Excuse me!
I'm delivering from Cafe Alucard.");
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(1);
    ChOpen(4,35,0,0,0,#1,#1,0,0);
    VoicePlay("I360400005_04_000");
    MsgDisp("Nanatsumori","Are you...... working?");
    MsgDisp("主人公","｛七ツ森＊｝! Yeah, it's
my first delivery job.
｛七ツ森＊｝, are you on
break?");
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,1,1);
    VoicePlay("I360400005_04_010");
    MsgDisp("Nanatsumori","Yeah.
I think it's fine if you just leave that
on the table.");
    MsgDisp("主人公","Okay.
I'll do that.");
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("I360400005_04_020");
    MsgDisp("Nanatsumori","Hm......");
    MsgDisp("主人公","Hm, what?");
    ChEye(4,0);
    ChMouth(4,3);
    VoicePlay("I360400005_04_030");
    MsgDisp("Nanatsumori","Nah, I just felt the power of the service
industry.
Impressive.");
    MsgDisp("主人公","(Hehe!
｛七ツ森＊｝ praised me.
I did it!)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(Today's my first delivery of coffee and
snacks to ｛七ツ森＊｝'s
modeling agency!)");
    SEPlay("EV_SE_DOOR_014");
    MsgClose();
    ScrFadeOut(0,0,10);
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    SEStop("EV_SE_DOOR_014");
    MsgClose();
    BGOpen("ex100",0);
    ScrFadeIn(0);
    MsgDisp("主人公","Excuse me!
I'm delivering from Cafe Alucard.");
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(1);
    ChOpen(4,35,0,4,2,#1,#1,0,0);
    VoiceEVSPlay(4);
    VoicePlay("I360400005_04_040");
    MsgDisp("Nanatsumori","｛主人公｝.");
    MsgDisp("主人公","｛七ツ森＊｝.
I came to deliver this!");
    MsgDisp("主人公","...... Hm?
There aren't many people around.
Did you just get on break?");
    ChEye(4,4);
    ChMouth(4,0);
    VoicePlay("I360400005_04_050");
    MsgDisp("Nanatsumori","Ah, yeah.");
    MsgDisp("主人公","Then, I'll leave the food and drinks here.
I'll come to collect the empty dishes
later. Until then......");
    ChEye(4,4);
    ChMouth(4,2);
    ChMotion(4,1,1);
    VoicePlay("I360400005_04_060");
    MsgDisp("Nanatsumori","Wai...... you're going already.");
    MsgDisp("主人公","Hm?
Yes, I'm working right now......");
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,0,1);
    VoicePlay("I360400005_04_070");
    MsgDisp("Nanatsumori","Aah......
I see.
That's true.");
    ChEye(4,0);
    ChMouth(4,0);
    VoicePlay("I360400005_04_080");
    MsgDisp("Nanatsumori","I'll come over after work.
Can I order some limited-time sweets now?");
    MsgDisp("主人公","Thank you very much!
Then, I'll wait for you at the cafe.
Good luck with work!");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("I360400005_04_090");
    MsgDisp("Nanatsumori","I'll work hard.
Super hard.");
    MsgDisp("主人公","(｛七ツ森＊｝ seems really fired up?
Alright, I'll work more efficiently too!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
