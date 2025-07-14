BGOpen("ho210",2);
ScrFadeIn(0);
MsgDisp("主人公","Huh? There's a new voicemail in my inbox.
Who is it...");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
VoicePlay("B090400000_04_000");
MsgDisp("Nanatsumori","Hello.
Where are you now?");
MsgDisp("主人公","Huh? It's ｛七ツ森＊｝.");
VoicePlay("B090400000_04_010");
MsgDisp("Nanatsumori","We were supposed to go out today.
There's no way I would forget.");
VoicePlay("B090400000_04_020");
MsgDisp("Nanatsumori","Anyways, if you can't come, at least let
me know.
...see you.");
SEPlay("SYS_SE_RECORD_END");
SEWait();
MsgDisp("主人公","As I thought...
I got the date meeting spot wrong...!");
MsgClose();
ScrFadeOut(0,0);
