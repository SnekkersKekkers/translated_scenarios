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
It's ｛風真＊＊｝. )");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Hello.
What's wrong?");
    VoicePlay("J040100001_01_000");
    MsgDisp("Kazama","Ah, can I talk to you for a second?");
    MsgDisp("主人公","Yeah, what's up?");
    VoicePlay("J040100001_01_010");
    MsgDisp("Kazama","Sunday is coming.
Are you free?");
    MsgSel("Yeah, I'm free.","I have some business to take care of......");
    switch (MsgSelRsltGet()){
        case 0:
        break ;
        case 1:
        VoicePlay("J040100001_01_020");
        MsgDisp("Kazama","What's that.");
        MsgDisp("主人公","Kinda, you know.");
        VoicePlay("J040100001_01_030");
        MsgDisp("Kazama","Just a quick errand.
Yes, I understand.
So...");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(Did he try to ask me out somewhere?
Maybe I did something bad......)");
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
It's ｛風真＊＊｝ )");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Hello.
｛風真＊＊｝?");
    VoicePlay("J040100001_01_040");
    MsgDisp("Kazama","Yes, it's me.");
    MsgDisp("主人公","｛風真＊＊｝, what's wrong?");
    VoicePlay("J040100001_01_051");
    MsgDisp("Kazama","I'm not doing anything.
I was just wondering if you're free this
Sunday.");
    MsgSel("Yeah, I'm free","I have some business to take care of......");
    switch (MsgSelRsltGet()){
        case 0:
        break ;
        case 1:
        VoicePlay("J040100001_01_060");
        MsgDisp("Kazama","......Good grief, who are you saying no to
and making plans.");
        MsgDisp("主人公","Uh, I'm sorry......");
        VoicePlay("J040100001_01_070");
        MsgDisp("Kazama","Hey, you.
This time I'll call first.
See you.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(Maybe he was asking me out on a date?
I might have done something wrong......)");
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
