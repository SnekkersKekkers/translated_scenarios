ChEyeOpenLevel(2,#1);
ChMouthOpenLevel(2,#1);
ChCheek(2,0);
SEPlay("EV_SE_836");
SEWait();
MsgDisp("主人公","｛颯砂＊＊｝, what does it say?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
ChEyeOpenLevel(2,7);
VoicePlay("S110200001_02_000");
MsgDisp("Sassa","Bad Luck.");
MsgDisp("主人公","I see......");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
ChEyeOpenLevel(2,7);
VoicePlay("S110200001_02_010");
MsgDisp("Sassa","It says \"The person you're 
waiting for won't come \".
What does that mean?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("S110200001_02_020");
MsgDisp("Sassa","That person is already in front of me.");
MsgDisp("主人公","Eh......you mean me?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("S110200001_02_030");
MsgDisp("Sassa","That's right.
And I didn't wait for you, I went to
your house and picked you up.
It's completely wrong.");
MsgDisp("主人公","(｛颯砂＊＊｝ is waiting for me......
Hehe, somehow that makes me feel happy.)");
