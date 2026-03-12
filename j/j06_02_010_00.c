MsgSel("Yeah, I'm coming!","Uhm, sorry...");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        VoicePlay("J060201000_02_000");
        MsgDisp("Sassa","That's good, it's a plan.");
        MsgDisp("主人公","On ｛日付｝, at ｛待ち合わせ場所｝?");
        VoicePlay("J060201000_02_010");
        MsgDisp("Sassa","That's fine.
I'll be looking forward to seeing you on the
day.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(I'm going out with ｛Sassa＊＊｝.
...This is a date, right?)");
        break ;
        case 4:
        case 5:
        VoicePlay("J060201000_02_020");
        MsgDisp("Sassa","Really?
Cool!
Okay, let's decide where we're going to meet.");
        MsgDisp("主人公","Yeah.
Okay, then, how about we meet at the
｛待ち合わせ場所｝?");
        VoicePlay("J060201000_02_030");
        MsgDisp("Sassa","Yeah, works for me.
Well, I'm tall, so you'll spot me wherever I
am, right?");
        MsgDisp("主人公","Hmmm...easy to find, isn't it?");
        VoicePlay("J060201000_02_040");
        MsgDisp("Sassa","Oh, you laughed.
I'll be your waypoint, then.
See ya.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(｛Sassa＊＊｝, invited me out on a date.
I'm looking forward to it!)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        VoicePlay("J060201000_02_050");
        MsgDisp("Sassa","Oh, did you have something to do?");
        MsgDisp("主人公","Yeah, that day was a bit...");
        VoicePlay("J060201000_02_060");
        MsgDisp("Sassa","I see.
Well, it can't be helped then.
I'll ask you out again.");
        MsgDisp("主人公","Sorry, okay?");
        VoicePlay("J060201000_02_070");
        MsgDisp("Sassa","Don't apologize so much.
Bye.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(He took the time to invite me.
I feel bad about that...)");
        break ;
        case 4:
        case 5:
        VoicePlay("J060201000_02_080");
        MsgDisp("Sassa","Oh, I see...");
        MsgDisp("主人公","I'm sorry.");
        VoicePlay("J060201000_02_090");
        MsgDisp("Sassa","No problem.
I guess it was bad timing.
Maybe some other time.");
        VoicePlay("J060201000_02_100");
        MsgDisp("Sassa","I'm not great at reading the room.
Sorry if I miss the mark again next time.");
        MsgDisp("主人公","No, I'm sorry.");
        VoicePlay("J060201000_02_110");
        MsgDisp("Sassa","See you later.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(He took the time to invite me.
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
