BGMStop();
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(Ah, what should I do.
I wonder if I can do it properly...)");
    VoicePlay("P530100000_01_000");
    MsgDisp("Kazama?","You look awful, don't you?");
    MsgDisp("主人公","Ah, ｛風真＊＊｝.
What a terrible face...");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(1,254,0,0,3,#1,#1,0,0);
    ChMotion(1,3);
    VoicePlay("P530100000_01_010");
    MsgDisp("Kazama","Sorry.
But your nervousness is shown in your
face.");
    MsgDisp("主人公","So, there's nothing to laugh about.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P530100000_01_020");
    MsgDisp("Kazama","Well, the pouting face you have right now
sounds more like you than your previous
expression.");
    MsgDisp("主人公","Ah, perhaps ｛風真＊＊｝...helped
me to relax?");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P530100000_01_030");
    MsgDisp("Kazama","Even if I'm nervous now, it won't affect
my my ability, right?");
    MsgDisp("主人公","I see, that's right.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P530100000_01_040");
    MsgDisp("Kazama","Don't struggle, and just have fun okay?");
    MsgDisp("主人公","Yeah!");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P530100000_01_050");
    MsgDisp("Kazama","That's the face.");
    MsgDisp("主人公","(Alright ｛風真＊＊｝ I'm going
to let you hear my unique performance!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(1,0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(Hmm, what should I do.
I wonder if I can do it properly...)");
    VoicePlay("P530100000_01_060");
    MsgDisp("Kazama?","Yes, you can.");
    MsgDisp("主人公","Huh?");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(1,254,0,0,0,#1,#1,0,0);
    MsgDisp("主人公","Amazing!
｛風真＊＊｝, how did you know
what I was thinking?");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P530100000_01_070");
    MsgDisp("Kazama","What an idiot.
Anyone can tell how worried you look.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P530100000_01_080");
    MsgDisp("Kazama","But, I can tell you that you can play
well.
I said it so you can trust me.");
    MsgDisp("主人公","Yeah, I guess I feel better now?");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P530100000_01_090");
    MsgDisp("Kazama","What do you mean \"maybe\"?");
    SEPlay("EV_SE_038");
    SEWait();
    MsgDisp("主人公","Hehe, thank you.
｛風真＊＊｝ Did that help you
relax?");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P530100000_01_100");
    MsgDisp("Kazama","Well then, I'm looking forward seeing you
perform in your own style.");
    MsgDisp("主人公","(Let's do the best we can!
｛風真＊＊｝ Because they are
supporting me too.)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(1,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGOpen("sc725",0);
ScrFadeIn(0);
