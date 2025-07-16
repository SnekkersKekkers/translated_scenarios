switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("S030400001_04_000");
    MsgDisp("Nanatsumori","Eh......it's cold.");
    MsgDisp("主人公","Even if it's cold, let's go!
It's the start of the New Year.");
    VoicePlay("S030400001_04_010");
    MsgDisp("Nanatsumori","Okay, okay.
I'll come pick you up now.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(A shrine visit with
｛七ツ森＊｝!
I wonder what I should wear?)");
    break ;
    case 3:
    VoicePlay("S030400001_04_020");
    MsgDisp("Nanatsumori","Geez......
You sound like you're doing well.");
    MsgDisp("主人公","Of course, it's a New Year!");
    VoicePlay("S030400001_04_030");
    MsgDisp("Nanatsumori","Well, that's true.
I'm not sure if it's a good idea to stay
home for New Years.");
    VoicePlay("S030400001_04_040");
    MsgDisp("Nanatsumori","Okay, I'll go with you.
I'll come pick you up after I get ready.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Yay! A shrine visit with
｛七ツ森＊｝. What should
I wear......)");
    break ;
    case 4:
    case 5:
    VoicePlay("S030400001_04_050");
    MsgDisp("Nanatsumori","ＯＫ.");
    MsgDisp("主人公","Yay.");
    VoicePlay("S030400001_04_060");
    MsgDisp("Nanatsumori","It's cold outside so make sure you prepare
for that...
Ah.");
    MsgDisp("主人公","Huh?");
    VoicePlay("S030400001_04_070");
    MsgDisp("Nanatsumori","Maybe I'll get to see something even more
beautiful......");
    VoicePlay("S030400001_04_080");
    MsgDisp("Nanatsumori","Don't rush to get ready, take your time.
I'll come pick you up when you're done.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Is he expecting something......
Well, time to get dressed.
What should I wear?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
