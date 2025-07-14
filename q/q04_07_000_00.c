switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","Ah, ｛御影＊＊｝!");
    MsgClose();
    SEPlay("EV_SE_544");
    ChOpen(7,254,0,0,0,#1,#1,0,0);
    VoicePlay("Q040700000_07_000");
    MsgDisp("Mikage","Oh, good morning.
You look excited.");
    MsgDisp("主人公","For today's free period, could you look
around with me?");
    break ;
    case 3:
    MsgDisp("主人公","｛御影＊＊｝ ！");
    MsgClose();
    SEPlay("EV_SE_544");
    ChOpen(7,254,0,0,0,#1,#1,0,0);
    VoicePlay("Q040700000_07_010");
    MsgDisp("Mikage","Oh, good morning.
What's up?");
    MsgDisp("主人公","Good morning.
｛御影＊＊｝, do you already have plans
for today's free period?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("Q040700000_07_020");
    MsgDisp("Mikage","Haha, are you inviting me?");
    MsgDisp("主人公","Yes. If it's fine with you, could you look
around with me?");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","｛御影＊＊｝ ！");
    MsgClose();
    SEPlay("EV_SE_544");
    ChOpen(7,254,0,0,0,#1,#1,0,0);
    VoicePlay("Q040700000_07_030");
    MsgDisp("Mikage","Oh, morning.
You look excited today.");
    MsgDisp("主人公","Yes, and you, ｛御影＊＊｝?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("Q040700000_07_040");
    MsgDisp("Mikage","Yeah, Thanks to the cheerful greeting, I'm
fully awake.
So, what's up?");
    MsgDisp("主人公","Yes. For today's free period, could you
look around with me?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChEyeOpenLevel(7,#1);
ChMouthOpenLevel(7,#1);
ChCheek(7,0);
