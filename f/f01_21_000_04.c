ChLayout(1);
switch (ChPrmGet(21,6)){
    case 0:
    case 1:
    case 2:
    ChEye(21,4);
    ChMouth(21,4);
    ChMotion(21,5);
    VoicePlay("F012100004_21_000");
    MsgDisp("Michiru","I have plans today, so no.
Sorry.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(21);
    MsgDisp("主人公","(...It can't be helped.
I'll go home alone.)");
    break ;
    case 3:
    ChEye(21,2);
    ChMouth(21,0);
    ChMotion(21,5);
    VoicePlay("F012100004_21_010");
    MsgDisp("Michiru","My apologies.
I have errands today.");
    MsgDisp("主人公","I see.
Well, it can't be helped...");
    ChEye(21,4);
    ChMouth(21,0);
    ChMotion(21,0);
    VoicePlay("F012100004_21_020");
    MsgDisp("Michiru","How about you invite me another time?
I'll see you.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(21);
    MsgDisp("主人公","(...It can't be helped.
I'll go home alone.)");
    break ;
    case 4:
    case 5:
    ChEye(21,2);
    ChMouth(21,2);
    ChMotion(21,0);
    VoicePlay("F012100004_21_030");
    MsgDisp("Michiru","Ah......");
    MsgDisp("主人公","Could it be that you're busy?");
    ChMouth(21,4);
    ChMotion(21,2);
    VoicePlay("F012100004_21_040");
    MsgDisp("Michiru","That's right.
Sorry, Mari.
Bye......");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(21);
    MsgDisp("主人公","(......Oh well,
I'll go home alone.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
