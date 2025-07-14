switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","｛風真＊＊｝, good morning.");
    MsgClose();
    SEPlay("EV_SE_544");
    ChOpen(1,254,0,0,0,8,#1,0,0);
    VoicePlay("Q040100000_01_000");
    MsgDisp("Kazama","Good morning.
Well, aren't you in high spirits today?");
    MsgDisp("主人公","Come on, I'm doing normal.
How about we go around together for
today's free period?");
    break ;
    case 3:
    MsgDisp("主人公","(Where is ｛風真＊＊｝......
Ah, there.)");
    MsgDisp("主人公","｛風真＊＊｝!");
    MsgClose();
    SEPlay("EV_SE_544");
    ChOpen(1,254,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(1);
    VoicePlay("Q040100000_01_010");
    MsgDisp("Kazama","｛主人公｝. Good morning.");
    MsgDisp("主人公","Good morning.
So, how about we go around together for
today's free period?");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(Where is ｛風真＊＊｝...... )");
    VoiceEVSPlay(1);
    VoicePlay("Q040100000_01_020");
    MsgDisp("Kazama?","｛主人公｝.");
    MsgClose();
    SEPlay("EV_SE_544");
    ChOpen(1,254,0,0,0,#1,#1,0,0);
    MsgDisp("主人公","......Ah, ｛風真＊＊｝!");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("Q040100000_01_030");
    MsgDisp("Kazama","I found you first.");
    MsgDisp("主人公","I'm pretty sure our eyes made contact at
the same time though.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,1);
    VoicePlay("Q040100000_01_040");
    MsgDisp("Kazama","Nope, I was a millisecond faster in
spotting you first.");
    MsgDisp("主人公","Come on......
For today's free period, can we go
together?");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("Q040100000_01_050");
    MsgDisp("Kazama","Ah......
This time, You beat me to it.");
    MsgDisp("主人公","Hehe, yay!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
