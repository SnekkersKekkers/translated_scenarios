ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(5,254,0,0,0,#1,#1,0,0);
    VoicePlay("N020500001_05_000");
    MsgDisp("Hiiragi","Hello.");
    MsgDisp("主人公","Hello, ｛柊＊＊＊｝.
How are my results?");
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("N020500001_05_010");
    MsgDisp("Hiiragi","Wow, well, you took care of it.
You got an impressive ranking.");
    MsgDisp("主人公","It's not that impressive.");
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("N020500001_05_020");
    MsgDisp("Hiiragi","In my point of view...
Never mind, I can't say that.");
    ChEye(5,0);
    VoicePlay("N020500001_05_030");
    MsgDisp("Hiiragi","As long as you can see it yourself, keep
doing your best.
See you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(5);
    MsgDisp("主人公","(Alright...
I'll study a bit harder!)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 3:
    MsgClose();
    ChOpen(5,254,0,4,0,#1,#1,0,0);
    VoicePlay("N020500001_05_040");
    MsgDisp("Hiiragi","Impressive.
It's faster to find you if you count from
the top.");
    MsgDisp("主人公","Umm, well, I did my best!");
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("N020500001_05_050");
    MsgDisp("Hiiragi","Wow. But...If I'm being honest, you're
fully capable of doing even better, aren't
you?");
    MsgDisp("主人公","Huh.");
    ChMotion(5,0);
    VoicePlay("N020500001_05_060");
    MsgDisp("Hiiragi","You may not know it yourself. But I know.
Come on, it's obvious that you have some
energy left in you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(5);
    MsgDisp("主人公","(The chairman is a praise and extend
type...
Alright, time to aim for the first place!)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(5,254,0,0,4,#1,#1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("N020500001_05_070");
    MsgDisp("Hiiragi","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝.
How did I do?");
    ChEye(5,2);
    ChMotion(5,4);
    VoicePlay("N020500001_05_080");
    MsgDisp("Hiiragi","Well, you're among the top.
But...");
    ChMotion(5,2);
    VoicePlay("N020500001_05_090");
    MsgDisp("Hiiragi","When I look at you, I sense that I need to
try harder.");
    MsgDisp("主人公","You can sense that...?");
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("N020500001_05_100");
    MsgDisp("Hiiragi","Haha...I'm good at motivating people. I
got it. I'll just do my best by standing
next to you.");
    MsgDisp("主人公","(Yeah, I'll keep doing my best too!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(5,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChClose(5);
