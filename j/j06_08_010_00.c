MsgSel("Yeah, I'm coming!","Uhm, sorry...");
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
        MsgDisp("Daichi","Awesome!
So...where should we meet up?");
        MsgDisp("主人公","Does the ｛待ち合わせ場所｝ sound good?");
        VoicePlay("J060801000_08_010");
        MsgDisp("Daichi","Let's do that.
Well I'll see ya on the day!");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(A date with ｛Daichi＊＊｝.
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
        MsgDisp("Daichi","Ah ...
Not a fan of that place?");
        MsgDisp("主人公","Yeah, sorry.");
        VoicePlay("J060801000_08_030");
        MsgDisp("Daichi","It's all good.
I don't want ta force ya to do anythin',
don't worry about it.");
        MsgDisp("主人公","｛Daichi＊＊｝...");
        VoicePlay("J060801000_08_040");
        MsgDisp("Daichi","Don't go gettin' all down on me.
I'll call ya again, so see ya!");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(He went through the trouble of inviting me.
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
ScrFadeOut(0);
