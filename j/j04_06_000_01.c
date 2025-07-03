BGOpen("ho210",0);
ScrFadeIn(0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_577");
    MsgDisp("主人公","(Oh, it's from ｛氷室＊＊｝.)");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Yes, hello.");
    VoicePlay("J040600001_06_000");
    MsgDisp("Himuro","It's me.
Do you have a minute?");
    MsgDisp("主人公","Yeah, what's up?");
    VoicePlay("J040600001_06_010");
    MsgDisp("Himuro","Are you free this Sunday?");
    MsgSel("Yeah, I'm free.", "I have to run an errand……");
    switch (MsgSelRsltGet()){
        case 0:
        break ;
        case 1:
        VoicePlay("J040600001_06_020");
        MsgDisp("Himuro","Oh......");
        MsgDisp("主人公","Sorry.");
        VoicePlay("J040600001_06_030");
        MsgDisp("Himuro","If you have plans, I don't blame you......
So......See you then.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(I feel bad about what I did......)");
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
