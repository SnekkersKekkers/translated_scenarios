BGMStop();
BGOpen("sc605",0);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("主人公","Supply management is not that easy...");
    VoicePlay("P830400001_46_000");
    MsgDisp("School Girl","Excuse meー.
We don't have enough flowers for
decoration.");
    MsgDisp("主人公","Flowers?
Please just wait a second.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChLayout(1);
    ChNanaType(0);
    ChOpen(4,254,0,0,0,#1,#1,0,0,0,60);
    ChMotion(4,1,1);
    VoicePlay("P830400001_04_000");
    MsgDisp("Nanatsumori","...Seems difficultー.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝.
Sorry, I'm a bit busy right now...");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("P830400001_04_010");
    MsgDisp("Nanatsumori","Don't mind me.
Do your best with work.
Let me just wait here slowly.");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Supply management is not that easy...");
    VoicePlay("P830400001_46_010");
    MsgDisp("School Girl","Excuse meー.
We don't have enough flowers for
decoration.");
    MsgDisp("主人公","Flowers, right?
Please just wait a second.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChLayout(1);
    ChNanaType(0);
    ChOpen(4,254,0,0,0,#1,#1,0,0,0,60);
    VoicePlay("P830400001_04_020");
    MsgDisp("Nanatsumori","Good work.
Now...");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝.
Sorry, I'm a bit busy right now...");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("P830400001_04_030");
    MsgDisp("Nanatsumori","Looks like it.");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("P830400001_04_040");
    MsgDisp("Nanatsumori","I'll help.
Just watching is kind of...");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(4);
