MsgSel("Yeah, I'm coming!","Uh, sorry about that ......");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(8,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        break ;
        case 4:
        case 5:
        VoicePlay("J060801000_08_000");
        MsgDisp("Daichi","I'll meet you there!
Yeah, ...... where should we meet up?");
        MsgDisp("主人公","At the ｛待ち合わせ場所｝, sounds good?");
        VoicePlay("J060801000_08_010");
        MsgDisp("Daichi","I'll do that.
Well, I'll see you on the day!");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(A date with ｛大地＊＊｝.
I have to remember!)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    switch (ChPrmGet(8,6)){
        case 0:
        case 1:
        case 2:
        break ;
        case 3:
        break ;
        case 4:
        case 5:
        VoicePlay("J060801000_08_020");
        MsgDisp("Daichi","Ah ......
Not a fan of this place?");
        MsgDisp("主人公","Yeah, sorry.");
        VoicePlay("J060801000_08_030");
        MsgDisp("Daichi","Yes, I'm fine.
I didn't to force you to do anything,
Don't worry about it.");
        MsgDisp("主人公","｛大地＊＊｝......");
        VoicePlay("J060801000_08_040");
        MsgDisp("Daichi","I won't let you get depressed.
I'll call you again.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(He went to the trouble of inviting me,
I'm sorry I did that ......)");
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
ScrFadeOut(0);
