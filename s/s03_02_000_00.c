SEPlay("EV_SE_663");
SEWait();
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("S030200000_02_000");
    MsgDisp("Sassa","Yes, hello.");
    MsgDisp("主人公","｛颯砂＊＊｝,
Happy New Year.");
    VoicePlay("S030200000_02_010");
    MsgDisp("Sassa","Happy New Year!
Treat me well this year.");
    VoicePlay("S030200000_02_020");
    MsgDisp("Sassa","So?
What's up?");
    MsgDisp("主人公","Would you like to visit the 
shrine with me?");
    break ;
    case 3:
    VoicePlay("S030200000_02_030");
    MsgDisp("Sassa","Yes, hello.");
    MsgDisp("主人公","｛颯砂＊＊｝,
Happy New Year.");
    VoicePlay("S030200000_02_040");
    MsgDisp("Sassa","Happy New Year!
I'm counting on you this year too.");
    VoicePlay("S030200000_02_050");
    MsgDisp("Sassa","Ah, are you calling me for a
shrine visit?");
    MsgDisp("主人公","Yep, that's right.
Would you maybe like to go with me?");
    break ;
    case 4:
    case 5:
    VoicePlay("S030200000_02_060");
    MsgDisp("Sassa","Happy New Year!");
    MsgDisp("主人公","Oh, you said it first.
Happy New Year.");
    VoicePlay("S030200000_02_070");
    MsgDisp("Sassa","Victory!
Treat me well this year.");
    VoicePlay("S030200000_02_080");
    MsgDisp("Sassa","Hearing your voice first thing...
It's a great start to the New Year.");
    VoicePlay("S030200000_02_090");
    MsgDisp("Sassa","So, what's up?");
    MsgDisp("主人公","You know, I was wondering if you
wanted to visit the shrine with me?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
