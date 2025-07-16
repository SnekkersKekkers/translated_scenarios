switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,1);
    VoicePlay("L040400004_04_000");
    MsgDisp("Nanatsumori","Ah, handmade.");
    MsgDisp("主人公","Yeah.
I thought you'd like this kind of thing,
｛七ツ森＊｝.");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0);
    VoicePlay("L040400004_04_010");
    MsgDisp("Nanatsumori","I like it a lot.
You're good.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(4);
    MsgDisp("主人公","(Thank goodness.
He seemed happy!)");
    break ;
    case 3:
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0);
    VoicePlay("L040400004_04_020");
    MsgDisp("Nanatsumori","The handmade one came.");
    MsgDisp("主人公","Yeah. I tried making it to your liking,
｛七ツ森＊｝. How is it?");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1);
    VoicePlay("L040400004_04_030");
    MsgDisp("Nanatsumori","Nice.
You pretty much got my taste.
Thank you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(4);
    MsgDisp("主人公","(He seemed happy!
Thank goodness!)");
    break ;
    case 4:
    case 5:
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0);
    VoicePlay("L040400004_04_040");
    MsgDisp("Nanatsumori","Handmade, huh?
Oh, looking good.");
    MsgDisp("主人公","Really?
I did my best so you'd like it,
｛七ツ森＊｝.");
    ChEye(4,0);
    ChMouth(4,3);
    VoicePlay("L040400004_04_050");
    MsgDisp("Nanatsumori","I see. Then you're right on the money. I
like this kind of decoration. You got it.");
    MsgDisp("主人公","Because it's ｛七ツ森＊｝,
you know?");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1);
    VoicePlay("L040400004_04_060");
    MsgDisp("Nanatsumori","Hm......
You've got me all figured out, huh?");
    MsgDisp("主人公","Hehe!");
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0);
    VoicePlay("L040400004_04_070");
    MsgDisp("Nanatsumori","What? That smile. My heart is
pounding...... Thanks.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(4);
    MsgDisp("主人公","(He seemed really happy!
Thank goodness!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
