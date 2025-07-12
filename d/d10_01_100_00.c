BGOpen("sc500",0);
ChLayout(1);
ScrFadeIn(0);
MsgClose();
BGMPlay("BGM_C01_RYOUTA_A",0.01);
ChOpen(1,254,0,0,3,#1,#1,0,0);
VoiceEVSPlay(1);
VoicePlay("D100110000_01_000");
MsgDisp("Kazama","｛主人公｝, listen.");
MsgDisp("主人公","Good Morning, ｛風真＊＊｝.
What's up?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("D100110000_01_010");
MsgDisp("Kazama","I had a strange dream.
I was in an English garden with you.");
MsgDisp("主人公","And then?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("D100110000_01_020");
MsgDisp("Kazama","I was waiting for you somewhere that
looked like a tower, overlooking the
garden.");
ChMotion(1,0);
Wait(12,0);
ChEye(1,0);
ChMouth(1,3);
VoicePlay("D100110000_01_030");
MsgDisp("Kazama","So I went next door and there were blue
roses everywhere, like they were
celebrating something.");
MsgDisp("主人公","Hehe, that sounds lovely.
Like a garden wedding!");
ChEye(1,3);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("D100110000_01_040");
MsgDisp("Kazama","......That's it. That's a good
interpretation. Thanks.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(1);
MsgDisp("主人公","(｛風真＊＊｝ has such interesting dreams.
Huh, that garden sounds familiar
somehow......)");
MsgClose();
ScrFadeOut(0,0);
