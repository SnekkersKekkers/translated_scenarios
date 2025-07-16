switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    BGOpen("ho000",0);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    ChLayout(1);
    ScrFadeIn(0);
    MsgDisp("主人公","Thank you for taking me.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("S120200005_02_000");
    MsgDisp("Sassa","No problem.
We were able to take it easy and talk
freely.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("S120200005_02_010");
    MsgDisp("Sassa","Let's do this again next year, and the
years after that.");
    MsgDisp("主人公","Hehe, this year just started, and you're
already talking about the year after this?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("S120200005_02_020");
    MsgDisp("Sassa","Yeah. Let's run as fast as we can during
our school years. The faster you run, the
faster you'll see the future.");
    MsgDisp("主人公","Okay, got it.
Let's work hard this year!");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,1);
    VoicePlay("S120200005_02_030");
    MsgDisp("Sassa","Ahh.
I think I'll run home as fast as I can.
Cya.");
    MsgClose();
    SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
    MsgClose();
    ChClose(2);
    MsgDisp("主人公","(No matter what the future holds, like
｛颯砂＊＊｝ says, let's try our
best and live without regrets!)");
    break ;
    case 4:
    case 5:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    BGOpen("ho000",0);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    ChLayout(1);
    ScrFadeIn(0);
    MsgDisp("主人公","Thanks for taking me.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("S120200005_02_040");
    MsgDisp("Sassa","No, thank you.
I thanked the Gods for a lot, but not for
you yet.");
    MsgDisp("主人公","Eh?");
    ChEye(2,4);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("S120200005_02_050");
    MsgDisp("Sassa","You've stood by my side and given me your
strength.");
    ChEye(2,2);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("S120200005_02_060");
    MsgDisp("Sassa","I'm worried I'm the only one who feels so
happy about this?");
    MsgDisp("主人公","Not at all.
I'm really happy I was able to support
｛颯砂＊＊｝'s single-minded goal.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("S120200005_02_070");
    MsgDisp("Sassa","Thank you.
But thanks to you and all of my friends, I
understand now.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("S120200005_02_080");
    MsgDisp("Sassa","I'm just doing what I love to the best of
my ability.
That's not enough for praise.");
    MsgDisp("主人公","That's not true......");
    ChEye(2,2);
    ChMouth(2,4);
    ChMotion(2,2);
    VoicePlay("S120200005_02_090");
    MsgDisp("Sassa","Thank you......
I still don't know what to say, how to
thank you enough.");
    ChEye(2,4);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("S120200005_02_100");
    MsgDisp("Sassa","So today I'll just say thank you.
I need a little more time, until we
graduate.");
    MsgDisp("主人公","｛颯砂＊＊｝......");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("S120200005_02_110");
    MsgDisp("Sassa","Okay, I'll jog home.");
    MsgClose();
    MsgClose();
    SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
    ChClose(2);
    MsgDisp("主人公","(Until graduation huh...
Okay.
I'll do my best too!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0);
