switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("F010200003_02_000");
    MsgDisp("Sassa","Yeah, that's good.");
    MsgDisp("主人公","Thanks.
Well then, let's go.");
    break ;
    case 3:
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("F010200003_02_010");
    MsgDisp("Sassa","Sure, of course.
Let's go together.");
    MsgDisp("主人公","Thanks.");
    break ;
    case 4:
    case 5:
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("F010200003_02_020");
    MsgDisp("Sassa","Sure, I was thinking that too.
Let's go together.");
    MsgDisp("主人公","Yay!");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("F010200003_02_030");
    MsgDisp("Sassa","Y-You're that happy about it...");
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
