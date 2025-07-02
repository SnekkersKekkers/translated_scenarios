Wait(20,0);
SEPlay("EV_SE_577");
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","(Ah, a phone call from ｛颯砂＊＊｝.)");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Hello. 
｛主人公苗字｝ speaking.");
    VoicePlay("J030201001_02_000");
    MsgDisp("Sassa","Ah, it's me.
I just got your message.");
    MsgDisp("主人公","So, what do you say?
Are you able to go?");
    VoicePlay("J030201001_02_010");
    MsgDisp("Sassa","Sorry, I have plans on that day......");
    MsgDisp("主人公","I see, that's too bad.");
    VoicePlay("J030201001_02_020");
    MsgDisp("Sassa","Yeah. Call me again.
Bye.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(At least he called to say 
he can't go......)");
    break ;
    case 3:
    MsgDisp("主人公","(Ah, a phone call from ｛颯砂＊＊｝.)");    
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Hello, ｛颯砂＊＊｝?");
    VoicePlay("J030201001_02_030");
    MsgDisp("Sassa","Hi.
I got your message earlier.");
    MsgDisp("主人公","So, what do you say?");
    VoicePlay("J030201001_02_040");
    MsgDisp("Sassa","I can't go on that day.
You went through the trouble of 
calling... Sorry");
    MsgDisp("主人公","Nah, thanks for taking the time
to contact me.");
    VoicePlay("J030201001_02_050");
    MsgDisp("Sassa","We'll definitely go next time, okay?
Bye.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Did I ask him to go out
at a bad time? Too bad.)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(Ah, it's ｛颯砂＊＊｝!)");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Hello, ｛颯砂＊＊｝?");
    VoicePlay("J030201001_02_060");
    MsgDisp("Sassa","Yeah, it's me. Got your message.");
    MsgDisp("主人公","Yeah, what's up?");
    VoicePlay("J030201001_02_070");
    MsgDisp("Sassa","That day, it's not good for me.
Got stuff, you know.");
    MsgDisp("主人公","Ah, is that so! That's too bad.");
    VoicePlay("J030201001_02_080");
    MsgDisp("Sassa","Yeah, even though you invited me.
I thought I could make it work, 
but I couldn't. Really sorry.");
    VoicePlay("J030201001_02_090");
    MsgDisp("Sassa","But your voice on the voicemail.
Felt fresh and nice. Glad I heard it.
See you later.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Huhh, too bad he can't go......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
