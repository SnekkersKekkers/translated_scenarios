switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    ChEye(5,0);
    ChMouth(5,0);
    ChMotion(5,0,1);
    VoicePlay("L040500001_05_000");
    MsgDisp("Hiiragi","This is quite nice.
Thank you very much.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","(Hm,
well, I guess that's it......)");
    break ;
    case 3:
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0,1);
    VoicePlay("L040500001_05_010");
    MsgDisp("Hiiragi","I thank you.
You're quite a hard worker.");
    MsgDisp("主人公","Huh?");
    ChEye(5,2);
    ChMotion(5,4);
    VoicePlay("L040500001_05_020");
    MsgDisp("Hiiragi","Thinking of all those who I am
indebted to......
I understand.");
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("L040500001_05_030");
    MsgDisp("Hiiragi","Ah, it seems you're still on your
way. Please, continue your efforts.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","(I was cheered on......
I wonder if he liked it?)");
    break ;
    case 4:
    case 5:
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,0,1);
    VoicePlay("L040500001_05_040");
    MsgDisp("Hiiragi","I thank you.
As long as your feelings are here,
there is nothing more important.");
    MsgDisp("主人公","Um, sure.");
    ChEye(5,4);
    ChMouth(5,4);
    VoicePlay("L040500001_05_050");
    MsgDisp("Hiiragi","The you who chose this chocolate.
The you who brought it to school.
I thank each one.");
    MsgDisp("主人公","Um......");
    ChMotion(5,2);
    ChEyeOpenLevel(5,9);
    VoicePlay("L040500001_05_060");
    MsgDisp("Hiiragi","What's important are your feelings.
The looks of it are not important.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    ChEyeOpenLevel(5,#1);
    MsgDisp("主人公","(I wonder if I should have
given him a nicer chocolate......?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
