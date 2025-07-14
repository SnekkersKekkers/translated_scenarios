BGOpen("ho210",2);
ScrFadeIn(0);
SEPlay("EV_SE_577");
MsgDisp("主人公","My phone......?
Ah, from the team captain∋");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
VoicePlay("H320000200_47_000");
MsgDisp("Manager","You missed our general practice again!
I'll have you leave the club. Goodbye.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","Shoot!
I was careless......");
MsgDisp("","(I was kicked out of judo club.)");
MsgClose();
