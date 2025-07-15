switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,1);
    VoicePlay("L040400002_04_000");
    MsgDisp("Nanatsumori","Ah, this is......");
    MsgDisp("主人公","I got a little excited!
It's a popular chocolate I saw on
Habatcher.");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0);
    VoicePlay("L040400002_04_010");
    MsgDisp("Nanatsumori","I know.
Heh, looking forward to eating it.
Thank you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(4);
    MsgDisp("主人公","(He seemed happy.
Thank goodness!)");
    break ;
    case 3:
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,0);
    VoicePlay("L040400002_04_020");
    MsgDisp("Nanatsumori","Oh, this is......");
    MsgDisp("主人公","It's a popular chocolate featured on
Habatcher.
I went a little all out.");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1);
    VoicePlay("L040400002_04_030");
    MsgDisp("Nanatsumori","Yeah, I know.
I haven't tried it yet, so I'm super
happy.");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,0);
    VoicePlay("L040400002_04_040");
    MsgDisp("Nanatsumori","I'd share it with you, but......
Sorry, let me enjoy this myself.
Thank you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(4);
    MsgDisp("主人公","(He seemed happy.
Thank goodness!)");
    break ;
    case 4:
    case 5:
    ChEye(4,5);
    ChMouth(4,4);
    ChMotion(4,0);
    VoicePlay("L040400002_04_050");
    MsgDisp("Nanatsumori","! This was hard to get, right? It's a
pretty popular store, now.");
    MsgDisp("主人公","If it's for you, ｛七ツ森＊｝, then I
don't mind a bit of challenge.");
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,1);
    VoiceEVSPlay(4);
    VoicePlay("L040400002_04_060");
    MsgDisp("Nanatsumori","｛主人公｝...... Woah, I'm super happy.");
    ChMotion(4,0);
    VoicePlay("L040400002_04_070");
    MsgDisp("Nanatsumori","But...... I don't know how to say this,
but you got pretty excited, huh?");
    MsgDisp("主人公","Hehe, I guess?
But, I wanted you to be happy,
｛七ツ森＊｝.");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3);
    VoicePlay("L040400002_04_080");
    MsgDisp("Nanatsumori","Then you succeeded.
Let's eat it together later, yeah?");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(4);
    MsgDisp("主人公","(He seemed super happy.
Thank goodness!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
