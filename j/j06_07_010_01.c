MsgSel("Yes, I'm in!","I've got to run an errand ...... ");
switch (MsgSelRsltGet()){
    case 0:
    VoicePlay("J060701001_07_000");
    MsgDisp("Mikage","All right, I got one.
Thank God.");
    VoicePlay("J060701001_07_010");
    MsgDisp("Mikage","Take care.
See ya.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(This Sunday huh ......
I'll have to try not to oversleep.)");
    break ;
    case 1:
    VoicePlay("J060701001_07_020");
    MsgDisp("Mikage","I guess that's right!
That's a healthy high school student.");
    VoicePlay("J060701001_07_030");
    MsgDisp("Mikage","Don't worry about it, okay?");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Hmmm,
Maybe I should have gone.)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
