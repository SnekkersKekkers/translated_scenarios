BGMStop();
BGOpen("sc740",0);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("主人公","(I finished just in time but, it's finally
the runway...
I'm nervous...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(7,254,0,0,0,#1,#1,0,0);
    VoicePlay("P730700000_07_000");
    MsgDisp("Mikage","Might it be, that you're nervous?");
    MsgDisp("主人公","Y-Yes...");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("P730700000_07_010");
    MsgDisp("Mikage","Oh, you're serious huh?");
    MsgDisp("主人公","Does it look like I'm smiling...?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("P730700000_07_020");
    MsgDisp("Mikage","My bad, my bad.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("P730700000_07_030");
    MsgDisp("Mikage","From now on I'll be serious.
Your anxiousness is proof that you
seriously worked hard on this.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("P730700000_07_040");
    MsgDisp("Mikage","Just the fact that you were able to feel
nervous means that no matter the result,
it will remain a memory.");
    MsgDisp("主人公","Yes.
Even if you say that...");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("P730700000_07_050");
    MsgDisp("Mikage","Haha, well.
You just have to overcome it yourself,
won't you?");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("P730700000_07_060");
    MsgDisp("Mikage","Well, it's your turn.
Go.");
    MsgDisp("主人公","Yes, I'm off!");
    MsgDisp("主人公","(Yes, I have to prepare myself...!)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","I finished just in time but, it's finally
the runway...
I'm nervous...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(7,254,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(7);
    VoicePlay("P730700000_07_070");
    MsgDisp("Mikage","｛主人公｝.
That's quite nicely done isn't it, those
clothes?");
    MsgDisp("主人公","Ah, ｛御影＊＊｝!
Is it really...?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("P730700000_07_080");
    MsgDisp("Mikage","Yeah.
Of course, the model too?");
    MsgDisp("主人公","Thank you very much.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("P730700000_07_090");
    MsgDisp("Mikage","Now I'm looking forwards to your model
walk.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("P730700000_07_100");
    MsgDisp("Mikage","Hey, hold your head high and go.");
    MsgDisp("主人公","Yes!");
    MsgDisp("主人公","(Seems like after talking to
｛御影＊＊｝ my anxieties seem to have
been relieved. Alright, let's do our
best!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
BGOpen("sc725",0);
ScrFadeIn(0);
