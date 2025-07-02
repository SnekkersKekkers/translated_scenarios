switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    SEPlay("EV_SE_663");
    SEWait();
    VoicePlay("S030400000_04_000");
    MsgDisp("Nanatsumori","Yes?");
    MsgDisp("主人公","Hello, ｛七ツ森＊｝?
Happy New Year!");
    VoicePlay("S030400000_04_010");
    MsgDisp("Nanatsumori","Happy New Year.");
    MsgDisp("主人公","Want to visit the shrine together?");
    break ;
    case 3:
    SEPlay("EV_SE_663");
    SEWait();
    VoicePlay("S030400000_04_020");
    MsgDisp("Nanatsumori","Hello?");
    MsgDisp("主人公","Hello, ｛七ツ森＊｝?
Happy New Year!");
    VoicePlay("S030400000_04_030");
    MsgDisp("Nanatsumori","Yeah, Happy New Year.");
    MsgDisp("主人公","Hey, do you want to visit the
shrine together?");
    VoicePlay("S030400000_04_040");
    MsgDisp("Nanatsumori","Eh?
But it's so cold outside.");
    MsgDisp("主人公","I'm a child of the wind!
I'll be totally fine!");
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_663");
    SEWait();
    VoicePlay("S030400000_04_050");
    MsgDisp("Nanatsumori","Happy New Year.");
    MsgDisp("主人公","Hehe, Happy New Year.
Treat me well this year, ｛七ツ森＊｝.");
    VoicePlay("S030400000_04_060");
    MsgDisp("Nanatsumori","You too.
......Haha.");
    MsgDisp("主人公","Why are you laughing?");
    VoicePlay("S030400000_04_070");
    MsgDisp("Nanatsumori","Hearing your cheerful voice first
thing this year makes me feel like the
rest of the year will get even happier.");
    MsgDisp("主人公","Well then, we can go visit the
shrine and be happy together!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
