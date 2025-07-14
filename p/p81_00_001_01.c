BGOpen("ho210",1);
ScrFadeIn(0);
SEPlay("EV_SE_577");
MsgDisp("主人公","Ah, a phone call.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
MsgDisp("主人公","Yes, hello?");
VoicePlay("P810500101_41_000");
MsgDisp("Student Council President","I apologize for calling you on break.
I called you as I have a message to
deliver.");
VoicePlay("P810500101_41_010");
MsgDisp("Student Council President","From next week, for two weeks onwards we
will begin the preparation period for the
cultural festival.");
VoicePlay("P810500101_41_020");
MsgDisp("Student Council President","We, the student council executives, Have
been entrusted with management of the
cultural festival. Please also join us in
preparations.");
VoicePlay("P810500101_41_030");
MsgDisp("Student Council President","...Then, get well soon.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","(Management of the cultural festival huh?
That's an important duty.
I have to get better soon!)");
MsgClose();
ScrFadeOut(0,0);
