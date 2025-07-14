ChEye(4,0);
ChMouth(4,0);
BGOpen("ho000",0);
ChLayout(1);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("主人公","Thank you for walking me home.");
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,1);
    VoicePlay("S120400005_04_000");
    MsgDisp("Nanatsumori","You're welcome.
I had a good time too.");
    MsgDisp("主人公","Really?");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("S120400005_04_010");
    MsgDisp("Nanatsumori","I spent this entire time laughing and
having fun with you.");
    MsgDisp("主人公","Hehe, is that so?");
    VoicePlay("S120400005_04_020");
    MsgDisp("Nanatsumori","Thanks to you, I think I'll really be able
to enjoy our last two months of high
school.");
    MsgDisp("主人公","Yeah!");
    ChEye(4,4);
    ChMotion(4,0,1);
    VoicePlay("S120400005_04_030");
    MsgDisp("Nanatsumori","See you later.");
    MsgClose();
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(4,0,30);
    Wait(30);
    MsgDisp("主人公","(Our last year of high school......
Thanks to ｛七ツ森＊｝, I think I'll
enjoy it too.)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Oh, it's time.");
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0);
    VoicePlay("S120400005_04_040");
    MsgDisp("Nanatsumori","Ahh.");
    MsgDisp("主人公","I wanted to hear more about all your good
memories.");
    ChEye(4,0);
    ChMouth(4,3);
    VoicePlay("S120400005_04_050");
    MsgDisp("Nanatsumori","Haha.");
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    ChMouthOpenLevel(4,0);
    VoicePlay("S120400005_04_060");
    MsgDisp("Nanatsumori","............");
    ChMotion(4,1,1);
    ChMouthOpenLevel(4,#1);
    VoicePlay("S120400005_04_070");
    MsgDisp("Nanatsumori","You know, even if we graduate, we can
still be together.
Maybe we can keep meeting like this.");
    MsgDisp("主人公","Huh?");
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("S120400005_04_080");
    MsgDisp("Nanatsumori","I......more with you——");
    ChMouth(4,3);
    VoicePlay("S120400005_04_090");
    MsgDisp("Nanatsumori","......Stop. I don't want to talk about
this now.");
    MsgDisp("主人公","｛七ツ森＊｝?");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("S120400005_04_100");
    MsgDisp("Nanatsumori","High school life isn't over yet.
Let's make more good memories while we
still can, alright?");
    MsgDisp("主人公","Hehe, yeah!");
    ChMotion(4,1,1);
    VoicePlay("S120400005_04_110");
    MsgDisp("Nanatsumori","Okay.
Then, see you later.");
    MsgClose();
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(4,0,30);
    Wait(30);
    MsgDisp("主人公","(We're graduating soon......
Like ｛七ツ森＊｝ says, I still have a
lot of things to do!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
