BGOpen("sc710",0);
ChLayout(1);
MsgClose();
ChOpen(1,254,0,4,3,#1,#1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(1);
VoicePlay("F110110000_01_000");
MsgDisp("Kazama","｛主人公｝, are you having fun?");
MsgDisp("主人公","Yep!
What about you, ｛風真＊＊｝?");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,4);
ChEyeOpenLevel(1,8);
VoicePlay("F110110000_01_010");
MsgDisp("Kazama","Well, you see...");
VoicePlay("F110110000_47_000");
MsgDisp("Woman Customer A","Ah, found you!
Kazama-kun!");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("F110110000_48_000");
MsgDisp("Woman Customer B","Show us around Habataki High!");
ChEye(1,1);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
Wait(80,1);
ChEye(1,0);
ChMouth(1,3);
VoicePlay("F110110000_01_020");
MsgDisp("Kazama","Um, well, I'm not at Simon today, see,
it's a school festival—");
VoicePlay("F110110000_45_000");
MsgDisp("Girl","Oh, yay!
Big bro Simon, I found you!");
ChEye(1,2);
ChMouth(1,2);
ChEyeOpenLevel(1,0);
VoicePlay("F110110000_49_000");
MsgDisp("Woman","Well, that's good.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("F110110000_01_030");
MsgDisp("Kazama","Agh....");
ChEyeOpenLevel(1,0);
Wait(8,0);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,#1);
VoicePlay("F110110000_01_040");
MsgDisp("Kazama","Haha, it's all good.
I'll guide you now.");
VoicePlay("F110110000_45_010");
MsgDisp("Girl","Yay!");
VoicePlay("F110110000_47_010");
MsgDisp("Woman Customer A","Thank you, Kazama-kun!");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(16,0);
ChEye(1,2);
ChMouth(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("F110110000_01_050");
MsgDisp("Kazama","...I'll see you later.
If you have time then, let's walk around.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
MsgDisp("主人公","(｛風真＊＊｝, you seem tired...
I don't think we can walk around, too...)");
MsgClose();
ScrFadeOut(0,0);
