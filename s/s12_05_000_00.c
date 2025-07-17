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
    VoicePlay("S120500000_05_000");
    MsgDisp("Hiiragi","Thanks to you, this year is off to a great
start.");
    MsgDisp("主人公","Yeah, same to you!");
    VoicePlay("S120500000_05_010");
    MsgDisp("Hiiragi","I hope you have a good year.
See you later.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(5);
    MsgDisp("主人公","(Another year, huh I hope it's a good
year...)");
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
    VoicePlay("S120500000_05_020");
    MsgDisp("Hiiragi","I feel refreshed, getting to spend the
beginning of the year with you.
It seems this year will be a good year.");
    MsgDisp("主人公","Yep, I was able to make a nice wish.");
    ChEye(5,4);
    ChMotion(5,3);
    VoicePlay("S120500000_05_030");
    MsgDisp("Hiiragi","Yeah.
We don't know if our wishes will come
true, so it's up to us to try our best.");
    MsgDisp("主人公","You're right.
Okay, let's try our best.");
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,4);
    VoicePlay("S120500000_05_040");
    MsgDisp("Hiiragi","With you, I'm sure everything will be
enjoyable.");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("S120500000_05_050");
    MsgDisp("Hiiragi","Well, you must be tired.
Let me take you home.");
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
    ChEye(5,2);
    VoicePlay("S120500000_05_080");
    MsgDisp("Hiiragi","There was a huge turnout.
Are you tired at all?");
    MsgDisp("主人公","I'm fine.
｛柊＊＊＊｝, are you used to so
many people at your performances?");
    ChEye(5,0);
    ChMotion(5,4);
    VoicePlay("S120500000_05_090");
    MsgDisp("Hiiragi","Hm, I wonder. Standing in front of a lot
of people isn't really the same as being
in the middle of a crowd.");
    MsgDisp("主人公","I see.");
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("S120500000_05_100");
    MsgDisp("Hiiragi","Yes, but when you're next to me, waiting
around doesn't seem so bad.
The voices don't seem as loud.");
    MsgDisp("主人公","Voices?");
    ChMotion(5,4);
    VoicePlay("S120500000_05_110");
    MsgDisp("Hiiragi","Yeah, there were a few people who appear
to be regulars of mine. But they seemed to
shy away at the sight of you.");
    MsgDisp("主人公","Eh?");
    ChMotion(5,0);
    VoicePlay("S120500000_05_120");
    MsgDisp("Hiiragi","We look like a couple, I suppose?");
    MsgDisp("主人公","Ehh!");
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
MsgClose();
ScrFadeOut(0,0);
