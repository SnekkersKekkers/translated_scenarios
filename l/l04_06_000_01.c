switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,2,1);
    ChEyeOpenLevel(6,0);
    VoicePlay("L040600001_06_000");
    MsgDisp("Himuro","...You too?");
    MsgDisp("主人公","What...?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("L040600001_06_010");
    MsgDisp("Himuro","I got this chocolate from my part-time
job, too.
Is it popular?");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(6);
    Wait(30);
    MsgDisp("主人公","(Yeah...
I guess that's it.)");
    break ;
    case 3:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0,1);
    VoicePlay("L040600001_06_020");
    MsgDisp("Himuro","Thanks.
Though it looks like you're doing this out
of obligation.");
    MsgDisp("主人公","What?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("L040600001_06_030");
    MsgDisp("Himuro","Well, I'll take it.
It's from a shop with a good reputation.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(6);
    Wait(30);
    MsgDisp("主人公","(I guess he was happy?)");
    break ;
    case 4:
    case 5:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,5,1);
    VoicePlay("L040600001_06_040");
    MsgDisp("Himuro","Huh... this?");
    MsgDisp("主人公","Y-Yeah.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("L040600001_06_050");
    MsgDisp("Himuro","...I, see.");
    MsgDisp("主人公","Um...");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("L040600001_06_060");
    MsgDisp("Himuro","Ha... don't worry about it.
I was the one thinking of nonsense and
expecting too much.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(6);
    Wait(30);
    MsgDisp("主人公","(Should I have given him a better
chocolate...?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
