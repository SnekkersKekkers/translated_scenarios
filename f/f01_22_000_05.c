switch (ChPrmGet(22,6)){
    case 0:
    case 1:
    case 2:
    ChEye(22,0);
    ChMouth(22,3);
    ChMotion(22,0);
    VoicePlay("F012200005_22_000");
    MsgDisp("Hikaru","Okay, let's make a stop～");
    MsgDisp("主人公","Yay!
Well then, let's go!");
    break ;
    case 3:
    ChEye(22,0);
    ChMouth(22,3);
    ChMotion(22,3,1);
    VoicePlay("F012200005_22_010");
    MsgDisp("Hikaru","Okay!
Girl talk time～");
    MsgDisp("主人公","Hehe.
Then, let's go!");
    break ;
    case 4:
    case 5:
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,4,1);
    ChEyeOpenLevel(22,0);
    ChCheek(22,5);
    VoicePlay("F012200005_22_020");
    MsgDisp("Hikaru","Heh▼
Mari asked Hikaru out to a coffee shop～");
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,3,1);
    VoicePlay("F012200005_22_030");
    MsgDisp("Hikaru","So, let's go.
Do some girl talk～");
    MsgDisp("主人公","Okay.
Then, let's go!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
