switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("L040100003_01_000");
    MsgDisp("Kazama","Perfect score.
It feels like it was made for me.");
    MsgDisp("主人公","Do you like it?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("L040100003_01_010");
    MsgDisp("Kazama","Of course. It feels like you know
everything about me, almost uncomfortably
so. Almost.");
    MsgDisp("主人公","(It looks like he's happy.
Thank goodness!)");
    MsgClose();
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(1,0,0);
    break ;
    case 3:
    ChEye(1,3);
    ChMouth(1,1);
    ChMotion(1,0);
    VoicePlay("L040100003_01_020");
    MsgDisp("Kazama","This is...... handmade, right?");
    MsgDisp("主人公","Yeah, I did my best.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("L040100003_01_030");
    MsgDisp("Kazama","You have good sense.
It's just my taste, you know?");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("L040100003_01_040");
    MsgDisp("Kazama","I underestimated your girl power.
Thanks.");
    MsgDisp("主人公","Yay!");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("L040100003_01_050");
    MsgDisp("Kazama","I won't lose either.
I'll surprise you on White Day.
Remember this, okay?");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(1);
    MsgDisp("主人公","(I don't know if he's being sincere or
just teasing, but he looked super happy!)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("L040100003_01_060");
    MsgDisp("Kazama","Wow, amazing.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("L040100003_01_070");
    MsgDisp("Kazama","You incorporated my tastes, so I know it's
handmade, but......
It's so good you could sell it.");
    MsgDisp("主人公","Really!?
Thank you.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("L040100003_01_080");
    MsgDisp("Kazama","Stupid, I'm the one who should be saying
that, right?
Thank you.");
    MsgDisp("主人公","Hehe, you're very welcome.");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("L040100003_01_090");
    MsgDisp("Kazama","But, can I really eat it?");
    MsgDisp("主人公","What?");
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("L040100003_01_100");
    MsgDisp("Kazama","I can't break it, and biting is out of the
question.
What should I do......");
    MsgClose();
    SEPlay("EV_SE_FOOT_039");
    ChClose(1);
    SEWait();
    SEPlay("EV_SE_045");
    MsgDisp("","(Flash)");
    VoicePlay("L040100003_01_110");
    MsgDisp("Kazama","First, I need a photo.");
    MsgDisp("主人公","Um, make sure you eat it, okay?");
    MsgDisp("主人公","(He seemed really happy, but I wonder if
he'll eat it?)");
    MsgClose();
    ScrFadeOut(0,0);
    BGMStop();
    break ;
    default :
    DbgAssert(1);
    break ;
    }
