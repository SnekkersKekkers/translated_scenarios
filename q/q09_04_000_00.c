BGOpen("sc810",0);
ChLayout(1);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","(｛七ツ森＊｝ is...... Ah, there!)");
    MsgDisp("主人公","Good morning, ｛七ツ森＊｝ .");
    MsgClose();
    SEPlay("EV_SE_544");
    ChNanaType(0);
    ChOpen(4,254,0,0,0,-1,-1,0,0,0,60);
    VoicePlay("Q090400000_04_000");
    MsgDisp("Nanatsumori","Yo.");
    MsgDisp("主人公","Are you ready to go?");
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("Q090400000_04_010");
    MsgDisp("Nanatsumori","Yeah, let's go.");
    break ;
    case 3:
    MsgClose();
    SEPlay("EV_SE_544");
    ChNanaType(0);
    ChOpen(4,254,0,0,0,-1,-1,0,0,0,60);
    VoicePlay("Q090400000_04_020");
    MsgDisp("Nanatsumori","Yo.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝ .
Good morning!");
    ChEye(4,2);
    ChMouth(4,3);
    VoicePlay("Q090400000_04_030");
    MsgDisp("Nanatsumori","Good morning.
Are we leaving already?");
    MsgDisp("主人公","Yeah!");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("Q090400000_04_040");
    MsgDisp("Nanatsumori","ＯＫ.");
    break ;
    case 4:
    case 5:
    MsgClose();
    SEPlay("EV_SE_544");
    ChNanaType(0);
    ChOpen(4,254,0,4,4,-1,-1,0,0,0,60);
    ChMotion(4,2,1);
    VoicePlay("Q090400000_04_050");
    MsgDisp("Nanatsumori","Mornin..");
    MsgDisp("主人公","｛七ツ森＊｝ , Good morning!
...... Are you sleepy?");
    ChMotion(4,0,1);
    VoicePlay("Q090400000_04_060");
    MsgDisp("Nanatsumori","I couldn't sleep.");
    MsgDisp("主人公","Eeeh∋
Are you ok?");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("Q090400000_04_070");
    MsgDisp("Nanatsumori","Np.
I'm such a kid, not able to 
sleep out of excitement.");
    MsgDisp("主人公","Hehe!
Lets's have fun today!");
    ChEye(4,1);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("Q090400000_04_080");
    MsgDisp("Nanatsumori","Course.
Let's go.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
