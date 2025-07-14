BGOpen("ho210",2);
ScrFadeIn(0);
MsgDisp("主人公","Ah, there's a new voicemail in my inbox...
Who is it...");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
VoicePlay("B090700000_07_000");
MsgDisp("Mikage","Oii, what's wrong?");
MsgDisp("主人公","｛御影＊＊｝...?");
VoicePlay("B090700000_07_010");
MsgDisp("Mikage","It's fine if you forgot, but you should
contact me if something happened.");
SEPlay("SYS_SE_RECORD_END");
SEWait();
MsgDisp("主人公","Ah, I've done it!
I had an extracurricular lesson today!");
MsgClose();
ScrFadeOut(0,0);
