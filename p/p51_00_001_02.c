BGOpen("ho210",1);
ScrFadeIn(0);
SEPlay("EV_SE_577");
MsgDisp("主人公","Ah...... it's my phone.
It's from the club president.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
MsgDisp("主人公","Yes, hello.");
VoicePlay("P510000102_33_000");
MsgDisp("Manager","I called to inform you about something.
We are preparing for the cultural
festival for the next two weeks.");
VoicePlay("P510000102_33_010");
MsgDisp("Manager","Our club's performance for this
year is \"Fourth Heart\".");
VoicePlay("P510000102_33_020");
MsgDisp("Manager","You don't have to push yourself too hard,
but please try to recover as soon as
possible and join us for practice when you
can......");
MsgDisp("Manager","Well then, take care.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","Practice for the cultural festival......
I need to get better soon to help prepare!");
MsgClose();
ScrFadeOut(0);
