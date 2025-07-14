BGOpen("ho210",2);
ScrFadeIn(0);
SEPlay("EV_SE_577");
MsgDisp("主人公","A call......?
Ah, from the team captain∋");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
VoicePlay("H120000200_41_000");
MsgDisp("Manager","We don't need a manager that doesn't show
up to practices. You're off the team. Bye.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","Shoot!
I was careless......");
MsgDisp("","(I was kicked off the baseball team.)");
MsgClose();
