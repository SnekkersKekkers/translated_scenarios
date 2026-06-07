BGOpen("ho210",2);
ScrFadeIn(0);
MsgDisp("主人公","Ah, I got a voicemail...
I wonder who it's from...");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
VoicePlay("B090700001_07_000");
MsgDisp("Mikage","Oii, what's wrong?");
MsgDisp("主人公","｛Mikage＊＊｝...?");
VoicePlay("B090700001_07_010");
MsgDisp("Mikage","It's fine if you forgot, but you should
contact me if something happened.");
VoicePlay("B090700001_07_020");
MsgDisp("Mikage","See you then, I'm gonna wander back home.");
SEPlay("SYS_SE_RECORD_END");
SEWait();
MsgDisp("主人公","Oh no!
I got the meeting place for our date wrong...!");
MsgClose();
ScrFadeOut(0,0);
