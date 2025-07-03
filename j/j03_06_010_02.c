Wait(20,0);
SEPlay("EV_SE_577");
MsgDisp("主人公","(Oh,it's a call from ｛氷室＊＊｝ )");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
MsgDisp("主人公","Hello, ｛氷室＊＊｝?");
VoicePlay("J030601002_06_000");
MsgDisp("Himuro","The voicemail, I heard it. I can't because
I'm working part-time that day.");
MsgDisp("主人公","I see. Well, we don't have a choice
then......");
VoicePlay("J030601002_06_010");
MsgDisp("Himuro","That's what I mean. I'll be working
part-time on Wednesdays and Fridays. Keep
that in mind. See you later..");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","(Wednesday and Friday......
Okay, I'll be careful.)");
MsgClose();
