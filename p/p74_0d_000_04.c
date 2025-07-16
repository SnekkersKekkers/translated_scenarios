MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Yayー!
A huge success∈))");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
SEWait();
ChOpen(21,254,3,3,3,#1,#1,0,1);
ChOpen(22,254,0,3,3,#1,#1,0,2);
VoicePlay("P740D00004_21_000");
MsgDisp("Michiru","Congratulations, Mari.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,5,1);
ChEyeOpenLevel(22,0);
VoicePlay("P740D00004_22_000");
MsgDisp("Hikaru","It was the ultimate stage～!
Hikaru felt like crying!");
MsgDisp("主人公","｛みちる＊｝,
｛ひかる＊｝...
Thank you!");
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,4);
VoicePlay("P740D00004_21_010");
MsgDisp("Michiru","I want to keep supporting Mari until she
puts on her real wedding dress.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("P740D00004_22_010");
MsgDisp("Hikaru","Hikaru too!");
ChEye(22,4);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("P740D00004_22_020");
MsgDisp("Hikaru","Ah... but, also I don't think I want to
hand her away to anyone Eheh▼");
MsgDisp("主人公","(Hehe!
I'm glad I devoted myself to the
handicrafts club these last three years!)");
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChClose(21,0,0);
ChClose(22,0,0);
