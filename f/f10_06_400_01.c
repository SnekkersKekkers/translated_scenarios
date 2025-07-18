BGOpen("sc510",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I'm finished once I submit the log...)");
VoiceEVSPlay(1);
VoicePlay("F100640001_01_000");
MsgDisp("Kazama?","｛主人公｝.");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(1,254,0,0,0,#1,#1,0,0);
MsgDisp("主人公","Ah, ｛風真＊＊｝.
Are you heading home already?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("F100640001_01_010");
MsgDisp("Kazama","Ah.
I'm waiting for you to finish work.");
MsgDisp("主人公","I see, thank you.
I've still got a little to go so...");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("F100640001_01_020");
MsgDisp("Kazama","Alright, alright.
I'll be waiting.");
VoiceEVSPlay(6);
VoicePlay("F100640001_06_000");
MsgDisp("Himuro?","｛主人公｝.");
ChMouth(1,2);
ChEyeOpenLevel(1,8);
MsgDisp("主人公","...Yes?");
ChMotion(1,0);
ChPosition(1,1);
MsgClose();
SEPlay("EV_SE_544");
ChOpen(6,254,0,0,0,#1,#1,0,2);
VoicePlay("F100640001_06_010");
MsgDisp("Himuro","You're going to submit the log, right?
I heard Kojiro-sensei is going home early
today.");
MsgDisp("主人公","Eh∋");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("F100640001_06_020");
MsgDisp("Himuro","I have some business with him too, so
let's go together.
Ryota-senpai, please wait here.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("F100640001_01_030");
MsgDisp("Kazama","I'm going too.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
ChEyeOpenLevel(6,7);
VoicePlay("F100640001_06_030");
MsgDisp("Himuro","Why are you going to the trouble of making
it a trio?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("F100640001_01_040");
MsgDisp("Kazama","Why do you have to go as a two?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("F100640001_06_040");
MsgDisp("Himuro","That's because I have some business with
him.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("F100640001_01_050");
MsgDisp("Kazama","I also have some business with him now,
too.");
MsgDisp("主人公","(...Hmm?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
