ScrFadeOut(0);
BGOpen("ho210",0);
ScrFadeIn(0);
SEPlay("EV_SE_577");
MsgDisp("主人公","A phone call......
Ah, it's ｛ひかる＊｝.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
VoicePlay("U012200002_22_000");
MsgDisp("Hikaru","Mari, are you doing okay?
It's Hikaru♪");
MsgDisp("主人公","Hehe, yep.
What's up?");
VoicePlay("U012200002_22_010");
MsgDisp("Hikaru","Hey so, let's go to the forest park 
together.
It's the home of fireflies♪");
MsgSel("Of course, let's go.","I'm busy today......Sorry.");
switch (MsgSelRsltGet()){
    case 0:
    VoicePlay("U012200002_22_020");
    MsgDisp("Hikaru","Yayay! Ok then, let's rendezvous at the
forest park.");
    MsgDisp("主人公","Ok, gotcha.
See you there soon.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    break ;
    case 1:
    VoicePlay("U012200002_22_030");
    MsgDisp("Hikaru","Fine then～ You busy dummy!
......Sniff.");
    SEPlay("SYS_SE_PHONE_POWER_ON");
    SEWait();
    MsgDisp("主人公","(She took the time to invite me...
Did I make the right choice?)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
