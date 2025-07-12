MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(6,#1);
ChMouthOpenLevel(6,#1);
ChCheek(6,0);
BGOpen("ex020",0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("S120600001_06_000");
    MsgDisp("Himuro","I'll leave here.");
    MsgDisp("主人公","Thank you for today.
Treat me well this year.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("S120600001_06_010");
    MsgDisp("Himuro","Same to you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(6);
    Wait(30);
    MsgDisp("主人公","(A New Year...... I wonder what kind of
year this will be...)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 3:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("S120600001_06_020");
    MsgDisp("Himuro","Our shrine visit is about over.
Should we go home soon?");
    MsgDisp("主人公","I guess so.
Thank you for today.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("S120600001_06_030");
    MsgDisp("Himuro","It's a bit too early to say that.");
    MsgDisp("主人公","Huh?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("S120600001_06_040");
    MsgDisp("Himuro","Come, I'll walk you home.
Let's go.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    SEWait();
    break ;
    case 4:
    case 5:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("S120600001_06_060");
    MsgDisp("Himuro","It's time to go home soon.");
    MsgDisp("主人公","Yeah, it is.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("S120600001_06_070");
    MsgDisp("Himuro","I'll take you home. I want to be with
you......for just a little while longer.");
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
BGMStop();
