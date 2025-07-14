MsgSel("Yes, I would love to!" , "I'll be a bit busy that day ......");
switch (MsgSelRsltGet()){
    case 0:
    VoicePlay("J140101001_01_000");
    MsgDisp("Kazama","All right, it's settled.");
    MsgDisp("主人公","Then at the ｛待ち合わせ場所｝.
Should we meet up there?");
    VoicePlay("J140101001_01_010");
    MsgDisp("Kazama","OK! I'll do that. I'll let them know. See
you later.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(The four of us are going out, huh?
I'm looking forward to it.)");
    break ;
    case 1:
    VoicePlay("J140101001_01_020");
    MsgDisp("Kazama","Oh, I see...... Okay. I'll see you next
time.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(He went to the trouble of inviting me,
Did I do something bad to everyone?)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
