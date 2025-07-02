BGOpen("sc810",0);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","(Er,
｛風真＊＊｝ is...... Ah, there!)");
    MsgDisp("主人公","Good morning, ｛風真＊＊｝ !");
    MsgClose();
    SEPlay("EV_SE_544");
    ChOpen(1,254,0,0,0,-1,-1,0,0);
    VoicePlay("Q090100000_01_000");
    MsgDisp("Kazama","Good morning.
You're looking good today.");
    MsgDisp("主人公","Yeah.
It's our last free time.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("Q090100000_01_010");
    MsgDisp("Kazama","Yeah, let's enjoy it till the end.");
    break ;
    case 3:
    MsgDisp("主人公","(Er,
｛風真＊＊｝ is...... Ah, there!)");
    MsgDisp("主人公","Good morning!
｛風真＊＊｝ .");
    MsgClose();
    SEPlay("EV_SE_544");
    ChOpen(1,254,0,4,3,-1,-1,0,0);
    VoicePlay("Q090100000_01_020");
    MsgDisp("Kazama","Good morning.
You're in high spirits today.");
    MsgDisp("主人公","Hehe, of course!");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("Q090100000_01_030");
    MsgDisp("Kazama","ＯＫ!
Let's go then.");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(Er,
｛風真＊＊｝ is......)");
    VoiceEVSPlay(1);
    VoicePlay("Q090100000_01_040");
    MsgDisp("Kazama?","｛主人公｝ , Good morning.");
    MsgClose();
    SEPlay("EV_SE_544");
    ChOpen(1,254,0,0,0,-1,-1,0,0);
    MsgDisp("主人公","Ah, ｛風真＊＊｝ !
Good morning.
You're here already?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoicePlay("Q090100000_01_050");
    MsgDisp("Kazama","It's a shame I can't keep watching you
lureing around.");
    MsgDisp("主人公","Hey now!");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("Q090100000_01_060");
    MsgDisp("Kazama","My bad.
But in the end, I couldn't wait anymore,
So I called out to you right away.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("Q090100000_01_070");
    MsgDisp("Kazama","Come on, let's get going.
Let's have fun, okay?");
    MsgDisp("主人公","Yeah, let's go!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
