BGMStop();
BGOpen("sc710",0);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    VoicePlay("P830400002_41_000");
    MsgDisp("Male Student","Crap, I have to hurry!");
    SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
    SEWait();
    MsgDisp("主人公","Please don't run in the corridorsー!");
    VoicePlay("P830400002_04_000");
    MsgDisp("Nanatsumori?","Yeーs.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChLayout(1);
    ChNanaType(0);
    ChOpen(4,254,0,0,0,#1,#1,0,0,0,60);
    MsgDisp("主人公","Eh?
Ah, I didn't say that to ｛七ツ森＊｝?");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("P830400002_04_010");
    MsgDisp("Nanatsumori","I know.
Management seems tough.");
    MsgDisp("主人公","Yeah, I want to make this festival fun for
everyone, so I have to do this carefully!");
    ChEye(4,5);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("P830400002_04_020");
    MsgDisp("Nanatsumori","Oh... As expected of the
student council committee.");
    break ;
    case 4:
    case 5:
    VoicePlay("P830400002_41_010");
    MsgDisp("Male Student","Hurry!
Next up is the bunny cafe!");
    SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
    SEWait();
    MsgDisp("主人公","Please don't run in the corridorsー!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChLayout(1);
    ChNanaType(0);
    ChOpen(4,254,0,0,3,#1,#1,0,0,0,60);
    VoicePlay("P830400002_04_030");
    MsgDisp("Nanatsumori","They're doing it, they're doing it.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝..");
    ChMotion(4,1,1);
    VoicePlay("P830400002_04_040");
    MsgDisp("Nanatsumori","Good work on your student council patrol.
Seems hard doing it by yourself.");
    MsgDisp("主人公","Hehe, well yeah?
But today is  a festival, 
so it can't be helped.");
    ChMotion(4,0,1);
    VoicePlay("P830400002_04_050");
    MsgDisp("Nanatsumori","I guess. I'm also feeling unusually
festive, you know?");
    MsgDisp("主人公","Is that right?");
    ChEye(4,3);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("P830400002_04_060");
    MsgDisp("Nanatsumori","Yeah. Once your work comes to a stop, 
I thought we could go take a look around
the cultural festival together.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(4);
