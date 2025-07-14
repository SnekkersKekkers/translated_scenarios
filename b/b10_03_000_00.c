BGOpen("ex000",1);
ChClose(3,0,0);
ScrFadeIn(0);
MsgDisp("主人公","(Hah... today didn't go well...)");
SEPlay("EV_SE_579");
MsgDisp("主人公","Oh, a phone call. ... from ｛本多＊＊｝?");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_579",0);
MsgDisp("主人公","Hello?");
VoicePlay("B100300000_03_000");
MsgDisp("Honda","Hey, it's me.
Are you still outside by any chance?");
MsgDisp("主人公","Yeah, I am.");
VoicePlay("B100300000_03_010");
MsgDisp("Honda","I am too.
I didn't want to go home feeling uneasy.
I'm sorry about today!");
MsgDisp("主人公","No, I'm the one who said weird things...");
VoicePlay("B100300000_03_020");
MsgDisp("Honda","It's more fun saying weird things than
saying the obvious. So let's say lots of
weird things to each other.");
MsgDisp("主人公","Hahaha. Thanks ｛本多＊＊｝.");
VoicePlay("B100300000_03_030");
MsgDisp("Honda","Alright! I heard your laugh. Now I can go
home.");
MsgDisp("主人公","Haha, me too.
Thank you for calling.");
VoicePlay("B100300000_03_040");
MsgDisp("Honda","Yeah, let's go out together again!
See you.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","(｛本多＊＊｝... he called to check on me.)");
MsgClose();
ScrFadeOut(0,0);
