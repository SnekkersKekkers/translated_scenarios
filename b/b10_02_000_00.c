ChClose(2,0,0);
BGOpen("ex000",1);
ScrFadeIn(0);
MsgDisp("主人公","(Haaa...
I feel like I messed up somewhat
today....)");
SEPlay("EV_SE_579");
MsgDisp("主人公","(An incoming call...?
Ah, it's from ｛颯砂＊＊｝ )");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_579",0);
MsgDisp("主人公","Yes, hello.");
VoicePlay("B100200000_02_000");
MsgDisp("Sassa","Ah-, it's me, it's me.
Is now a good time to call?");
MsgDisp("主人公","Ah, yeah...");
VoicePlay("B100200000_02_010");
MsgDisp("Sassa","I somewhat got a dodgy feeling about
today.");
VoicePlay("B100200000_02_020");
MsgDisp("Sassa","It's my fault.
I spoke in a nasty way.
That's why, I'm sorry.");
MsgDisp("主人公","No, that's not true.
I'm the one who's sorry.");
VoicePlay("B100200000_02_030");
MsgDisp("Sassa","Let's end it with that.");
VoicePlay("B100200000_02_040");
MsgDisp("Sassa","It'll feel weird if there's always this
unpleasant air hanging over us.");
MsgDisp("主人公","...Thank you.
I should have been the one to call.
I'm sorry.");
VoicePlay("B100200000_02_050");
MsgDisp("Sassa","Wait, wait. What am I going to do now that
you're going back to this? Don't
apologize!");
MsgDisp("主人公","Yeah, understood.");
VoicePlay("B100200000_02_060");
MsgDisp("Sassa","That's it.
Then, I'll see you!");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
MsgDisp("主人公","(｛颯砂＊＊｝...is so kind, he called me
out of concern.)");
MsgClose();
ScrFadeOut(0,0);
