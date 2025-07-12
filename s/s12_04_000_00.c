MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
BGOpen("ex020",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0);
    VoicePlay("S120400000_04_000");
    MsgDisp("Nanatsumori","The festival is over.");
    MsgDisp("主人公","Hehe, yep.");
    ChMotion(4,1,1);
    VoicePlay("S120400000_04_010");
    MsgDisp("Nanatsumori","See you later then.
At school.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(4,0,30);
    Wait(30);
    VoicePlay("S120400000_04_020");
    MsgDisp("Nanatsumori","Same!");
    MsgDisp("主人公","(A New Year.
I wonder what kind of year it will be?)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 3:
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0);
    VoicePlay("S120400000_04_030");
    MsgDisp("Nanatsumori","Alright.
The festival is over.");
    MsgDisp("主人公","Hehe, yep!");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("S120400000_04_040");
    MsgDisp("Nanatsumori","I'll walk you home.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    SEWait();
    break ;
    case 4:
    case 5:
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0);
    VoicePlay("S120400000_04_050");
    MsgDisp("Nanatsumori","Did you want to do anything else
during our shrine visit?");
    MsgDisp("主人公","Nope.
I think this is good enough.");
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,2,1);
    VoicePlay("S120400000_04_060");
    MsgDisp("Nanatsumori","I see......");
    MsgDisp("主人公","Okay, see you later——");
    ChEye(4,0);
    ChMouth(4,5);
    ChMotion(4,1,1);
    VoicePlay("S120400000_04_070");
    MsgDisp("Nanatsumori","Wait up!");
    MsgDisp("主人公","Huh?");
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("S120400000_04_080");
    MsgDisp("Nanatsumori","I'll take you home.
The day isn't over until we get there.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    SEWait();
    break ;
    default :
    DbgAssert(1);
    break ;
    }
