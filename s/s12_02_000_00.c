MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(2,#1);
ChMouthOpenLevel(2,#1);
ChCheek(2,0);
BGOpen("ex020",0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    ChLayout(1);
    ScrFadeIn(0);
    VoiceEVSPlay(2);
    VoicePlay("S120200000_02_000");
    MsgDisp("Sassa","｛主人公｝, it's been a great start to the
New Year.
Thank you.");
    MsgDisp("主人公","I feel the same way.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("S120200000_02_010");
    MsgDisp("Sassa","Let's do our best this year too.
Happy New Years.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(2);
    MsgDisp("主人公","(It was a fun shrine visit.
I hope this year is a good year...)");
    break ;
    case 3:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("S120200000_02_020");
    MsgDisp("Sassa","Phew, it was a safe trip.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("S120200000_02_030");
    MsgDisp("Sassa","Are you not tired?
We've been walking a lot.");
    MsgDisp("主人公","No, it's fine.");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("S120200000_02_040");
    MsgDisp("Sassa","That's a relief.
I'll walk you home today.
Let's go.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
    break ;
    case 4:
    case 5:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("S120200000_02_050");
    MsgDisp("Sassa","Visiting the shrine on New Year's gives
such a refreshing feeling.");
    MsgDisp("主人公","Yeah.
｛颯砂＊＊｝, thanks for coming with me.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("S120200000_02_060");
    MsgDisp("Sassa","Same to you.
The year is off to a great start.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("S120200000_02_070");
    MsgDisp("Sassa","It's still not enough, somehow.
Do you have more time?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    ChCheek(2,10);
    VoicePlay("S120200000_02_080");
    MsgDisp("Sassa","I'll take you home.
Come, let's walk slowly.
We can talk on the way there.");
    MsgDisp("主人公","Hehe, okay.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0);
SEWait();
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,7);
ChCheek(2,0);
