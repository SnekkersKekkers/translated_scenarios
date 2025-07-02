ChLayout(1);
switch (ChPrmGet(21,6)){
    case 0:
    case 1:
    case 2:
    ChEye(21,4);
    ChMouth(21,4);
    ChMotion(21,5);
    VoicePlay("F012100006_21_000");
    MsgDisp("Michiru","My apologies.
I'm not really in the mood today.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(21);
    MsgDisp("主人公","(...It can't be helped.
I'll go home alone today.)");
    break ;
    case 3:
    ChEye(21,4);
    ChMouth(21,4);
    ChMotion(21,4);
    VoicePlay("F012100006_21_010");
    MsgDisp("Michiru","I see, I think that would be difficult.");
    MsgDisp("主人公","Is it the wrong time?");
    ChEye(21,2);
    ChMouth(21,0);
    ChMotion(21,1);
    VoicePlay("F012100006_21_020");
    MsgDisp("Michiru","Today is a little... you know?
My apologies.");
    MsgClose();
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
    ChMotion(21,5);
    VoicePlay("F012100006_21_030");
    MsgDisp("Michiru","Teatime and Mari...
I want to. However, I can't.");
    MsgDisp("主人公","Do you have errands to run?");
    ChEye(21,4);
    ChMouth(21,4);
    ChMotion(21,4);
    VoicePlay("F012100006_21_040");
    MsgDisp("Michiru","That's right.
Sorry, Mari.
Next time, we'll definitely go.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(21);
    MsgDisp("主人公","(I see...
So the timing was bad...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
