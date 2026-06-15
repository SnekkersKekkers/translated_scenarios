BGOpen("ho210",2);
ScrFadeIn(0);
MsgDisp("主人公","Huh? There's a new voicemail.
Who is it...");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
VoicePlay("B090400000_04_000");
MsgDisp("Nanatsumori","Hello.
Where are you now?");
MsgDisp("主人公","Huh? It's ｛Nanatsumori＊｝.");
VoicePlay("B090400000_04_010");
MsgDisp("Nanatsumori","We were supposed to go out today.
Don't tell me you forgot.");
VoicePlay("B090400000_04_020");
MsgDisp("Nanatsumori","Anyway, if you can't make it, at least let
me know.
...later.");
SEPlay("SYS_SE_RECORD_END");
SEWait();
MsgDisp("主人公","Crap! I had a date with him today!");
MsgClose();
ScrFadeOut(0,0);
