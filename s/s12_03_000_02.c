MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(3,#1);
ChMouthOpenLevel(3,#1);
ChCheek(3,0);
BGOpen("ex020",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChSet(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("S120300002_03_000");
    MsgDisp("Honda","A shrine visit with you was a 
great way to start the New Year!");
    MsgDisp("主人公","Hehe, same for me.
It was fun visiting with
｛本多＊＊｝.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("S120300002_03_010");
    MsgDisp("Honda","Right. That means we both are
off to a great start this year.
Happy New Years!");
    MsgDisp("主人公","Yeah, let's have fun this year.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("S120300002_03_020");
    MsgDisp("Honda","Leave that to me.
Cya later then!");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    MsgClose();
    ChClose(3);
    Wait(30);
    MsgDisp("主人公","(I hope this year is another
good year......)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 3:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("S120300002_03_030");
    MsgDisp("Honda","It's been a great start to the
New Year, thanks to you.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("S120300002_03_040");
    MsgDisp("Honda","I thought it would take a while
because of the crowd, but because of you,
time passed so quickly.");
    MsgDisp("主人公","Right?
Thanks to ｛本多＊＊｝,
I also had a fun time.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("S120300002_03_050");
    MsgDisp("Honda","Then, let's clock in some overtime!
I'll take you home.
Next year, we'll come back here, right?");
    MsgDisp("主人公","Yeah!");
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    SEWait();
    break ;
    case 4:
    case 5:
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("S120300002_03_060");
    MsgDisp("Honda","We were able to safely say our
prayers.
I guess now it's the end of this year's
shrine visit.");
    MsgDisp("主人公","｛本多＊＊｝, you were praying very
earnestly, weren't you?");
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,4,1);
    VoicePlay("S120300002_03_070");
    MsgDisp("Honda","You were watching?");
    MsgDisp("主人公","That's because we were holding
hands for a while......");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("S120300002_03_080");
    MsgDisp("Honda","Haha, this story is getting too
long. Let me take you home.");
    MsgDisp("主人公","Hehe, okay.");
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
ChEyeOpenLevel(3,#1);
ChCheek(3,0);
