ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝.
Hello.");
    MsgClose();
    ChOpen(5,254,2,2,4,#1,#1,0,0);
    VoicePlay("N020500003_05_000");
    MsgDisp("Hiiragi","Hello.
Umm, nice weather, huh.");
    MsgDisp("主人公","Hm...?");
    ChMotion(5,4);
    VoicePlay("N020500003_05_010");
    MsgDisp("Hiiragi","Never mind...
I felt a sense of familiarity from you...");
    ChMotion(5,0);
    VoicePlay("N020500003_05_020");
    MsgDisp("Hiiragi","See you later.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(5);
    MsgDisp("主人公","(Is my ranking this sense of familiarity?
Oof... I have to study harder!)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 3:
    MsgClose();
    ChOpen(5,254,0,0,4,#1,#1,0,0);
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝.");
    ChEye(5,4);
    VoicePlay("N020500003_05_030");
    MsgDisp("Hiiragi","You are too kind. You don't have to be so
concerned about me.");
    MsgDisp("主人公","Umm, well...");
    ChEye(5,2);
    ChMouth(5,2);
    ChMotion(5,2);
    VoicePlay("N020500003_05_040");
    MsgDisp("Hiiragi","Wait, no way...");
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("N020500003_05_050");
    MsgDisp("Hiiragi","It's surprising that you be able to get
into Haba High. It's okay.");
    ChMotion(5,4);
    VoicePlay("N020500003_05_060");
    MsgDisp("Hiiragi","Anyway, good job.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(5);
    MsgDisp("主人公","(Oof... It's not okay.
I have to study harder!)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝.");
    MsgClose();
    ChOpen(5,254,0,2,2,#1,#1,0,0);
    VoicePlay("N020500003_05_070");
    MsgDisp("Hiiragi","It is what it is...");
    MsgDisp("主人公","Umm...?");
    ChEye(5,4);
    ChMouth(5,2);
    ChMotion(5,2);
    VoicePlay("N020500003_05_080");
    MsgDisp("Hiiragi","I'm not saying that grades are everything.
However, we are high school students.");
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("N020500003_05_090");
    MsgDisp("Hiiragi","If you can't concentrate by yourself,
I'll study with you.");
    ChEye(5,4);
    ChMouth(5,3);
    VoicePlay("N020500003_05_100");
    MsgDisp("Hiiragi","Let's do our best together.
It will be okay, you can do it.");
    MsgDisp("主人公","｛柊＊＊＊｝...");
    MsgDisp("主人公","(I have to study harder...)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(5,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChClose(5);
