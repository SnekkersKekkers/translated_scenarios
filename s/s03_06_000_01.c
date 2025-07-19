switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("S030600001_06_000");
    MsgDisp("Himuro","Okay.
I don't have any plans.");
    MsgDisp("主人公","I'm glad.
So, where should we meet up?");
    VoicePlay("S030600001_06_010");
    MsgDisp("Himuro","I'll pick you up.
Get ready or something like that.");
    MsgDisp("主人公","Okay.
See you soon then.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Yay! ｛氷室＊＊｝ and I are going to the
shrine together! ...What should I wear?)");
    break ;
    case 3:
    VoicePlay("S030600001_06_020");
    MsgDisp("Himuro","Sure.");
    MsgDisp("主人公","Yay!
Then let's meet up at——");
    VoicePlay("S030600001_06_030");
    MsgDisp("Himuro","I'll pick you up.
You should get ready.");
    MsgDisp("主人公","Okay, understood.
Thank you.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Visiting the shrine with ｛氷室＊＊｝!
Now, what to wear?)");
    break ;
    case 4:
    case 5:
    VoicePlay("S030600001_06_040");
    MsgDisp("Himuro","Of course I'll go.");
    MsgDisp("主人公","Really?
Yay!");
    VoicePlay("S030600001_06_050");
    MsgDisp("Himuro","I'm going to pick you up, so take your
time and get ready.");
    MsgDisp("主人公","Okay, got it.
Thank you so much!");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(A shrine visit with ｛氷室＊＊｝!
Now then, what should I wear?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
