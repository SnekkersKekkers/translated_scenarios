BGMStop();
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(This is my first time making a dress...
I like it but...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(2,254,3,0,4,#1,#1,0,0);
    VoicePlay("P730200001_02_000");
    MsgDisp("Sassa","Heeー, it's like legit.");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝.
Legit?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("P730200001_02_010");
    MsgDisp("Sassa","You look like a legit model.");
    MsgDisp("主人公","Hehe, thank you.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("P730200001_02_020");
    MsgDisp("Sassa","You're laughing.
Obviously, it's weird for me to talk about
someone being a model.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("P730200001_02_030");
    MsgDisp("Sassa","But, you're more amazing than a model.
You made it, and you're wearing it too?");
    MsgDisp("主人公","Y-Yeah.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("P730200001_02_040");
    MsgDisp("Sassa","How should I put it...it's like a
player-coach, like a playing manager,
right?");
    MsgDisp("主人公","Umm...");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("P730200001_02_050");
    MsgDisp("Sassa","That's my bad.
It looks like I came to put pressure on
you.");
    MsgDisp("主人公","No, thank you for coming.
Then, I'll do my best.");
    MsgDisp("主人公","(I'll give ｛颯砂＊＊｝ a good
show!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(2,0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(This is my first time making a dress...
I like it but...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(2,254,0,0,4,#1,#1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("P730200001_02_060");
    MsgDisp("Sassa","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝!
How does my first dress look?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("P730200001_02_070");
    MsgDisp("Sassa","It's good.
You're already like a princess!");
    MsgDisp("主人公","Eh?");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,3);
    VoicePlay("P730200001_02_080");
    MsgDisp("Sassa","Huh? is that no good?
But, nothing but that comes to mind.");
    MsgDisp("主人公","Thanks you...
I'm happy, but embarrassed.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,1);
    VoicePlay("P730200001_02_090");
    MsgDisp("Sassa","Not at all.
You're a splendid princess who's not
afraid to appear anywhere.");
    SEPlay("EV_SE_038");
    SEWait();
    MsgDisp("主人公","Ah, I already have to go.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("P730200001_02_100");
    MsgDisp("Sassa","Alright, I'll also be cheering you on from
a good seat.
Have fun!");
    MsgDisp("主人公","(Alright, let's live up to
｛颯砂＊＊｝'s expectations!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(2,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGOpen("sc725",0);
ScrFadeIn(0);
