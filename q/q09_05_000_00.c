BGOpen("sc810",0);
ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    SEPlay("EV_SE_544");
    ChOpen(5,254,0,0,4,#1,#1,0,0);
    MsgDisp("主人公","Good morning, ｛柊＊＊＊｝.");
    VoicePlay("Q090500000_05_000");
    MsgDisp("Hiiragi","Good morning.
Let's go.");
    MsgDisp("主人公","Yes!");
    break ;
    case 3:
    MsgClose();
    SEPlay("EV_SE_544");
    ChOpen(5,254,0,0,4,#1,#1,0,0);
    MsgDisp("主人公","Good morning, ｛柊＊＊＊｝.
Early, aren't you?");
    ChMotion(5,4);
    VoicePlay("Q090500000_05_010");
    MsgDisp("Hiiragi","Good morning.
I could not sleep out of excitement.");
    MsgDisp("主人公","You look like a child before a field trip,
don't you?");
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("Q090500000_05_020");
    MsgDisp("Hiiragi","Oh, that analogy, that was my dream. I
didn't have any real experience with it,
but...... I see it now.");
    MsgDisp("主人公","Hehe.
Well, let's go!");
    break ;
    case 4:
    case 5:
    MsgClose();
    SEPlay("EV_SE_544");
    ChOpen(5,254,0,0,4,#1,#1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("Q090500000_05_030");
    MsgDisp("Hiiragi","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝. Sorry, did I keep you
waiting?");
    VoicePlay("Q090500000_05_040");
    MsgDisp("Hiiragi","I waited, but waiting for excitement
doesn't feel bad at all.");
    MsgDisp("主人公","So I should have come later?");
    ChEye(5,4);
    ChMotion(5,4);
    VoicePlay("Q090500000_05_050");
    MsgDisp("Hiiragi","Hey, don't be so mean.");
    ChEyeOpenLevel(5,0);
    VoicePlay("Q090500000_05_060");
    MsgDisp("Hiiragi","But the anticipation and joy when I saw
you, I wouldn't mind having a taste of it
again.");
    ChEye(5,0);
    ChMotion(5,0);
    VoicePlay("Q090500000_05_070");
    MsgDisp("Hiiragi","From the scene of the appearance, start
over.");
    MsgDisp("主人公","Eeh∋");
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("Q090500000_05_080");
    MsgDisp("Hiiragi","Haha! You said mean things, so I'm getting
back at you.");
    MsgDisp("主人公","Come on......
Ah, look, Shall we go?");
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("Q090500000_05_090");
    MsgDisp("Hiiragi","Yes.
Let's go.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0,0);
SEWait();
