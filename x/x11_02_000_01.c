switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgClose();
    ChOpen(2,254,3,0,3,-1,-1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110200001_02_000");
    MsgDisp("Sassa","We won a practice match!
People are talking about it a lot.");
    MsgDisp("主人公","Oh, really?");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("X110200001_02_010");
    MsgDisp("Sassa","I told him that I have a very talented
manager. I bragged about it.");
    MsgDisp("主人公","(I'm glad ｛颯砂＊＊｝ is happy. Let's
continue to do our best in club
activities!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(2,254,3,0,3,-1,-1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110200001_02_020");
    MsgDisp("Sassa","I don't know... our practice games...
It's all over the news at school.");
    MsgDisp("主人公","Is that so?");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,4);
    ChCheek(2,5);
    VoicePlay("X110200001_02_030");
    MsgDisp("Sassa","Yeah, because we got a lot of good
records. That's thanks to my manager, too.
Thank you!");
    MsgDisp("主人公","(Okay, everyone's records.
I'll do my best to make it even better!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
