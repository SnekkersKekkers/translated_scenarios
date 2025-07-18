MsgSel("Yeah, I'm coming!","Uh, sorry about that ...");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        VoicePlay("J060301000_03_000");
        MsgDisp("Honda","That's the way to do it!
So, how do you want to meet up?");
        MsgDisp("主人公","At ｛待ち合わせ場所｝.
What do you think?");
        VoicePlay("J060301000_03_010");
        MsgDisp("Honda","Right, right.
Well, I'll see you Sunday!");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(｛本多＊＊｝ invited me out....
Is this a date?)");
        break ;
        case 4:
        case 5:
        VoicePlay("J060301000_03_020");
        MsgDisp("Honda","I knew you would come!");
        MsgDisp("主人公","So, the meeting point is...
｛待ち合わせ場所｝?");
        VoicePlay("J060301000_03_030");
        MsgDisp("Honda","Oh, I'm sorry!
I was so happy.
I didn't think that far ahead...");
        VoicePlay("J060301000_03_040");
        MsgDisp("Honda","Of course, no problem there.
Thanks!");
        MsgDisp("主人公","You're welcome.
Looking forward to it.");
        VoicePlay("J060301000_03_050");
        MsgDisp("Honda","It's amazing!
Ahhh, I can't wait for Sunday.
See you later?");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","｛本多＊＊｝, Invited me on a
date.
I'm looking forward to Sunday!)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        VoicePlay("J060301000_03_060");
        MsgDisp("Honda","I see.");
        MsgDisp("主人公","Yeah, sorry.");
        VoicePlay("J060301000_03_070");
        MsgDisp("Honda","But, well, it couldn't be helped.
It was my fault for asking him out so
suddenly.");
        VoicePlay("J060301000_03_080");
        MsgDisp("Honda","See you later.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(He took the time to invite me over, I'm
sorry I did that ...)");
        break ;
        case 4:
        case 5:
        VoicePlay("J060301000_03_090");
        MsgDisp("Honda","Eh ...?");
        MsgDisp("主人公","Oh, um, ...");
        VoicePlay("J060301000_03_100");
        MsgDisp("Honda","Oh, I'm sorry!
Now I finally understand.");
        VoicePlay("J060301000_03_110");
        MsgDisp("Honda","I was getting carried away all by myself
again. That's why I wasn't prepared for
the rejection.");
        MsgDisp("主人公","Uh...sorry");
        VoicePlay("J060301000_03_120");
        MsgDisp("Honda","No, you don't have to apologize!
I'm sorry too.");
        VoicePlay("J060301000_03_130");
        MsgDisp("Honda","I'll ask you out again!
See ya?");
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
