BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(｛本多＊＊｝ isn't here yet...)");
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C03_HONDA_A",0.01);
    MsgClose();
    ChOpen(3,253,1,4,4,#1,#1,0,0);
    VoicePlay("B010300001_03_000");
    MsgDisp("Honda","Sorry, I found an interesting road on the
way here.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0);
    VoicePlay("B010300001_03_010");
    MsgDisp("Honda","I thought it was going to be a shortcut,
but it ended up being a detour.");
    MsgDisp("主人公","Be more careful next time.");
    MsgDispSksp(1,0);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("B010300001_03_020");
    MsgDisp("Honda","I will.
Alright, let's go!");
    MsgDispSksp(0);
    break ;
    case 3:
    SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C03_HONDA_A",0.01);
    MsgClose();
    ChOpen(3,253,0,0,0,#1,#1,0,0);
    VoicePlay("B010300001_03_030");
    MsgDisp("Honda","Isn't it a common excuse to be late
because you helped an old lady on the way
there?");
    MsgDisp("主人公","Did you help out an old lady?");
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,2);
    VoicePlay("B010300001_03_040");
    MsgDisp("Honda","Nope.
I was just talking with an old lady about
the old days in Habataki City.");
    MsgDisp("主人公","Hehe, I guess that's just the way it is.");
    MsgDispSksp(1,0);
    ChEye(3,3);
    ChMouth(3,0);
    ChMotion(3,0);
    ChEyeOpenLevel(3,0);
    VoicePlay("B010300001_03_050");
    MsgDisp("Honda","Sorry, but thanks for understanding!");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C03_HONDA_A",0.01);
    MsgClose();
    ChOpen(3,253,1,2,4,#1,#1,0,0);
    VoicePlay("B010300001_03_060");
    MsgDisp("Honda","Sorry.
I knew I was keeping you waiting...");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,2);
    VoicePlay("B010300001_03_070");
    MsgDisp("Honda","Some kids grabbed me and started asking
questions.");
    MsgDisp("主人公","Really...?");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0);
    VoicePlay("B010300001_03_080");
    MsgDisp("Honda","...Well, just one question.
But it took me a while to answer.");
    MsgDisp("主人公","Hehe, just be honest from the start.");
    MsgDispSksp(1,0);
    ChSet(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("B010300001_03_090");
    MsgDisp("Honda","You got it!");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
