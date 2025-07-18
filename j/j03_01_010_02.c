Wait(20,0);
SEPlay("EV_SE_577");
MsgDisp("主人公","(Ah, it's from ｛風真＊＊｝.)");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
MsgDisp("主人公","｛風真＊＊｝, hello.");
VoicePlay("J030101002_01_000");
MsgDisp("Kazama","Hey, I got your message.");
MsgDisp("主人公","Thanks.
So, what do you say?");
VoicePlay("J030101002_01_010");
MsgDisp("Kazama","It's on my work day so I can't come. Next
time try not to invite me on a Tuesday or
a Thursday. See you.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","(I asked him out on a work day...
I should remember he's working on Tuesdays
and Thursdays.)");
MsgClose();
