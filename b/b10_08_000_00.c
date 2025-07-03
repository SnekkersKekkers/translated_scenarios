BGOpen("ex000",1);
ChClose(8,0,0);
ScrFadeIn(0);
MsgDisp("主人公","(Haa...
why did I end up saying
such a thing...)");
SEPlay("EV_SE_579");
MsgDisp("主人公","(Ah...
It's from ｛大地＊＊｝!)");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_579",0);
MsgDisp("主人公","Yes, hello.");
VoicePlay("B100800000_08_000");
MsgDisp("Shirahane","...Hello?");
MsgDisp("主人公","｛大地＊＊｝, what's wrong?");
VoicePlay("B100800000_08_010");
MsgDisp("Shirahane","I was worried you were hurt.");
MsgDisp("主人公","Eh...");
VoicePlay("B100800000_08_020");
MsgDisp("Shirahane","I was acting really childish when 
we said goodbye at the end.");
VoicePlay("B100800000_08_030");
MsgDisp("Shirahane","That's the worst thing a man could do.
...Can you forgive me?");
MsgDisp("主人公","No, I'm the one who said
something weird. I'm sorry.");
VoicePlay("B100800000_08_040");
MsgDisp("Shirahane","No. 
You didn't do anything wrong.");
MsgDisp("主人公","Yeah... thank you.");
VoicePlay("B100800000_08_050");
MsgDisp("Shirahane","Hehe.
Let's go on a date again, okay?");
VoicePlay("B100800000_08_060");
MsgDisp("Shirahane","Well then, I'll see you later.
Goodnight.");
MsgDisp("主人公","Goodnight, ｛大地＊＊｝.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","(｛大地＊＊｝...
called me out of concern)");
MsgClose();
ScrFadeOut(0,0);
