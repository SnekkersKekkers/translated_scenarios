BGMStop();
BGOpen("sc740",0);
ScrFadeIn(0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","(It starts in just a little bit...
What should I do, I'm so nervous...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(2,254,3,0,4,#1,#1,0,0);
    VoicePlay("P530200000_02_000");
    MsgDisp("Sassa","Ah, you're here.");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝...");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("P530200000_02_010");
    MsgDisp("Sassa","The real thing is almost here, huh?
Have fun.");
    MsgDisp("主人公","Y-Yeah... thanks.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("P530200000_02_020");
    MsgDisp("Sassa","Huh, if you're that tense, you won't be
able to do your music performance as
usual.");
    MsgDisp("主人公","But...");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,1);
    VoicePlay("P530200000_02_030");
    MsgDisp("Sassa","Relax.
Don't worry, practice never fails.");
    MsgDisp("主人公","...Yeah!");
    MsgDisp("主人公","(｛颯砂＊＊｝ said it, so it can't be
wrong, huh?
I'll use everything I practiced!)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(It starts in just a little bit...
What should I do, I'm so nervous...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(2,254,3,0,4,#1,#1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("P530200000_02_040");
    MsgDisp("Sassa","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝...
It's almost time for the real performance.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("P530200000_02_050");
    MsgDisp("Sassa","I'm glad I came a little early.
You're getting nervous.");
    MsgDisp("主人公","Y-Yeah.
It's even worse when you think you
shouldn't be nervous...");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("P530200000_02_060");
    MsgDisp("Sassa","I get it.
Before I have a contest, I also get like
that.");
    MsgDisp("主人公","Even ｛颯砂＊＊｝?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("P530200000_02_070");
    MsgDisp("Sassa","Yeah.
When that happens, I listen to the music I
like.");
    MsgDisp("主人公","But, right now I can't listen to the music
I like...");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,5);
    VoicePlay("P530200000_02_080");
    MsgDisp("Sassa","What are you saying?
After this, you're going to play it
yourself, aren't you?");
    MsgDisp("主人公","Eh...
Ah, I see.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("P530200000_02_090");
    MsgDisp("Sassa","Yeah, see.
You want to start listening to music soon,
don't you?");
    MsgDisp("主人公","Hehe, yeah!");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("P530200000_02_100");
    MsgDisp("Sassa","I'm looking forwards to it too.
See you.");
    MsgDisp("主人公","(Thanks to ｛颯砂＊＊｝, I'm
looking forwards to playing...?
Yeah, I feel like I can do it!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
BGOpen("sc725",0);
ScrFadeIn(0);
