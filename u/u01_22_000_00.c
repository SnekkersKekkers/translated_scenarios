ScrFadeOut(0);
BGOpen("ho210",0);
ScrFadeIn(0);
SEPlay("EV_SE_577");
MsgDisp("主人公","Oh? A phone call?
Oh, it's from ｛ひかる＊｝.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
VoicePlay("U012200000_22_000");
MsgDisp("Hikaru","Ha-llo Mari～!
Are you well?");
MsgDisp("主人公","I'm good, what's up?");
VoicePlay("U012200000_22_010");
MsgDisp("Hikaru","It's Hikaru date time!
Do you want to go to karaoke with me?");
MsgSel("Ok, let's go！","Sorry. Today isn't good......");
switch (MsgSelRsltGet()){
    case 0:
    VoicePlay("U012200000_22_020");
    MsgDisp("Hikaru","Amazing!
Ok then, let's meet there～♪");
    MsgDisp("主人公","Okay, gotcha.
See you soon.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    break ;
    case 1:
    VoicePlay("U012200000_22_030");
    MsgDisp("Hikaru","Really～?
That's disappointing......Sigh.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Even though she took the time 
to invite me......
Maybe I made the wrong choice?)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
