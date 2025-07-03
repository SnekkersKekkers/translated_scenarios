BGOpen("ho210",2);
ScrFadeIn(0);
MsgDisp("主人公","Ah, there's a new 
voicemail in my inbox...?
Who is it?");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
VoicePlay("B090600000_06_000");
MsgDisp("Himuro","Hello, it's me.");
MsgDisp("主人公","Huh, ｛氷室＊＊｝?");
VoicePlay("B090600000_06_010");
MsgDisp("Himuro","You know why I called you right?");
VoicePlay("B090600000_06_020");
MsgDisp("Himuro","Normally, if something happens you 
should at least get in touch right? 
You should properly reflect for 
wasting someone's time. That's all.");
SEWait();
MsgDisp("主人公","I've done it!
I got the date meeting spot wrong...!");
MsgClose();
ScrFadeOut(0,0);
