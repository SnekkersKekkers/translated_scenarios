BGOpen("sc310",0);
ChLayout(1);
MsgClose();
ChOpen(1,254,0,0,2,10,#1,0,0);
ScrFadeIn(0);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("F100130001_01_000");
MsgDisp("Kazama","...I've got a bad feeling.
Later.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
MsgDisp("主人公","Um, ｛風真＊＊｝?");
SEWait();
VoicePlay("F100130001_22_000");
MsgDisp("Hikaru?","Kazama-kun escaped!");
ChLayout(2);
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(22,254,0,0,3,#1,#1,0,1);
MsgDisp("主人公","Oh, ｛ひかる＊｝.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
ChOpen(1,254,0,0,1,0,#1,0,0);
VoicePlay("F100130001_01_010");
MsgDisp("Kazama","I didn't 'escape'.
I just did what I needed to.");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("F100130001_22_010");
MsgDisp("Hikaru","Oh... are you still upset about what
happened earlier? Sorry♪");
MsgClose();
SEPlay("EV_SE_544",0,0.5);
ChOpen(21,254,0,0,0,#1,#1,0,2);
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,4);
VoicePlay("F100130001_21_000");
MsgDisp("Michiru","Haha. We have no problem with you,
Kazama-kun. We just came to see Mari.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,5,1);
VoicePlay("F100130001_22_020");
MsgDisp("Hikaru","Right, right▼
Mari's so cute whenever she's talking to
Kazama～♪");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("F100130001_01_020");
MsgDisp("Kazama","...is that so?");
MsgDisp("主人公","Wha?");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("F100130001_21_010");
MsgDisp("Michiru","Absolutely.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,4);
ChEyeOpenLevel(1,0);
ChMouthOpenLevel(1,0);
ChCheek(1,5);
VoicePlay("F100130001_01_030");
MsgDisp("Kazama","......");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("F100130001_22_030");
MsgDisp("Hikaru","Oh! But you know, it's not just with
Kazama-kun!");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChCheek(1,0);
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,0,1);
ChEyeOpenLevel(22,0);
VoicePlay("F100130001_22_040");
MsgDisp("Hikaru","When Mari's with Hikaru and the others,
she's like an explosion of cuteness!");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("F100130001_21_020");
MsgDisp("Michiru","Hehe. That's right, so you can't
monopolize her.");
ChEye(22,3);
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,3);
VoicePlay("F100130001_01_040");
MsgDisp("Kazama","I get it.
I guess we all know each other's value.");
MsgDisp("主人公","(I'm glad they made up, but can I really
be happy with this...?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
