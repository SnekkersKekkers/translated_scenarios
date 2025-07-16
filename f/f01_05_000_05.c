switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    ChEye(5,0);
    ChMouth(5,0);
    ChMotion(5,0);
    VoicePlay("F010500005_05_000");
    MsgDisp("Hiiragi","Ah, that is fine.
I have a little spare time today.");
    MsgDisp("主人公","Yay!
Let's go.");
    break ;
    case 3:
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("F010500005_05_010");
    MsgDisp("Hiiragi","Thank you for always treating me.");
    MsgDisp("主人公","No, it's you who always treats me.");
    ChEye(5,3);
    ChMotion(5,4);
    VoicePlay("F010500005_05_020");
    MsgDisp("Hiiragi","Well then, let us settle this dispute at a
cafe.");
    MsgDisp("主人公","Hehe, okay!");
    break ;
    case 4:
    case 5:
    ChEye(5,0);
    ChMouth(5,3);
    ChMotion(5,0);
    VoicePlay("F010500005_05_030");
    MsgDisp("Hiiragi","I am taking a break from practice today.");
    MsgDisp("主人公","So that means...?");
    ChEye(5,3);
    ChMotion(5,3);
    VoicePlay("F010500005_05_040");
    MsgDisp("Hiiragi","Let us eat until our stomachs get bloated.");
    MsgDisp("主人公","Haha!
Let's go.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0,0);
SEWait();
