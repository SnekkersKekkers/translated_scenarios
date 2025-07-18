BGOpen("ar100",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    SEPlay("EV_SE_DOOR_014");
    Wait(30,0);
    MsgDisp("主人公","Welcome!");
    MsgClose();
    BGMPlay("BGM_C05_HIIRAGI_B",0.01);
    ChOpen(5,255,0,0,4,#1,#1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("I350500000_05_000");
    MsgDisp("Hiiragi","｛主人公｝, are you working
part-time?");
    MsgDisp("主人公","Yes, that's right.
｛柊＊＊＊｝, are you alone?");
    ChMotion(5,4);
    VoicePlay("I350500000_05_010");
    MsgDisp("Hiiragi","No, I believe that someone arrived
earlier...
A support staff of the theater troupe.");
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("I350500000_05_020");
    MsgDisp("Hiiragi","If I may look for them.");
    MsgDisp("主人公","Ah, yes.
Go ahead.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","(｛柊＊＊＊｝ feels different from how he
is at school...He is the chairman of the
theater troupe, huh.)");
    break ;
    case 3:
    MsgDisp("主人公","Alright, let's do our best today, too.");
    MsgClose();
    SEPlay("EV_SE_544");
    ChOpen(5,255,0,0,4,#1,#1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("I350500000_05_030");
    MsgDisp("Hiiragi","｛主人公｝, if I may have a moment
of your time.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝, you came.");
    VoicePlay("I350500000_05_040");
    MsgDisp("Hiiragi","Yes, we come here for meetings.");
    MsgDisp("主人公","You're busy as always.");
    ChMotion(5,4);
    VoicePlay("I350500000_05_050");
    MsgDisp("Hiiragi","I am thankful for it.
It means that the theatre troupe is doing
well.");
    ChMotion(5,0);
    VoicePlay("I350500000_05_060");
    MsgDisp("Hiiragi","Ah, and another thing.
The meetings we have here always end up
going well.");
    MsgDisp("主人公","Hm?
Really?");
    ChEye(5,4);
    VoicePlay("I350500000_05_070");
    MsgDisp("Hiiragi","Yes.
Perhaps it's due to the smell of coffee,
and your smile?");
    VoicePlay("I350500000_43_000");
    MsgDisp("Theater Member","Chairman?");
    ChEye(5,0);
    ChMotion(5,4);
    VoicePlay("I350500000_05_080");
    MsgDisp("Hiiragi","I must go.
Well, thank you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    SEPlay("EV_SE_DOOR_014");
    MsgDisp("主人公","(I'm glad to be of help to
｛柊＊＊＊｝...
Let's do our best smiling!)");
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_DOOR_014");
    Wait(30,0);
    MsgDisp("主人公","Welcome.");
    MsgClose();
    BGMPlay("BGM_C05_HIIRAGI_B",0.01);
    ChOpen(5,255,0,0,4,#1,#1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("I350500000_05_090");
    MsgDisp("Hiiragi","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝, welcome.");
    ChEye(5,4);
    VoicePlay("I350500000_05_100");
    MsgDisp("Hiiragi","Good evening.
May I order two cups of coffee for
delivery?");
    MsgDisp("主人公","Yes, understood.");
    ChEye(5,0);
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    SEPlay("EV_SE_043");
    Wait(60,0);
    MsgDisp("主人公","Then, please write down the delivery
address.");
    ChMotion(5,4);
    VoicePlay("I350500000_05_110");
    MsgDisp("Hiiragi","No need, I will show you there myself.");
    MsgDisp("主人公","Hm?");
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("I350500000_05_120");
    MsgDisp("Hiiragi","I will deliver it with you.
Let us go.");
    MsgDisp("主人公","Huh∋");
    MsgDisp("主人公","(Wouldn't it have been easier to get
takeout...??)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
SEStop("EV_SE_DOOR_014",1);
BGMStop();
MsgClose();
ScrFadeOut(0,0);
