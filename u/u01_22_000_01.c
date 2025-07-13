ScrFadeOut(0);
BGOpen("ho210",0);
ScrFadeIn(0);
SEPlay("EV_SE_577");
MsgDisp("主人公","My phone is ringing......
Oh, it's ｛ひかる＊｝.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
VoicePlay("U012200001_22_000");
MsgDisp("Hikaru","Hallo Mari～!
Are you awake already?");
MsgDisp("主人公","Yep, I'm awake.
What's up?");
VoicePlay("U012200001_22_010");
MsgDisp("Hikaru","Heyhey, like......
Wouldn't you like to come to the zoo 
with me today?");
MsgSel("Sure, that's fine.","Ah, sorry. I can't......");
switch (MsgSelRsltGet()){
    case 0:
    VoicePlay("U012200001_22_020");
    MsgDisp("Hikaru","Yay!
Then let's go straight there～♪");
    MsgDisp("主人公","Ok, see you soon!");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    break ;
    case 1:
    VoicePlay("U012200001_22_030");
    MsgDisp("Hikaru","Ehh～ What's with that......
How depressing.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(Even though she took the time 
to invite me......
Maybe I made the wrong decision?)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
