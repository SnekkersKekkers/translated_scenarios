MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
BGOpen("ex020",0);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("S120500002_05_000");
    MsgDisp("Hiiragi","Thanks for today.");
    MsgDisp("主人公","No, thank you.
Is this your last shrine visit as a
high schooler?");
    ChEye(5,4);
    ChMouth(5,0);
    ChMotion(5,4);
    VoicePlay("S120500002_05_010");
    MsgDisp("Hiiragi","I really hope it is.");
    MsgDisp("主人公","Huh?");
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,2);
    VoicePlay("S120500002_05_020");
    MsgDisp("Hiiragi","No, it's just that, for me,
graduating isn't such a nice thing.");
    ChEye(5,0);
    ChMotion(5,0);
    VoicePlay("S120500002_05_030");
    MsgDisp("Hiiragi","My New Years mood is ruined because
of you.
Cya.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(5);
    MsgDisp("主人公","(｛柊＊＊＊｝ is studying and
working hard......
I have to try hard too.)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 3:
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    ChLayout(1);
    ScrFadeIn(0);
    ChEye(5,4);
    VoicePlay("S120500002_05_040");
    MsgDisp("Hiiragi","The Gods are taking in all the
wishes of Habataki's residents, I guess
it's hard for them this time of year
as well.");
    MsgDisp("主人公","Yeah. There were so many people
this year, too.");
    ChEye(5,0);
    ChMotion(5,4);
    VoicePlay("S120500002_05_050");
    MsgDisp("Hiiragi","I actually prayed for something
extra this year too.");
    MsgDisp("主人公","Something extra?");
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("S120500002_05_060");
    MsgDisp("Hiiragi","Yeah.
I prayed to graduate properly with you.");
    MsgDisp("主人公","Hehe.");
    ChEye(5,0);
    VoicePlay("S120500002_05_070");
    MsgDisp("Hiiragi","Okay, let's head back.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    SEWait();
    break ;
    case 4:
    case 5:
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    ChLayout(1);
    ScrFadeIn(0);
    ChEye(5,4);
    VoicePlay("S120500002_05_120");
    MsgDisp("Hiiragi","The shrine was really crowded this
year. Its sad to think that this is
the last year.");
    MsgDisp("主人公","Eh?");
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("S120500002_05_130");
    MsgDisp("Hiiragi","Ah, I guess it's not the last one.
But our last one as students.");
    MsgDisp("主人公","Yeah, I guess that's true if
we graduate properly.");
    ChEye(5,3);
    ChMouth(5,2);
    ChMotion(5,0);
    VoicePlay("S120500002_05_140");
    MsgDisp("Hiiragi","......I see.
Is that how you think about it?");
    MsgDisp("主人公","Eh? I don't mean it like that......");
    ChEye(5,4);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("S120500002_05_150");
    MsgDisp("Hiiragi","No, that's not a bad thing.
You're like this too.");
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("S120500002_05_160");
    MsgDisp("Hiiragi","I have a new goal this year.
I want to discover an unknown side of
you.");
    MsgDisp("主人公","Uhm......");
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
