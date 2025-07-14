BGMStop();
BGOpen("sc605",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("主人公","(I finished hanging up the posters, Next
is...
organizing the documents.)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(3,254,0,0,4,#1,#1,0,0);
    VoicePlay("P830300000_03_000");
    MsgDisp("Honda","Huh?
What are you up to?");
    MsgDisp("主人公","Ah, ｛本多＊＊｝. The student council
committee have been entrusted with
managing the cultural festival.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("P830300000_03_010");
    MsgDisp("Honda","Ah, I see.
You're the unsung hero huh.");
    ChSet(3,3);
    VoicePlay("P830300000_03_020");
    MsgDisp("Honda","That's right, I'll be waiting here for
you, So once you can catch a break, let's
go around the school together!");
    MsgDisp("主人公","Hehe, yeah.
Definitely!");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(I finished hanging up the posters, Next
is...
organizing the documents.)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(3,254,1,0,3,#1,#1,0,0);
    VoicePlay("P830300000_03_030");
    MsgDisp("Honda","Ah, you're here, you're here.
You're the unsung hero.");
    MsgDisp("主人公","Eh, ｛本多＊＊｝. Is something the matter?");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4,1);
    VoicePlay("P830300000_03_040");
    MsgDisp("Honda","Nope, I was just looking for you.
I thought we could go around together.");
    MsgDisp("主人公","Ah... sorry?
Right now I can't leave here.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("P830300000_03_050");
    MsgDisp("Honda","I see, if there's anything I can help you
with, just let me know!
I'll just be wandering around anyways.");
    MsgDisp("主人公","Hehe, yeah.
Thank you, ｛本多＊＊｝.");
    ChSet(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("P830300000_03_060");
    MsgDisp("Honda","Then, I'll be watching you for a while
then let's wander around.");
    MsgDisp("主人公","(Alrーight, I have to show you I'm doing
my job properly!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
