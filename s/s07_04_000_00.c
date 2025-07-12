BGOpen("ex020",0);
ChLayout(1);
ChNanaType(#1);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    ChEye(4,2);
    ChMouth(4,0);
    ChMotion(4,0);
    ScrFadeIn(0);
    VoicePlay("S070400000_04_000");
    MsgDisp("Nanatsumori","That's a lot of people......");
    MsgDisp("主人公","Yeah......");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("S070400000_04_010");
    MsgDisp("Nanatsumori","Try not to get lost.");
    MsgDisp("主人公","Geez, I won't!");
    break ;
    case 3:
    ChEye(4,2);
    ChMouth(4,0);
    ChMotion(4,0);
    ScrFadeIn(0);
    VoicePlay("S070400000_04_020");
    MsgDisp("Nanatsumori","So many people......");
    MsgDisp("主人公","Yeah.
Including us, right?");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("S070400000_04_030");
    MsgDisp("Nanatsumori","I guess so.
Why do so many people like these 
festivals......");
    MsgDisp("主人公","Hehe!");
    ChEye(4,3);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("S070400000_04_040");
    MsgDisp("Nanatsumori","Haha!");
    break ;
    case 4:
    case 5:
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0);
    ScrFadeIn(0);
    VoicePlay("S070400000_04_050");
    MsgDisp("Nanatsumori","Ah......Right.
Your hand.");
    MsgDisp("主人公","Eh?");
    VoicePlay("S070400000_04_060");
    MsgDisp("Nanatsumori","Let's hold hands.");
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,2,1);
    VoicePlay("S070400000_04_070");
    MsgDisp("Nanatsumori","I mean, look. Most pairs are
holding hands, right?");
    MsgDisp("主人公","Y-Yeah.
Sure......");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
    ChClose(4,0,30);
    ChLayout(0);
    ChNanaType(#1);
    ChOpen(4,253,0,3,3,#1,#1,0,0,0,60);
    SEWait();
    SEPlay("EV_SE_504");
    SEWait();
    VoicePlay("S070400000_04_080");
    MsgDisp("Nanatsumori","ＯＫ. This way we don't get
any notices for lost children.");
    MsgDisp("主人公","Hehe!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
