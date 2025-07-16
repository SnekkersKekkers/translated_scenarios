BGOpen("ar100",0);
ChLayout(1);
ChNanaType(1);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","Thank you for waiting.
Here is your blend coffee and strawberry
shortcake.");
    SEPlay("EV_SE_001",0,0.5);
    SEWait();
    VoicePlay("I360400001_36_000");
    MsgDisp("Male Customer","Yeah, thanks.
You're getting more used to this.");
    MsgDisp("主人公","Yes, thank you very much!");
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(1);
    ChOpen(4,35,0,0,0,#1,#1,0,0);
    VoicePlay("I360400001_04_000");
    MsgDisp("Nanatsumori","Hmm......");
    MsgDisp("主人公","Ah......
Welcome!");
    ChEye(4,1);
    ChMouth(4,4);
    ChMotion(4,1,1);
    ChEyeOpenLevel(4,0);
    VoicePlay("I360400001_04_010");
    MsgDisp("Nanatsumori","Hello.
You're getting used to it, huh?");
    MsgDisp("主人公","Huh......
You heard that?");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("I360400001_04_020");
    MsgDisp("Nanatsumori","Haha.
I was just thinking the same thing.
Well, I'll have the same as him.");
    MsgDisp("主人公","Yes, understood.
A blend coffee and strawberry shortcake!");
    MsgDisp("主人公","(｛七ツ森＊｝ praised me!)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Thank you for waiting.
Here is your blend coffee and strawberry
shortcake.");
    SEPlay("EV_SE_001",0,0.5);
    SEWait();
    VoicePlay("I360400001_36_010");
    MsgDisp("Male Customer","Yeah, thanks.
The strawberries look delicious.");
    MsgDisp("主人公","Thank you very much!");
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(1);
    ChOpen(4,35,0,0,0,#1,#1,0,0);
    VoicePlay("I360400001_04_030");
    MsgDisp("Nanatsumori","Hey.");
    MsgDisp("主人公","Welcome!");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("I360400001_04_040");
    MsgDisp("Nanatsumori","Ooh, high energy.
Feels nice.");
    MsgDisp("主人公","Hehe!");
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0,1);
    ChCheek(4,5);
    VoicePlay("I360400001_04_050");
    MsgDisp("Nanatsumori","Your smile is...... nice, too.");
    MsgDisp("主人公","Hm?");
    ChEye(4,4);
    ChMouth(4,0);
    ChMotion(4,2,1);
    VoicePlay("I360400001_04_060");
    MsgDisp("Nanatsumori","......A blend coffee and strawberry
shortcake, please.");
    MsgDisp("主人公","(Did ｛七ツ森＊｝ praise
me?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
