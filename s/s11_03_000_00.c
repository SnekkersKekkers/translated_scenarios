ChLayout(1);
SEPlay("EV_SE_836");
SEWait();
MsgDisp("主人公","｛本多＊＊｝, what does it say?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("S110300000_03_000");
MsgDisp("Honda","Excellent Luck.");
VoicePlay("S110300000_03_010");
MsgDisp("Honda","\"Stand your ground and wait for the right
time, if you do your wish will be
fulfilled\".");
MsgDisp("主人公","That's great!");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("S110300000_03_020");
MsgDisp("Honda","Hmm, but I'm not so great at waiting.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("S110300000_03_030");
MsgDisp("Honda","I'll just accept the Excellent Luck with
gratitude and move forward without
waiting!");
MsgDisp("主人公","(Hehe, that's just like ｛本多＊＊｝, huh?)");
ChEyeOpenLevel(3,#1);
ChCheek(3,0);
