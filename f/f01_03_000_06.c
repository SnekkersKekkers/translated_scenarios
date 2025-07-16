switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,1);
    VoicePlay("F010300006_03_000");
    MsgDisp("Honda","Sorry.
I told my folks I'd be home ASAP.
Well then, seeya!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(3);
    MsgDisp("主人公","(It can't be helped.
I'll go straight home today...)");
    break ;
    case 3:
    ChEye(3,4);
    ChMouth(3,2);
    ChMotion(3,5);
    VoicePlay("F010300006_03_010");
    MsgDisp("Honda","Oh, sorry.
I've got plans today, so I'll see you
later!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(3);
    MsgDisp("主人公","(It can't be helped.
I'll go straight home today...)");
    break ;
    case 4:
    case 5:
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,5);
    VoicePlay("F010300006_03_020");
    MsgDisp("Honda","Huh?
Of course I want to go, but...");
    MsgDisp("主人公","Oh...do you have errands?");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("F010300006_03_030");
    MsgDisp("Honda","Pupu... Sorry that you went to the trouble
of inviting me. Next time for sure!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(3);
    MsgDisp("主人公","(It can't be helped.
I'll go straight home today...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
