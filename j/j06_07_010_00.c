MsgSel("Yes, I understand. ","I'm sorry. I'll pass.");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","Let's see, the meeting place is
｛待ち合わせ場所｝ All
right?");
    VoicePlay("J060701000_07_000");
    MsgDisp("Mikage","Oh, well, I'm counting on you.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(｛御影＊＊｝ said that we are going to go
out together to have fun ...It's like a
date, but a little more exciting!)");
    break ;
    case 1:
    VoicePlay("J060701000_07_010");
    MsgDisp("Mikage","Oh, I see.
Well, I can't help it.
See you later.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","( He went to the trouble of inviting me,
Did I do something wrong?)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
