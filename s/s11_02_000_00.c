ChEyeOpenLevel(2,#1);
ChMouthOpenLevel(2,#1);
ChCheek(2,0);
SEPlay("EV_SE_836");
SEWait();
MsgDisp("主人公","｛颯砂＊＊｝, what does it say?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("S110200000_02_000");
MsgDisp("Sassa","Hmm, it says Future Luck.
Should I try again?");
MsgDisp("主人公","Eh?　Read it properly.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
ChEyeOpenLevel(2,8);
VoicePlay("S110200000_02_010");
MsgDisp("Sassa","Ehー, what does it say......
\"Future Luck means you will have more 
good luck in the future than now\".");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,4);
VoicePlay("S110200000_02_020");
MsgDisp("Sassa","Hey, that sounds kind of good!");
MsgDisp("主人公","Hehe!
I'm glad he didn't pick another fortune.");
