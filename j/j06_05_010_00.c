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
        MsgDisp("Hiiragi","Yes, ma'am.
It is my pleasure to be to accept your
invitation.");
        VoicePlay("J060501000_05_020");
        MsgDisp("Hiiragi","Well then, I look forward to the day.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(｛柊＊＊＊｝ invited me out.....
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
        MsgDisp("主人公","I'm sorry about that ....
I'm just ...");
        VoicePlay("J060501000_05_040");
        MsgDisp("Hiiragi","No, no, we have no choice.");
        VoicePlay("J060501000_05_050");
        MsgDisp("Hiiragi","Next time, you should be OK with it
without a second thought, I will invite
you well.");
        MsgDisp("主人公","Hmmm, yeah.
See you later.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(Hmmm ...
He went to all the trouble of inviting me
over, I'm sorry I did that. ...)");
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
