BGOpen("ho210",2);
ScrFadeIn(0);
SEPlay("EV_SE_577");
MsgDisp("主人公","A phone......?
Ah, from the team captain∋");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
VoicePlay("H220000200_39_000");
MsgDisp("Manager","We don't need a manager that doesn't show
up to practices. I'm going to have to ask
you to leave the club. Goodbye.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","Shoot!
I was careless......");
MsgDisp("","(I was kicked off the track team.)");
MsgClose();
