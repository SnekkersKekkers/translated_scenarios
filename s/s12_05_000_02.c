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
    VoicePlay("S120500001_05_000");
    MsgDisp("Hiiragi","All of our enthusiasm blew away the cold.");
    MsgDisp("主人公","Yep.
You were really fun today, thanks for
bringing me.");
    VoicePlay("S120500001_05_010");
    MsgDisp("Hiiragi","Yeah.
Bye then.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(5);
    MsgDisp("主人公","(Another New Year.
I hope we have a good year...)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 3:
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,4);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("S120500001_05_020");
    MsgDisp("Hiiragi","That was exciting.");
    MsgDisp("主人公","Hehe, you're right!");
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("S120500001_05_030");
    MsgDisp("Hiiragi","Anyway, it's good that we were able to
visit this year.
Thanks for your hard work.");
    ChEye(5,0);
    VoicePlay("S120500001_05_040");
    MsgDisp("Hiiragi","Okay, let's go home.
I'll take you.");
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
    VoicePlay("S120500001_05_070");
    MsgDisp("Hiiragi","It's crowded and there's a lot of people,
but because everyone's here to pray, it
was refreshing.");
    MsgDisp("主人公","Yeah, you're right.
I was also able to make a good wish.
What about ｛柊＊＊＊｝?");
    ChEye(5,4);
    ChMotion(5,2);
    VoicePlay("S120500001_05_080");
    MsgDisp("Hiiragi","Me as well. Although...I may have
gotten a bit distracted while doing so.");
    MsgDisp("主人公","Eh?
Distracted?");
    ChMotion(5,4);
    VoicePlay("S120500001_05_090");
    MsgDisp("Hiiragi","When I put my hands together, instead of
praying for the success of the theater, I
started thinking about you.");
    ChEye(5,0);
    ChMotion(5,0);
    VoicePlay("S120500001_05_100");
    MsgDisp("Hiiragi","Well, I guess it's good for both you and
the theater to be well.
So there's no problem right?");
    MsgDisp("主人公","Uhm...yeah.");
    ChEye(5,4);
    VoicePlay("S120500001_05_110");
    MsgDisp("Hiiragi","Alright, let's go.");
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
