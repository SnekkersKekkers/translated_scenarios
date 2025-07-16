switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    BGMPlay("BGM_C07_MIKAGE_A",0.01);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("F010700005_07_000");
    MsgDisp("Mikage","Oh, that's fine.");
    MsgDisp("主人公","Yay!
Let's go.");
    break ;
    case 3:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("F010700005_07_010");
    MsgDisp("Mikage","Oh, let's go, let's go.
For me, I want a smoothie.");
    MsgDisp("主人公","Haha, sure!");
    break ;
    case 4:
    case 5:
    BGMPlay("BGM_C07_MIKAGE_A",0.01);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("F010700005_07_020");
    MsgDisp("Mikage","Oh, for some important conversation?");
    MsgDisp("主人公","Ah, yes.");
    ChEye(7,0);
    ChMouth(7,4);
    ChMotion(7,0);
    VoicePlay("F010700005_07_030");
    MsgDisp("Mikage","Oh, huh...");
    MsgDisp("主人公","...hehe.");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("F010700005_07_040");
    MsgDisp("Mikage","Hey. Where'd you learn that technique,
Miss Diligent? Come on, let's go.");
    MsgDisp("主人公","Oo～kay.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0,0);
