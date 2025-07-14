BGOpen("ho210",2);
ScrFadeIn(0);
MsgDisp("主人公","Oh, I've got a voicemail...
I wonder who from...");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEWait();
VoicePlay("B090300000_03_000");
MsgDisp("Honda","Hey, where are you now?");
MsgDisp("主人公","This voice..., ｛本多＊＊｝?");
VoicePlay("B090300000_03_010");
MsgDisp("Honda","I'm looking for you but...");
VoicePlay("B090300000_03_020");
MsgDisp("Honda","Huh? Did I get the meeting place wrong?
Sorry, wait for me!");
SEPlay("SYS_SE_RECORD_END");
SEWait();
MsgDisp("主人公","Oh no!
I got the date's meeting place wrong...!");
MsgClose();
ScrFadeOut(0,0);
