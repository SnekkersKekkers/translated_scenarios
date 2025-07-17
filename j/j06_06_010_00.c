MsgSel("Yeah, I'm coming!","Uh, sorry about that ...");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        break ;
        case 4:
        case 5:
        VoicePlay("J060601000_06_000");
        MsgDisp("Himuro","... Ah, so.
What about meeting up?");
        MsgDisp("主人公","At ｛待ち合わせ場所｝ How
about that?");
        VoicePlay("J060601000_06_010");
        MsgDisp("Himuro","Okay, good.
There you go.");
        MsgDisp("主人公","I'm looking forward to it.");
        VoicePlay("J060601000_06_020");
        MsgDisp("Himuro","Yeah ... me too.");
        VoicePlay("J060601000_06_030");
        MsgDisp("Himuro","Then don't be late on that day.");
        SEPlay("SYS_SE_PHONE_POWER_ON");
        SEWait();
        MsgDisp("主人公","(｛氷室＊＊｝ He just asked me out on a
date.
I'm looking forward to Sunday!)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        break ;
        case 4:
        case 5:
        VoicePlay("J060601000_06_040");
        MsgDisp("Himuro","What, is it bad?");
        MsgDisp("主人公","Yeah ... sorry.");
        VoicePlay("J060601000_06_050");
        MsgDisp("Himuro","Well, okay.");
        MsgDisp("主人公","Ask me out again, okay?");
        VoicePlay("J060601000_06_060");
        MsgDisp("Himuro","... if you feel like it.");
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
