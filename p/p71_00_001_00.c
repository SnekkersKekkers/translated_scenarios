BGOpen("ho210",1);
ScrFadeIn(0);
SEPlay("EV_SE_577");
MsgDisp("主人公","(Ah, a phone call...
It's from the handicrafts club leader.)");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
VoicePlay("P710000100_44_000");
MsgDisp("Manager","Hello.
From next week onwards, for two weeks
we will enter the preparation period
for the cultural festival.");
VoicePlay("P710000100_44_010");
MsgDisp("Manager","The handicrafts club have 
decided on doing a fashion show.
Please also join us in the preparations.");
VoicePlay("P710000100_44_020");
MsgDisp("Manager","Then, get well soon.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","(Preparation for the cultural festival,
huh... I need to get better soon so I can
participate!)");
MsgClose();
ScrFadeOut(0);
