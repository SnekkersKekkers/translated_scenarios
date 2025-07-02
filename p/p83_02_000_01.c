BGMStop();
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc605",0);
    ScrFadeIn(0);
    VoicePlay("P830200001_48_000");
    MsgDisp("School Girl A","Is there enough garbage bags?");
    MsgDisp("主人公","Yes, we do.
There's lots prepared.");
    VoicePlay("P830200001_44_000");
    MsgDisp("School Girl B","Be careful to not ru
n out of other supplies.");
    MsgDisp("主人公","Yeーs.");
    MsgClose();
    SEPlay("EV_SE_DOOR_019");
    SEWait();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(2,254,3,0,4,-1,-1,0,0);
    VoicePlay("P830200001_02_000");
    MsgDisp("Sassa","The student council seems busy.");
    MsgDisp("主人公","Ah,｛颯砂＊＊｝.
I'm in charge of supplies, so if 
you need anything, tell me okay?");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("P830200001_02_010");
    MsgDisp("Sassa","Haha, you're so generous.'");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("P830200001_02_020");
    MsgDisp("Sassa","I don't need anything, but
when you reach a stopping point, should
we go and look around the exhibits?");
    MsgDisp("主人公","Yeah, thanks!");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("P830200001_02_030");
    MsgDisp("Sassa","I'll wander around here.
Then, I'll see you later.");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(2,0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc605",0);
    ScrFadeIn(0);
    VoicePlay("P830200001_48_010");
    MsgDisp("School Girl A","How is it, does it look like 
there's enough garbage bags?");
    MsgDisp("主人公","Yes, we do.
There's lots prepared.");
    MsgClose();
    SEPlay("EV_SE_DOOR_019");
    SEWait();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(2,254,3,0,4,-1,-1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("P830200001_02_040");
    MsgDisp("Sassa","｛主人公｝.");
    MsgDisp("主人公","Ah,｛颯砂＊＊｝, whats the matter?
Is there something you needed?");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,4);
    ChEyeOpenLevel(2,0);
    VoicePlay("P830200001_02_050");
    MsgDisp("Sassa","There is, there is.
You!");
    MsgDisp("主人公","Ehhh?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("P830200001_02_060");
    MsgDisp("Sassa","I was thinking we could walk around
together. Well, I guess we can't since you
seem busy.");
    MsgDisp("主人公","Thank you.
Yeah, now is a bit...");
    VoicePlay("P830200001_46_000");
    MsgDisp("School Girl C","Umーexcuse me.
Do you have a garbage bag?");
    MsgDisp("主人公","Ah, yes.
I have them here.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,1);
    VoicePlay("P830200001_02_070");
    MsgDisp("Sassa","Then, I'll come back later.
Do your bestー!");
    MsgDisp("主人公","Thank you,｛颯砂＊＊｝!");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(2,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
