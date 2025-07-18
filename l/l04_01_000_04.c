switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("L040100004_01_000");
    MsgDisp("Kazama","It's nice, handmade chocolate.");
    MsgDisp("主人公","Yeah, I did my best.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("L040100004_01_010");
    MsgDisp("Kazama","Thanks.
It has my taste in it too.
I really like stuff like this.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("L040100004_01_020");
    MsgDisp("Kazama","Thank you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(1);
    MsgDisp("主人公","(Alright.
He seemed to like it!)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 3:
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("L040100004_01_030");
    MsgDisp("Kazama","Wow, nice.");
    MsgDisp("主人公","I tried making it myself.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("L040100004_01_040");
    MsgDisp("Kazama","Yeah, stuff like this is good.");
    MsgDisp("主人公","Is that a compliment?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("L040100004_01_050");
    MsgDisp("Kazama","Of course.
Unlike storebought ones, it reflects you.
And my preferences are there, too.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("L040100004_01_060");
    MsgDisp("Kazama","Thank you.");
    MsgDisp("主人公","Hehe, thank goodness.
Let me know how the taste is, okay?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("L040100004_01_070");
    MsgDisp("Kazama","Roger that.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(1);
    MsgDisp("主人公","(He seemed to like it.
Thank goodness!)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("L040100004_01_080");
    MsgDisp("Kazama","You really did your best.
These are handmade, right?");
    MsgDisp("主人公","Yeah, I put some effort in.");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("L040100004_01_090");
    MsgDisp("Kazama","If this is just some effort, your full
power must be amazing.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("L040100004_01_100");
    MsgDisp("Kazama","...Hey, this chocolate is a combination of
my taste and your sense, right?");
    MsgDisp("主人公","Hehe, kind of like our child?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    ChCheek(1,7);
    VoicePlay("L040100004_01_110");
    MsgDisp("Kazama","Hey, a-a child, you!");
    ChEye(1,4);
    ChMouth(1,4);
    ChMotion(1,4);
    VoicePlay("L040100004_01_120");
    MsgDisp("Kazama","...Oh no.
I don't think I can eat this anymore.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(1);
    MsgDisp("主人公","(Um, he seemed happy, right?)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
