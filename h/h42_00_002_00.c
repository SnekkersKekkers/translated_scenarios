BGOpen("ho210",2);
ScrFadeIn(0);
SEPlay("EV_SE_577");
MsgDisp("主人公","A call...?
Ah, from the club president∋");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
VoicePlay("H420000200_45_000");
MsgDisp("Manager","You missed our general practice again!
I'll have you leave the club.
Goodbye!");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","Shoot!
I was careless...");
MsgDisp("","(I was kicked off the rhythmic gymnastics
club.)");
MsgClose();
