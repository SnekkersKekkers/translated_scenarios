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
    ChMotion(4,1);
    VoicePlay("S120400002_04_000");
    MsgDisp("Nanatsumori","The shrine visit is over.
Thanks for coming with me.");
    MsgDisp("主人公","Yeah.
Happy New Year!");
    ChMotion(4,0,1);
    VoicePlay("S120400002_04_010");
    MsgDisp("Nanatsumori","Happy New Year.
Cya.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    MsgClose();
    ChClose(4,0,30);
    Wait(30);
    MsgDisp("主人公","(I hope this year is another good
year......)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 3:
    ChEye(4,2);
    ChMouth(4,0);
    ChMotion(4,1);
    VoicePlay("S120400002_04_020");
    MsgDisp("Nanatsumori","Phew. We finally got out of that crowd of
people.");
    MsgDisp("主人公","Hehe!
Are you tired?");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("S120400002_04_030");
    MsgDisp("Nanatsumori","Not at all.
It's fun spending New Year's with you.");
    ChEye(4,0);
    ChMouth(4,3);
    VoicePlay("S120400002_04_040");
    MsgDisp("Nanatsumori","I had a good time.
Let's get you home.");
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
    VoicePlay("S120400002_04_050");
    MsgDisp("Nanatsumori","It's the end of our shrine visit......");
    MsgDisp("主人公","Yeah.
We finished praying.");
    ChEye(4,2);
    ChMouth(4,1);
    ChMotion(4,2,1);
    VoicePlay("S120400002_04_060");
    MsgDisp("Nanatsumori","It's a waste to just go home already, it's
not enough-");
    MsgDisp("主人公","Not enough?");
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,1,1);
    VoicePlay("S120400002_04_070");
    MsgDisp("Nanatsumori","Yeah, maybe it's just me.
I was finally brave enough to go out in
the freezing cold.");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("S120400002_04_080");
    MsgDisp("Nanatsumori","......But, I don't want to drag you around
anymore.");
    MsgDisp("主人公","｛七ツ森＊｝......");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("S120400002_04_090");
    MsgDisp("Nanatsumori","At least let me take you home.");
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
