BGOpen("ho210",0);
ScrFadeIn(0);
switch (ChPrmGet(8,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_577");
    MsgDisp("主人公","(Oh, ｛大地＊＊｝ is calling!)");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Yes, hello.");
    VoicePlay("J040800001_08_000");
    MsgDisp("Shirahane","Hello?
Heh, it's me.");
    MsgDisp("主人公","Mm-hmm.
What's up?");
    VoicePlay("J040800001_08_010");
    MsgDisp("Shirahane","Hey, I was wondering what your plans are
for this coming Sunday. Are ya free?");
    MsgSel("Yeah, I'm free.", "I had some business to attend to......");
    switch (MsgSelRsltGet()){
        case 0:
        break ;
        case 1:
        VoicePlay("J040800001_08_020");
        MsgDisp("Shirahane","Ah......");
        MsgDisp("主人公","Sorry.");
        VoicePlay("J040800001_08_030");
        MsgDisp("Shirahane","Hmm, don't worry about it, okay?
Well, I'll see you later.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(Is there really something to do this
Sunday?)");
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
MsgClose();
