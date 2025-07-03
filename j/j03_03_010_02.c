Wait(20,0);
SEPlay("EV_SE_577");
MsgDisp("主人公","(Oh,it's a phone call from ｛本多＊＊｝ )");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
MsgDisp("主人公","Hello, ｛本多＊＊｝?");
VoicePlay("J030301002_03_000");
MsgDisp("Honda","Oh,is now a good moment?");
VoicePlay("J030301002_03_010");
MsgDisp("Honda","It's about the voicemail I got,
I wanted to go so bad!");
MsgDisp("主人公","By the looks of it, he had some prior
commitments?");
VoicePlay("J030301002_03_020");
MsgDisp("Honda","Yeah, that's right.
I always work Wednesdays and Fridays.");
MsgDisp("主人公","Oh, I see.
Well, I don't blame you then......");
VoicePlay("J030301002_03_030");
MsgDisp("Honda","I agree - and that's too bad!
Can you invite me again next time?");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","(He works part-time on Wednesdays and
Fridays...... I'll be careful when I ask
him out)");
MsgClose();
