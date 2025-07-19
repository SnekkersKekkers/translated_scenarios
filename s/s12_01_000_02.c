MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
BGOpen("ex020",0);
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    ScrFadeIn(0);
    VoicePlay("S120100002_01_000");
    MsgDisp("Kazama","It was lively this year.");
    MsgDisp("主人公","Yeah, it was crowded.
Let's try our best this year.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("S120100002_01_010");
    MsgDisp("Kazama","You're already hard-working so it's a
little scary when you make a declaration
like that.");
    MsgDisp("主人公","Ehh?");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("S120100002_01_020");
    MsgDisp("Kazama","It's dangerous and makes me tired.
So take it easy.
See you later.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(1);
    MsgDisp("主人公","(Geez, ｛風真＊＊｝ really acts like a mom
sometimes...)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 3:
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    ScrFadeIn(0);
    VoicePlay("S120100002_01_030");
    MsgDisp("Kazama","Our New Year's visit is over.");
    MsgDisp("主人公","Yeah.
I think this year will be a good one.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("S120100002_01_040");
    MsgDisp("Kazama","Good, that positive-thinking is so you.");
    MsgDisp("主人公","...Is that a compliment?");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("S120100002_01_050");
    MsgDisp("Kazama","Of course.
Your positive attitude always helps me.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("S120100002_01_060");
    MsgDisp("Kazama","I'll be counting on you again this year.
Come, let's get you home.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    SEWait();
    break ;
    case 4:
    case 5:
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    ScrFadeIn(0);
    VoicePlay("S120100002_01_070");
    MsgDisp("Kazama","I still like the atmosphere here.
It feels special, somehow.");
    MsgDisp("主人公","Yep.
Let's do our best this year again.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("S120100002_01_080");
    MsgDisp("Kazama","Right.
But you've already been working hard for a
long time.");
    ChEye(1,0);
    ChMouth(1,4);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    VoicePlay("S120100002_01_090");
    MsgDisp("Kazama","I know how you were and how you are now,
so there's no doubt in my mind.");
    MsgDisp("主人公","If ｛風真＊＊｝ says so.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("S120100002_01_100");
    MsgDisp("Kazama","It's about time we praised each other a
bit, at least for today. Come, we can
compliment each other on the way back.");
    MsgDisp("主人公","Hehe, yeah.");
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
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
