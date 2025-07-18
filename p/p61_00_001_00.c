BGOpen("ho210",1);
ScrFadeIn(0);
SEPlay("EV_SE_577");
MsgDisp("主人公","A phone call...it's from the club leader.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
MsgDisp("主人公","Yes.
Hello?");
VoicePlay("P610000100_46_000");
MsgDisp("Manager","I'm sorry for calling you on a day off.
From next week, we will start the
preparation period for the cultural
festival.");
VoicePlay("P610000100_46_010");
MsgDisp("Manager","The Gardening Club has decided on serving
herbal tea, once you are well, please also
join us in preparations.");
MsgDisp("主人公","Yes, thank you for contacting me.");
VoicePlay("P610000100_46_020");
MsgDisp("Manager","Then, please get well soon.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","(It's almost the cultural festival soon
huh...I need to get better quickly to
join in the preparations! )");
MsgClose();
ScrFadeOut(0);
