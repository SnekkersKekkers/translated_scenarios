switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("F010700004_07_000");
    MsgDisp("Mikage","Can't, I biked today.");
    MsgDisp("主人公","Ah, I see...");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(7);
    MsgDisp("主人公","(Mm, it's unfortunate...)");
    break ;
    case 3:
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("F010700004_07_010");
    MsgDisp("Mikage","Sorry.
There's a staff meeting today.
Ah, I really do want to go with you.");
    MsgDisp("主人公","That's fine, please do your best.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(7);
    MsgDisp("主人公","(It can't be helped, I guess.)");
    break ;
    case 4:
    case 5:
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("F010700004_07_020");
    MsgDisp("Mikage","Thank you for inviting me, but...
well, Vice Principal Himuro called me
to talk.");
    MsgDisp("主人公","｛御影＊＊｝...
are you okay?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("F010700004_07_030");
    MsgDisp("Mikage","I should just go home with you...
Isn't it my choice?");
    MsgDisp("主人公","Huh∋
That would be bad, wouldn't it?");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("F010700004_07_040");
    MsgDisp("Mikage","You're right...
Besides, we don't know for sure he'll
be scolding me.");
    MsgDisp("主人公","Yes, I'm sure it'll be a good
conversation.");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("F010700004_07_050");
    MsgDisp("Mikage","Haha, thanks.
Be careful going home～");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(7);
    MsgDisp("主人公","(It can't be helped, I guess.
But is ｛御影＊＊｝ going to be okay?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
