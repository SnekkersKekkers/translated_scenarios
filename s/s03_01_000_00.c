SEPlay("EV_SE_663");
SEWait();
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("S030100000_01_000");
    MsgDisp("Kazama","Happy New Year.");
    MsgDisp("主人公","｛風真＊＊｝, Happy New Years!");
    VoicePlay("S030100000_01_010");
    MsgDisp("Kazama","You're doing well this year too.");
    MsgDisp("主人公","Hehe, yep.
Are you going to visit the shrine?");
    break ;
    case 3:
    VoicePlay("S030100000_01_020");
    MsgDisp("Kazama","Happy New Year.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝, Happy New
Year.
Please treat me well this year too.");
    VoicePlay("S030100000_01_030");
    MsgDisp("Kazama","Same to you.");
    MsgDisp("主人公","Hehe.
Oh, right, why don't you go visit the
shrine now?");
    break ;
    case 4:
    case 5:
    VoicePlay("S030100000_01_040");
    MsgDisp("Kazama","What's up?");
    MsgDisp("主人公","Happy New Year.");
    VoicePlay("S030100000_01_050");
    MsgDisp("Kazama","Happy New Year.");
    MsgDisp("主人公","Treat me well again this year.
Well then, are you going to the shrine?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
