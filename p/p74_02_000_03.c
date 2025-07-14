MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Aah, I failed.
I fell...)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(2,254,4,0,0,#1,#1,0,0);
VoiceEVSPlay(2);
VoicePlay("P740200003_02_000");
MsgDisp("Sassa","｛主人公｝, are you alright?
Are you injured?");
MsgDisp("主人公","Yes, I'm fine.
But, I failed...");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("P740200003_02_010");
MsgDisp("Sassa","That was bad luck.
But, everyone was surprised by your pretty
dress.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("P740200003_02_020");
MsgDisp("Sassa","So, it's a half-success. \
Right?");
MsgDisp("主人公","Y-Yeah.
｛颯砂＊＊｝, thank you...");
MsgDisp("主人公","(Haa... but I wish I had practiced more
carefully....)");
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
