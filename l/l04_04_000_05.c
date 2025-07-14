switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,1);
    VoicePlay("L040400005_04_000");
    MsgDisp("Nanatsumori","Ah, this is handmade......
Ugh!");
    MsgDisp("主人公","That's right, but......
Did something happen?");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,2);
    VoicePlay("L040400005_04_010");
    MsgDisp("Nanatsumori","Nah, I just thought I saw something weird.
Thanks.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(4);
    MsgDisp("主人公","(Could it be that I put something in that
he doesn't like......?)");
    break ;
    case 3:
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0);
    VoicePlay("L040400005_04_020");
    MsgDisp("Nanatsumori","Oh, it's handmade.");
    ChEye(4,2);
    ChMouth(4,2);
    VoicePlay("L040400005_04_030");
    MsgDisp("Nanatsumori","......Hm?");
    MsgDisp("主人公","Huh, what is it?");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,1);
    VoicePlay("L040400005_04_040");
    MsgDisp("Nanatsumori","Nah, nothing.
I'll eat your handmade chocolate.
Thank you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(4);
    MsgDisp("主人公","(Could it be that I put something in that
he doesn't like......?)");
    break ;
    case 4:
    case 5:
    ChEye(4,2);
    ChMouth(4,0);
    ChMotion(4,0);
    VoicePlay("L040400005_04_050");
    MsgDisp("Nanatsumori","I like handmade chocolate.
It feels all warm-");
    MsgDisp("主人公","Really?");
    ChMotion(4,1);
    VoicePlay("L040400005_04_060");
    MsgDisp("Nanatsumori","Warmth can overcome dislike.
Right?");
    MsgDisp("主人公","?");
    ChMotion(4,0);
    VoicePlay("L040400005_04_070");
    MsgDisp("Nanatsumori","Nothing in this is inedible.
Right?");
    MsgDisp("主人公","???");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,0);
    VoicePlay("L040400005_04_080");
    MsgDisp("Nanatsumori","Thank you.
I won't lose, alright?");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(4);
    MsgDisp("主人公","(Could it be that I put something in that
he doesn't like......?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
