BGOpen("ho210",2);
ScrFadeIn(0);
MsgDisp("主人公","Huh? There's a new voicemail.
Who is it...");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
VoicePlay("B090800000_08_000");
MsgDisp("Shirahane","Hello, it's me.
...What's wrong?
I'm worried.");
MsgDisp("主人公","Eh, ｛Daichi＊＊｝?");
VoicePlay("B090800000_08_010");
MsgDisp("Shirahane","Don't tell me you forgot?
We were supposed to go on a date today.");
VoicePlay("B090800000_08_020");
MsgDisp("Shirahane","I'll wait a little longer.
Be careful on your way, okay...?");
SEPlay("SYS_SE_RECORD_END");
SEWait();
MsgDisp("主人公","Crap! I had a date with him today!");
MsgClose();
ScrFadeOut(0,0);
