BGMStop();
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(Things are looking more calm this year.
Maybe, It's because I'm working hard for
the past three years?)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(1,254,0,4,3,-1,-1,0,0);
    VoicePlay("P530100002_01_000");
    MsgDisp("Kazama","You look good.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("P530100002_01_010");
    MsgDisp("Kazama","I thought I'd take a look at your nervous
face.");
    MsgDisp("主人公","Now, that's so mean.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("P530100002_01_020");
    MsgDisp("Kazama","I'm sorry. But you seem to have a lot of
confidence. Do you think you can give a
good performance?");
    MsgDisp("主人公","Yeah. It's the last cultural festival so I
am going to have fun!");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P530100002_01_030");
    MsgDisp("Kazama","......It's my turn.
Somehow, I'm starting to feel nervous.");
    MsgDisp("主人公","Hehe.
Well, I'll be going then!");
    ChEye(1,4);
    ChMouth(1,3);
    MsgDisp("主人公","(Now, this is the culmination of three
years of hardwork. Let's do our best, so
we don't have any regrets!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(1,0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(Things are looking more calm this year.
Maybe, It's because I'm working hard for
the past three years?)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(1,254,0,0,0,-1,-1,0,0);
    VoiceEVSPlay(1);
    VoicePlay("P530100002_01_040");
    MsgDisp("Kazama","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝, You came?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P530100002_01_050");
    MsgDisp("Kazama","Isn't that obvious?
It's the culmination of your work.");
    MsgDisp("主人公","Hehe, you seem pretty motivated huh?");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P530100002_01_060");
    MsgDisp("Kazama","I mean, you look pretty relaxed.");
    MsgDisp("主人公","Yes, I've worked hard for three years.
I'll be okay no matter what the result is.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("P530100002_01_070");
    MsgDisp("Kazama","Wow, that's so cool. I'm inlove with you
all over again.");
    MsgDisp("主人公","Huh?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("P530100002_01_080");
    MsgDisp("Kazama","I've always thought that you are a
charming ghost. But it seems like you have
guts too?");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P530100002_01_090");
    MsgDisp("Kazama","Come on, do your best.");
    MsgDisp("主人公","Yeah......!");
    MsgDisp("主人公","(Alright, ｛風真＊＊｝ I can't let my
performance go bad!I will try my best!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(1,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGOpen("sc725",0);
ScrFadeIn(0);
