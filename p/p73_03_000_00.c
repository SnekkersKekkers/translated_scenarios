BGMStop();
ChLayout(1);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(I finished just in time but, 
it's finally the runway...I'm nervous..)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(3,254,1,0,3,-1,-1,0,0);
    VoicePlay("P730300000_03_000");
    MsgDisp("Honda","Ah, I found you.");
    MsgDisp("主人公","Ah, ｛本多＊＊｝!
Did you come to watch?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("P730300000_03_010");
    MsgDisp("Honda","Yep yep, I look forward to seeing both you
as a model, and your work also.");
    MsgDisp("主人公","That makes me happy, thank you.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("P730300000_03_020");
    MsgDisp("Honda","I want to watch from a good seat, so I'll
see you.∈");
    MsgDisp("主人公","(Okay, I've got to look cool!)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(I finished just in time but, 
it's finally the runway...I'm nervous..)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(3,254,5,4,3,-1,-1,0,0);
    VoicePlay("P730300000_03_030");
    MsgDisp("Honda","Waa, it's a model...");
    MsgDisp("主人公","Ah,｛本多＊＊｝, you came.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4,1);
    VoicePlay("P730300000_03_040");
    MsgDisp("Honda","Yeah, makeup and fashion can completely
change your appearance. Girls are truly
amazing.");
    MsgDisp("主人公","Am I really that difefrent?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("P730300000_03_050");
    MsgDisp("Honda","Yeah, you're completely different.
But I like both the you now, 
and your usual self too.");
    MsgDisp("主人公","Eh.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("P730300000_03_060");
    MsgDisp("Honda","Ah, it's time.
Have fun!");
    MsgDisp("主人公","Thank you, I'm off now!");
    MsgDisp("主人公","(Alーright, I'll do it perfectly!)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChClose(3,0,0);
BGOpen("sc725",0);
ScrFadeIn(0);
