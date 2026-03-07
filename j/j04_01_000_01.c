BGOpen("ho210",0);
ScrFadeIn(0);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    break ;
    case 4:
    SEPlay("EV_SE_577");
    MsgDisp("主人公","(Huh?
It's ｛Kazama＊＊｝.)");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Hello?");
    VoicePlay("J040100001_01_000");
    MsgDisp("Kazama","Ah, can I talk to you for a second?");
    MsgDisp("主人公","Yeah, what's up?");
    VoicePlay("J040100001_01_010");
    MsgDisp("Kazama","Sunday is coming.
Are you free?");
    MsgSel("Yeah, I'm free.","I have some business to take care of...");
    switch (MsgSelRsltGet()){
        case 0:
        break ;
        case 1:
        VoicePlay("J040100001_01_020");
        MsgDisp("Kazama","What's with that.");
        MsgDisp("主人公","It's just kinda, you know...");
        VoicePlay("J040100001_01_030");
        MsgDisp("Kazama","Just a little errand, huh.
Okay, I get it.
See ya.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(Was he trying to ask me out?
Maybe I did something bad...)");
        MsgClose();
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    case 5:
    SEPlay("EV_SE_577");
    MsgDisp("主人公","(Huh?
It's ｛Kazama＊＊｝)");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Hello.
｛Kazama＊＊｝?");
    VoicePlay("J040100001_01_040");
    MsgDisp("Kazama","Yes, it's me.");
    MsgDisp("主人公","｛Kazama＊＊｝, what's up?");
    VoicePlay("J040100001_01_051");
    MsgDisp("Kazama","Nothing in particular.
I was just wondering if you're free this
Sunday.");
    MsgSel("Yeah, I'm free.","I have some business to take care of...");
    switch (MsgSelRsltGet()){
        case 0:
        break ;
        case 1:
        VoicePlay("J040100001_01_060");
        MsgDisp("Kazama","...Good grief, who said you could go
making plans without checking with me.");
        MsgDisp("主人公","Uh, I'm sorry...");
        VoicePlay("J040100001_01_070");
        MsgDisp("Kazama","Just kidding.
Next time I'll call you first.
See you.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(Maybe he was asking me out on a date?
I might have done something wrong...)");
        MsgClose();
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    default :
    DbgAssert(1);
    break ;
    }
