switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,1);
    VoicePlay("L040400006_04_000");
    MsgDisp("Nanatsumori","This is... safe to eat, right?");
    MsgDisp("主人公","Huh?
I think it's fine, though...");
    ChMotion(4,2);
    VoicePlay("L040400006_04_010");
    MsgDisp("Nanatsumori","Hey, don't sound so unsure...
I'll accept your feelings.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(4);
    MsgDisp("主人公","(Ugh...
I wish I tried a little harder...)");
    break ;
    case 3:
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0);
    VoicePlay("L040400006_04_020");
    MsgDisp("Nanatsumori","This is... homemade chocolate.");
    MsgDisp("主人公","That's right.");
    ChEye(4,2);
    ChMouth(4,0);
    VoicePlay("L040400006_04_030");
    MsgDisp("Nanatsumori","I see a bit of a crazy aura...");
    MsgDisp("主人公","Sorry, I might have messed up a little...");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,1);
    VoicePlay("L040400006_04_040");
    MsgDisp("Nanatsumori","I guess so...
But it's important to challenge yourself.
Thank you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(4);
    MsgDisp("主人公","(Ugh...
I wish I tried a little harder...)");
    break ;
    case 4:
    case 5:
    ChEye(4,2);
    ChMouth(4,0);
    ChMotion(4,0);
    VoicePlay("L040400006_04_050");
    MsgDisp("Nanatsumori","Handmade chocolate...
What would you rate this?");
    MsgDisp("主人公","Ugh...
Sorry, I messed up a little.");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,1);
    VoicePlay("L040400006_04_060");
    MsgDisp("Nanatsumori","Yeah.
But, you did your best, right?");
    MsgDisp("主人公","Yes.");
    ChMotion(4,0);
    VoicePlay("L040400006_04_070");
    MsgDisp("Nanatsumori","On this, for me.");
    MsgDisp("主人公","Yes.");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3);
    VoicePlay("L040400006_04_080");
    MsgDisp("Nanatsumori","Then, your sincerity gets 100 points.
That's most important.
Thank you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(4);
    MsgDisp("主人公","(｛七ツ森＊｝ is so kind...
But, I wish I tried a little harder...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
