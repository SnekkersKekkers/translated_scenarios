switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("J030600000_06_000");
    MsgDisp("Himuro","Okay.");
    MsgDisp("主人公","Then, on｛日付｝
I'll be waiting at ｛待ち合わせ場所｝!");
    VoicePlay("J030600000_06_010");
    MsgDisp("Himuro","Yeah, yeah.
Well then.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hooray!
I can't wait for ｛日付｝ to come!)");
    break ;
    case 3:
    VoicePlay("J030600000_06_020");
    MsgDisp("Himuro","Well, okay.");
    MsgDisp("主人公","Then, on｛日付｝
I'll be waiting at ｛待ち合わせ場所｝.");
    VoicePlay("J030600000_06_030");
    MsgDisp("Himuro","You invited me,
so don't be late.
See you.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hooray!
I can't wait for ｛日付｝ to come.)");
    break ;
    case 4:
    case 5:
    VoicePlay("J030600000_06_040");
    MsgDisp("Himuro","Yeah, of course I'll go.");
    MsgDisp("主人公","Good!
Then, on｛日付｝
We can go to ｛待ち合わせ場所｝?");
    VoicePlay("J030600000_06_050");
    MsgDisp("Himuro","All right.
Can you try not being late ?");
    MsgDisp("主人公","Hmmm, okay.
We want to have lots of fun, don't we?");
    VoicePlay("J030600000_06_060");
    MsgDisp("Himuro","......Yeah.
Okay, I'll look forward to it.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hooray!
I can't wait for ｛日付｝ to come.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
