BGOpen("ho210",2);
ScrFadeIn(0);
SEPlay("EV_SE_577");
MsgDisp("主人公","(Huh? It's from ｛柊＊＊＊｝ )");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
MsgDisp("主人公","Yes, hello.");
VoicePlay("J140501000_05_000");
MsgDisp("Hiiragi","Hi, I'm Hiiragi.
I'm sorry to disturb you at this time of
night.");
MsgDisp("主人公","Not at all.
What's wrong?");
VoicePlay("J140501000_05_010");
MsgDisp("Hiiragi","Yes, I wanted to ask about your schedule.
Are you free next Sunday?");
