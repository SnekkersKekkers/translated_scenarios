MsgSel("Yeah, I'm coming!","Uhm, sorry...");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        break ;
        case 4:
        case 5:
        VoicePlay("J060501000_05_000");
        MsgDisp("Hiiragi","Thank you.
Can you suggest a meeting place?");
        MsgDisp("主人公","At ｛待ち合わせ場所｝ sounds good?");
        VoicePlay("J060501000_05_010");
        MsgDisp("Hiiragi","Understood.
Having my invitation accepted...
It makes me so happy.");
        VoicePlay("J060501000_05_020");
        MsgDisp("Hiiragi","Well then, I look forward to the day.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(｛Hiiragi＊＊＊｝ invited me out...
Is this a date?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        break ;
        case 4:
        case 5:
        VoicePlay("J060501000_05_030");
        MsgDisp("Hiiragi","I see.
I understand.");
        MsgDisp("主人公","I'm sorry about that...
I'm just...");
        VoicePlay("J060501000_05_040");
        MsgDisp("Hiiragi","No, no, it can't be helped.");
        VoicePlay("J060501000_05_050");
        MsgDisp("Hiiragi","Next time, I'll invite you so well you won't
be able to say no.");
        MsgDisp("主人公","Hmmm, yeah.
See you later.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(Hmm...
He went out of his way to invite me...
I feel bad about that...)");
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
