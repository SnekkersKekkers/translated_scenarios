ChLayout(1);
ChNanaType(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","(What should I do about my partner...)");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChNanaType(0);
    ChOpen(4,30,0,0,0,#1,#1,0,0,0,60);
    VoicePlay("O030401000_04_000");
    MsgDisp("Nanatsumori","...Ah.");
    MsgDisp("主人公","Oh.
｛七ツ森＊｝!");
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,2,1);
    VoicePlay("O030401000_04_010");
    MsgDisp("Nanatsumori","My stomach is about to start hurting, so I
can't go in the three-legged race with
you.");
    MsgDisp("主人公","Don't run!
Let's pair up.");
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("O030401000_04_020");
    MsgDisp("Nanatsumori","Huh...
Seriously...");
    break ;
    case 3:
    MsgDisp("主人公","(What should I do about my partner...)");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChNanaType(0);
    ChOpen(4,30,0,2,1,#1,#1,0,0,0,60);
    VoicePlay("O030401000_04_030");
    MsgDisp("Nanatsumori","...Ugh.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝!
Do you want to be in the three-legged race
with me?");
    ChEye(4,2);
    ChMouth(4,4);
    VoicePlay("O030401000_04_040");
    MsgDisp("Nanatsumori","Don't say that with your eyes sparkling
like that.
Me and exercise are...");
    MsgDisp("主人公","Please!");
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,2,1);
    VoicePlay("O030401000_04_050");
    MsgDisp("Nanatsumori","Ugh... don't look at me with those
eyes.");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(What should I do about my partner...)");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChNanaType(0);
    ChOpen(4,30,0,0,0,#1,#1,0,0,0,60);
    VoicePlay("O030401000_04_060");
    MsgDisp("Nanatsumori","...Ah.");
    MsgDisp("主人公","Oh, ｛七ツ森＊｝!
Do you want to-");
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,1,1);
    VoicePlay("O030401000_04_070");
    MsgDisp("Nanatsumori","You haven't found a partner yet?");
    MsgDisp("主人公","Yeah, I haven't.");
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("O030401000_04_080");
    MsgDisp("Nanatsumori","Good...");
    MsgDisp("主人公","Hm?");
    ChEye(4,0);
    ChMouth(4,3);
    VoicePlay("O030401000_04_090");
    MsgDisp("Nanatsumori","Nothing.
Do you want to pair up with me?");
    MsgDisp("主人公","Yeah!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
