BGOpen("ho210",0);
ScrFadeIn(0);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_577");
    MsgDisp("主人公","(Oh, it's a phone call
from......｛柊＊＊＊｝ )");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEStop("EV_SE_577",0);
    SEWait();
    MsgDisp("主人公","Hello.
This is ｛主人公苗字｝.");
    VoicePlay("J040500001_05_000");
    MsgDisp("Hiiragi","Hi, I'm Hiiragi.
Are you free now?");
    MsgDisp("主人公","Yeah, why?");
    VoicePlay("J040500001_05_010");
    MsgDisp("Hiiragi","Do you have plans this Sunday?
I was wondering if you were free......");
    MsgSel("Yeah, I'm free.", "I have to run an errand……");
    switch (MsgSelRsltGet()){
        case 0:
        break ;
        case 1:
        VoicePlay("J040500001_05_020");
        MsgDisp("Hiiragi","Oh, I see.
I am sorry to hear that.");
        MsgDisp("主人公","Yeah, sorry.");
        VoicePlay("J040500001_05_030");
        MsgDisp("Hiiragi","No, no, I will invite you back.
See you later.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(This Sunday, or whatever it was ......
I may have done something wrong.)");
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
