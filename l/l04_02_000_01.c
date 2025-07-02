switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("L040200001_02_000");
    MsgDisp("Sassa","Thank you.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("L040200001_02_010");
    MsgDisp("Sassa","Hm, it's cute and tiny.");
    MsgDisp("主人公","Yeah, and delicious.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("L040200001_02_020");
    MsgDisp("Sassa","I could finish this in one bite......");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(2);
    Wait(30);
    MsgDisp("主人公","(Hm, should I have given him
a better chocolate?)");
    break ;
    case 3:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("L040200001_02_030");
    MsgDisp("Sassa","Oh, thanks.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,4);
    VoicePlay("L040200001_02_040");
    MsgDisp("Sassa","Haha, it's tiny.");
    MsgDisp("主人公","Ah, just taste it!");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,0);
    VoicePlay("L040200001_02_050");
    MsgDisp("Sassa","Roger that.
I'll close my eyes and concentrate on it.
Otherwise, I don't think I'll taste it.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(2);
    Wait(30);
    MsgDisp("主人公","(Hm, should I have given him
a better chocolate?)");
    break ;
    case 4:
    case 5:
    ChEye(2,0);
    ChMouth(2,2);
    ChMotion(2,0);
    VoicePlay("L040200001_02_060");
    MsgDisp("Sassa","Ah...... I've seen
this before.");
    MsgDisp("主人公","Yeah, it's tasty, right?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("L040200001_02_070");
    MsgDisp("Sassa","Yeah, I eat it a lot at home.
It's bite sized with the perfect amount
of sugar. Thanks.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(2);
    Wait(30);
    MsgDisp("主人公","(Ah...... Should I have given him
a better chocolate?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0);
