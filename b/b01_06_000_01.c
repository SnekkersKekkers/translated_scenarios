BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Oh, he's finally here.");
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C06_INORI_A",0.01);
    MsgClose();
    ChOpen(6,253,0,0,2,#1,#1,0,0);
    VoicePlay("B010600001_06_000");
    MsgDisp("Himuro","That took more time than I thought.");
    MsgDisp("主人公","Did something happen?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B010600001_06_010");
    MsgDisp("Himuro","I wouldn't be late unless there was a
reason.");
    MsgDispSksp(1,0);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B010600001_06_020");
    MsgDisp("Himuro","Well, it wasn't a big deal.
Let's go.");
    MsgDispSksp(0);
    break ;
    case 3:
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C06_INORI_A",0.01);
    MsgClose();
    ChOpen(6,253,0,0,0,#1,#1,0,0);
    VoicePlay("B010600001_06_030");
    MsgDisp("Himuro","Were you waiting?");
    MsgDisp("主人公","No, I didn't wait for that long.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B010600001_06_040");
    MsgDisp("Himuro","Hm, I see.
I'll get here first from now on.");
    MsgDisp("主人公","There's going to be a next time?");
    MsgDispSksp(1,0);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B010600001_06_050");
    MsgDisp("Himuro","That depends on how today goes.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C06_INORI_A",0.01);
    MsgClose();
    ChOpen(6,253,3,0,2,#1,#1,0,0);
    VoicePlay("B010600001_06_060");
    MsgDisp("Himuro","Sorry...");
    MsgDisp("主人公","Did you run here?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B010600001_06_070");
    MsgDisp("Himuro","I didn't want to keep you waiting.
Wasting someone's time is the worst thing
a person can do.");
    MsgDisp("主人公","But isn't it fun to wait a little,
wondering anxiously when the person will
arrive?");
    ChEye(6,0);
    ChMouth(6,2);
    ChMotion(6,5);
    VoicePlay("B010600001_06_080");
    MsgDisp("Himuro","Huh...");
    MsgDispSksp(1,0);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChCheek(6,10);
    VoicePlay("B010600001_06_090");
    MsgDisp("Himuro","...I'm seriously jealous of how carefree
you are.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
