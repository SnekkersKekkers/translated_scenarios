ChClose(5,0,0);
BGOpen("ex000",1);
ScrFadeIn(0);
MsgDisp("主人公","(Haa...why did I say such a thing...)");
SEPlay("EV_SE_579");
MsgDisp("主人公","My phone...
Ah, ｛柊＊＊＊｝!");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_579",0);
MsgDisp("主人公","...Hello?");
VoicePlay("B100500000_05_000");
MsgDisp("Hiiragi","It's Hiiragi.
... By any chance, are you still outside?");
MsgDisp("主人公","Yeah...
Um, I——");
VoicePlay("B100500000_05_010");
MsgDisp("Hiiragi","I'm very sorry...
For having that kind of attitude.");
VoicePlay("B100500000_05_020");
MsgDisp("Hiiragi","And leaving you alone at this hour.");
MsgDisp("主人公","No, it was my fault...");
VoicePlay("B100500000_05_030");
MsgDisp("Hiiragi","I'm troubled...
Then, how about this.");
VoicePlay("B100500000_05_040");
MsgDisp("Hiiragi","Only we know of what happened today. If
both us forgot it, it would no longer
exist in this world. I've forgotten, so
it's only you.");
MsgDisp("主人公","Yeah, thank you.");
VoicePlay("B100500000_05_050");
MsgDisp("Hiiragi","Hey, there's no need to thank me.
With this, we're back to before.");
MsgDisp("主人公","...I'm glad.");
VoicePlay("B100500000_05_060");
MsgDisp("Hiiragi","From now on too, can I see and hear the
same things with you, and spend time
together. the same as before?");
MsgDisp("主人公","Yeah.");
VoicePlay("B100500000_05_070");
MsgDisp("Hiiragi","I'm glad.
Ah, is your house nearby?");
MsgDisp("主人公","Yeah it's alright.
Be careful on your way home.");
VoicePlay("B100500000_05_080");
MsgDisp("Hiiragi","Yes, please be careful.
I'll see you then.");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","(｛柊＊＊＊｝ called me out of concern...)");
MsgClose();
ScrFadeOut(0,0);
