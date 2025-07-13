BGOpen("sc620",0);
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgClose();
    ChOpen(1,254,0,3,3,#1,#1,0,0);
    ScrFadeIn(0);
    ChMotion(1,3);
    VoicePlay("H1A0100000_01_000");
    MsgDisp("Kazama","Wow, you really did it.
I feel kind of impressed.");
    MsgDisp("主人公","Yeah.
It's because everyone did their best!");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H1A0100000_01_010");
    MsgDisp("Kazama","I don't know about that.");
    MsgDisp("主人公","Hm?");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H1A0100000_01_020");
    MsgDisp("Kazama","All I know is that you were
always working hard for everyone.");
    MsgDisp("主人公","Thanks, ｛風真＊＊｝!");
    MsgDisp("主人公","(We won!
I'm glad I did my best for the club!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(1,254,0,4,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H1A0100000_01_030");
    MsgDisp("Kazama","Thank goodness.
Congrats on the win.");
    MsgDisp("主人公","｛風真＊＊｝!
Thank you!");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H1A0100000_01_040");
    MsgDisp("Kazama","A smile befitting a winner.");
    MsgDisp("主人公","Yeah......!
What should I do, I'm so happy......");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT",0,0.9);
    ChClose(1,0,30);
    ChLayout(0);
    MsgClose();
    ChOpen(1,254,0,4,3,#1,#1,0,0,0,30);
    VoicePlay("H1A0100000_01_050");
    MsgDisp("Kazama","Isn't it fine?
You don't have to hold back your tears.");
    MsgDisp("主人公","｛風真＊＊｝......");
    SEPlay("EV_SE_551",0,0.7,0.8);
    MsgClose();
    ScrFadeOut(0,0);
    SEWait();
    BGMPlay("BGM_C01_RYOUTA_B",0.01);
    VoicePlay("H1A0100000_01_060");
    MsgDisp("Kazama","Good for you.");
    MsgDisp("主人公","Yeah.");
    VoicePlay("H1A0100000_01_070");
    MsgDisp("Kazama","It took up a lot of your time,
so I wasn't a huge fan of it, you know?");
    MsgDisp("主人公","Hm?");
    ChClose(1,0,0);
    ChLayout(1);
    MsgClose();
    SEPlay("EV_SE_552",0,0.5);
    Wait(10,1);
    ChOpen(1,254,0,4,3,#1,#1,0,0,0,0);
    ScrFadeIn(0);
    SEWait();
    VoicePlay("H1A0100000_01_080");
    MsgDisp("Kazama","But it's thanks to the baseball
club that I could see your face light
up like this...... so I'll forgive them.");
    MsgDisp("主人公","Hehe, geez.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H1A0100000_01_090");
    MsgDisp("Kazama","Come on, go over to them.
See you.");
    MsgDisp("主人公","(Ooh...... I'm so happy.
I'll always remember today!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
