BGOpen("ho210",1);
ScrFadeIn(0);
SEPlay("EV_SE_577");
MsgDisp("主人公","Ah...... it's my phone.
It's from the class president.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
VoicePlay("P210000001_45_000");
MsgDisp("Chairperson","Hello.
We are preparing for the cultural
festival for the next two weeks.");
VoicePlay("P210000001_45_010");
MsgDisp("Chairperson","This year, we'll be hosting a school play,
Please do your best to
help with the preparations.");
VoicePlay("P210000001_45_020");
MsgDisp("Chairperson","Well then, take care.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","(A school play, huh......
I need to get better soon to help
with the preparations!)");
MsgClose();
ScrFadeOut(0);
