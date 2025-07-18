MsgSel("Yeah, I'm coming!","Uhm, sorry...");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        break ;
        case 4:
        case 5:
        VoicePlay("J060401000_04_000");
        MsgDisp("Nanatsumori","All right.
What do we do on that day?");
        MsgDisp("主人公","Okay, then we'll go to the
｛待ち合わせ場所｝ Sounds
good?");
        VoicePlay("J060401000_04_010");
        MsgDisp("Nanatsumori","OK.
Do not oversleep on Sunday.");
        MsgDisp("主人公","Hmmm, ｛七ツ森＊｝ is the
best!");
        VoicePlay("J060401000_04_020");
        MsgDisp("Nanatsumori","I'll tell you.
Don't worry about it.
See you.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(｛七ツ森＊｝.
He asked me out on a date.
I'm looking forward to Sunday!)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        break ;
        case 4:
        case 5:
        VoicePlay("J060401000_04_030");
        MsgDisp("Nanatsumori","Ahh ...not good then?");
        MsgDisp("主人公","Yeah...");
        VoicePlay("J060401000_04_040");
        MsgDisp("Nanatsumori","Okay.
I'll get back to some other time.
Bye.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(He went to the trouble of inviting me,
I'm sorry I did that ...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
