MsgClose();
BGOpen("ho000",2);
ChLayout(1);
ChNanaType(#1);
ChOpen(4,253,0,0,1,0,#1,0,0);
ScrFadeIn(0);
ChMotion(4,1,1);
VoicePlay("B150400300_04_000");
MsgDisp("Nanatsumori","Haaー...");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
ChEyeOpenLevel(4,8);
VoicePlay("B150400300_04_010");
MsgDisp("Nanatsumori","Countdown start.");
MsgDisp("主人公","Eh?");
VoicePlay("B150400300_04_020");
MsgDisp("Nanatsumori","A countdown until I lose my senses.
I'm already at my limit.");
VoicePlay("B150400300_04_030");
MsgDisp("Nanatsumori","You broke me.
Get ready.");
MsgDisp("主人公","Umm... sorry?");
VoicePlay("B150400300_04_040");
MsgDisp("Nanatsumori","Yeah, thats' even worse.
It's just provoking meー.");
MsgDisp("主人公","Ugh...
｛七ツ森＊｝, you're different to usual?");
ChEye(4,0);
ChMouth(4,1);
ChMotion(4,1,1);
VoicePlay("B150400300_04_050");
MsgDisp("Nanatsumori","Even you're acting differently 
to usual too? You don't do 
things like that at school.");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,0,1);
VoicePlay("B150400300_04_060");
MsgDisp("Nanatsumori","Why do you only change 
so completely on our date?
Should I also respond by 
doing the same?");
MsgDisp("主人公","That...");
ChMouthOpenLevel(4,#1);
VoicePlay("B150400300_04_070");
MsgDisp("Nanatsumori","…………");
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,2,1);
VoicePlay("B150400300_04_080");
MsgDisp("Nanatsumori","You already broke me.
Later then...");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
ChClose(4,0,30);
VoicePlay("B150400300_04_090");
MsgDisp("Nanatsumori","Next time... might 
really be no good.");
MsgDisp("主人公","(What does he mean by no good...)");
MsgClose();
ScrFadeOut(0,0);
