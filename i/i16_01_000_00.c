BGOpen("fp720",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    SEPlay("EV_SE_043");
    SEWait();
    MsgDisp("主人公","Thank you very much!");
    VoicePlay("I160100000_41_000");
    MsgDisp("Male Customer","......Hm?　Did you give me
too much change?");
    MsgDisp("主人公","Ah∈　My apologies.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    SEWait();
    SEPlay("EV_SE_653");
    SEWait();
    Wait(60);
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
    SEWait();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,35,0,2,2,#1,#1,0,0);
    VoicePlay("I160100000_01_000");
    MsgDisp("Kazama","How did you give him more change than what
he paid?");
    MsgDisp("主人公","(I messed up......
I'll stay calm and do better next time.)");
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_043");
    SEWait();
    MsgDisp("主人公","Thank you very much!");
    VoicePlay("I160100000_41_010");
    MsgDisp("Male Customer","Huh...... I asked for a ribbon on this
gift, didn't I?");
    MsgDisp("主人公","Ah∈　My apologies.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
    SEWait();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,35,0,0,3,#1,#1,0,0);
    VoicePlay("I160100000_01_010");
    MsgDisp("Kazama","Our sincerest apologies.
Please wait a while here.");
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("I160100000_01_020");
    MsgDisp("Kazama","I'll pack this up for you, so take care of
the next customer.");
    MsgDisp("主人公","(I messed up......
Let's stay calm and continue.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
