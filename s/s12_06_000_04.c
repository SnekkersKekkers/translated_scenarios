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
    VoicePlay("S120600002_06_000");
    MsgDisp("Himuro","I'll take my leave here.
...Happy New Years.");
    MsgDisp("主人公","Yeah, same to you!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(6);
    Wait(30);
    MsgDisp("主人公","(Okay!
Let's try our best this year!)");
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
    VoicePlay("S120600002_06_010");
    MsgDisp("Himuro","It's hard to believe we spent New Year's
together.");
    MsgDisp("主人公","Uhm...did you hate it?");
    ChEye(6,2);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("S120600002_06_020");
    MsgDisp("Himuro","What a nonsensical question.
If I didn't like it, I wouldn't have come.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("S120600002_06_030");
    MsgDisp("Himuro","Come, don't be an idiot.
I'll take you home.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    SEWait();
    break ;
    case 4:
    case 5:
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("S120600002_06_090");
    MsgDisp("Himuro","I'm happy you came with me.
You'll be graduating soon.");
    MsgDisp("主人公","That's true...");
    ChEye(6,0);
    ChMouth(6,2);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("S120600002_06_100");
    MsgDisp("Himuro","...If we were in the same grade, we could
have prayed for success and graduation
together.");
    MsgDisp("主人公","Eh?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("S120600002_06_110");
    MsgDisp("Himuro","Ah...It's nothing. I'll take you home.
Let's go.");
    MsgDisp("主人公","(｛氷室＊＊｝...?)");
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
