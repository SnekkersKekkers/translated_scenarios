ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(1,254,0,4,2,#1,#1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(1);
    VoicePlay("N020100002_01_000");
    MsgDisp("Kazama","｛主人公｝. Your grades are quite
average, huh.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝.");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,1);
    ChEyeOpenLevel(1,8);
    VoicePlay("N020100002_01_010");
    MsgDisp("Kazama","Well, you know, this doesn't seem quite
like you.
This isn't funny.");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("N020100002_01_020");
    MsgDisp("Kazama","Well, good luck.");
    MsgDisp("主人公","(Yeah, I will do my best.)");
    break ;
    case 3:
    MsgClose();
    ChOpen(1,254,1,0,2,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("N020100002_01_030");
    MsgDisp("Kazama","Hmm...");
    MsgDisp("主人公","Ah, ｛風真＊＊｝, what's up with you?");
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("N020100002_01_040");
    MsgDisp("Kazama","Not me. You.");
    MsgDisp("主人公","Huh?");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("N020100002_01_050");
    MsgDisp("Kazama","For better or worse, your charm is in your
usualness, right?
I'm guessing studying isn't unusual.");
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("N020100002_01_060");
    MsgDisp("Kazama","See you.
Just think about that.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(1);
    MsgDisp("主人公","(Sigh. Below average... Yeah, I'll do my
best.)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(1,254,0,2,2,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("N020100002_01_070");
    MsgDisp("Kazama","What's going on?");
    MsgDisp("主人公","Ah, ｛風真＊＊｝.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("N020100002_01_080");
    MsgDisp("Kazama","My childhood friend who brings me joy,
shouldn't get these types of grades.");
    MsgDisp("主人公","Are they too average?");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("N020100002_01_090");
    MsgDisp("Kazama","Yeah.
Be yourself and go for it.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("N020100002_01_100");
    MsgDisp("Kazama","You know, the real fun starts when you
score a bit higher.
See you.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(1);
    MsgDisp("主人公","(Alright, ｛風真＊＊｝ should be surprised
next time, I'll do my best!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(1);
