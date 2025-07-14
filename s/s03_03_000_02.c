switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("S030300002_03_000");
    MsgDisp("Honda","I have to clean the fish tank
today.");
    MsgDisp("主人公","I see......");
    VoicePlay("S030300002_03_010");
    MsgDisp("Honda","My mom and sister won't give me Osechi if
I don't finish it today.
They say....Sorry.");
    MsgDisp("主人公","No problem.
Good luck with the cleaning.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(It can't be helped......
I'll just go alone.)");
    break ;
    case 3:
    VoicePlay("S030300002_03_020");
    MsgDisp("Honda","Right now is kinda...");
    VoicePlay("S030300002_03_030");
    MsgDisp("Honda","I have plans with my family.");
    MsgDisp("主人公","I see.
I guess we can't then.");
    VoicePlay("S030300002_03_040");
    MsgDisp("Honda","Yeah, I guess not. I can't take you with
me either...... Sorry.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(It can't be helped......
I'll just go alone.)");
    break ;
    case 4:
    case 5:
    VoicePlay("S030300002_03_050");
    MsgDisp("Honda","I want to go with you too,
but I can't.");
    VoicePlay("S030300002_03_060");
    MsgDisp("Honda","I'm going out with my family.");
    MsgDisp("主人公","No problem, it's fine.
Be safe.");
    VoicePlay("S030300002_03_070");
    MsgDisp("Honda","I will.
I'm really sorry.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Yeah, that's unfortunate...
I'll just go alone......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
