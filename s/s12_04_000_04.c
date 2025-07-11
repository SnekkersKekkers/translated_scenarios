MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(4,-1);
ChMouthOpenLevel(4,-1);
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
    VoicePlay("S120400004_04_000");
    MsgDisp("Nanatsumori","It's our last New Year's visit
as high schoolers, huh?");
    MsgDisp("主人公","Time passed by so quickly.");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("S120400004_04_010");
    MsgDisp("Nanatsumori","Right.
There isn't much of it left, but I'm
looking forward to the rest of it.");
    MsgDisp("主人公","Treat me well.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    MsgClose();
    ChClose(4,0,30);
    Wait(30);
    MsgDisp("主人公","(Our last year of high school.
Let's spend our time without regrets!)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 3:
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0);
    VoicePlay("S120400004_04_020");
    MsgDisp("Nanatsumori","Our last New Year's visit of
our high school days......");
    MsgDisp("主人公","You're right......");
    ChMotion(4,1,1);
    VoicePlay("S120400004_04_030");
    MsgDisp("Nanatsumori","We're graduating from
Habataki High School soon too.");
    MsgDisp("主人公","Yep.
Three years passed in the blink of an
eye.");
    ChMotion(4,0,1);
    ChEyeOpenLevel(4,0);
    VoicePlay("S120400004_04_040");
    MsgDisp("Nanatsumori","Yeah......");
    ChMouth(4,3);
    ChMotion(4,0,1);
    ChEyeOpenLevel(4,-1);
    VoicePlay("S120400004_04_050");
    MsgDisp("Nanatsumori","I'll take you home.
If we dwell on it too long, we'll just
make ourselves sad.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    SEWait();
    break ;
    case 4:
    case 5:
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,1);
    VoicePlay("S120400004_04_060");
    MsgDisp("Nanatsumori","Haa......");
    MsgDisp("主人公","｛七ツ森＊｝, already sighing
in the New Year?");
    ChEye(4,4);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("S120400004_04_070");
    MsgDisp("Nanatsumori","That's not it.
I guess I can feel the......weight of the
three years.");
    MsgDisp("主人公","???");
    VoicePlay("S120400004_04_080");
    MsgDisp("Nanatsumori","We'll be graduating in two months.");
    MsgDisp("主人公","Yeah.");
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("S120400004_04_090");
    MsgDisp("Nanatsumori","So many things happened.
The memories are suddenly all coming
back.");
    MsgDisp("主人公","Memories, huh......");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("S120400004_04_100");
    MsgDisp("Nanatsumori","Aah.
We can reminisce as I walk you home.");
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
