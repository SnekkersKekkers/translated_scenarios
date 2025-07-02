BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(｛七ツ森＊｝ is late...)");
ChPosition(4,0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C04_NANA_A",0.01);
    MsgClose();
    ChNanaType(-1);
    ChOpen(4,253,0,0,2,-1,-1,0,0,0,60);
    VoicePlay("B010400001_04_000");
    MsgDisp("Nanatsumori","I'm late, right...?");
    MsgDisp("主人公","Yeah. But just a little?");
    MsgDispSksp(1,0);
    ChEye(4,0);
    ChMouth(4,2);
    ChMotion(4,2);
    VoicePlay("B010400001_04_010");
    MsgDisp("Nanatsumori","My bad.");
    MsgDispSksp(0);
    break ;
    case 3:
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C04_NANA_A",0.01);
    MsgClose();
    ChNanaType(-1);
    ChOpen(4,253,0,0,2,-1,-1,0,0,0,60);
    VoicePlay("B010400001_04_020");
    MsgDisp("Nanatsumori","I'm sorry...");
    MsgDisp("主人公","... Pfft!");
    MsgDispSksp(1,0);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3);
    VoicePlay("B010400001_04_030");
    MsgDisp("Nanatsumori","What, are you laughing? Well, if you think
it's funny, that's fine.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C04_NANA_A",0.01);
    MsgClose();
    ChNanaType(-1);
    ChOpen(4,253,3,0,0,-1,-1,0,0,0,30);
    VoicePlay("B010400001_04_040");
    MsgDisp("Nanatsumori","My bad, I left you waiting!");
    MsgDisp("主人公","No, it's okay.
I didn't wait for that long.");
    MsgDispSksp(1,0);
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,0);
    VoicePlay("B010400001_04_050");
    MsgDisp("Nanatsumori","... Isn't it okay to be angry?
Not that I want to make you mad, but...
I'm sorry.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
