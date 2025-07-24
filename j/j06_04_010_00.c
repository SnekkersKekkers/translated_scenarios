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
Where should we meet on that day?");
        MsgDisp("主人公","Let's meet at the ｛待ち合わせ場所｝.
Sound good?");
        VoicePlay("J060401000_04_010");
        MsgDisp("Nanatsumori","OK.
Don't oversleep on Sunday.");
        MsgDisp("主人公","Worry about yourself, ｛七ツ森＊｝!");
        VoicePlay("J060401000_04_020");
        MsgDisp("Nanatsumori","True.
Don't worry about it.
See you then.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(｛七ツ森＊｝ asked me out on a date.
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
        MsgDisp("Nanatsumori","Ahh...not good then?");
        MsgDisp("主人公","Yeah...");
        VoicePlay("J060401000_04_040");
        MsgDisp("Nanatsumori","Okay.
I'll try again another time.
Bye.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(Even though he invited me...
Sorry...)");
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
