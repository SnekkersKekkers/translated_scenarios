BGOpen("fp720",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","I've finished preparing
the deliveries!");
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,35,0,0,0,-1,-1,0,0);
    VoicePlay("I160100004_01_000");
    MsgDisp("Kazama","Oh, you were pretty
careful with it, huh?");
    MsgDisp("主人公","Yeah.
But, I wish I could've had it
finished sooner......");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I160100004_01_010");
    MsgDisp("Kazama","Hm...... If you're feeling like that,
seems like there'll be more work
you'll be trusted with in the future.");
    MsgDisp("主人公","(I did it!
I hope I can help out around the shop
even more.)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","I've finished checking and
restocking the delivery items!");
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,35,0,0,0,-1,-1,0,0);
    VoicePlay("I160100004_01_020");
    MsgDisp("Kazama","Good work.
Yeah, you were pretty fast.");
    MsgDisp("主人公","Really?
But, I'm worried I made a mistake
somewhere.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("I160100004_01_030");
    MsgDisp("Kazama","That feeling's good.
It's proof you're good at your job.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I160100004_01_040");
    MsgDisp("Kazama","Remembering your beginnings,
and learning the job steadily.
You're great, you know?");
    MsgDisp("主人公","Hehe, I did it!");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("I160100004_01_050");
    MsgDisp("Kazama","Hey.
It's good that you're smiling, but
watch your volume.");
    MsgDisp("主人公","(Alright, let's continue
to work hard without forgetting why
we started∈)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
