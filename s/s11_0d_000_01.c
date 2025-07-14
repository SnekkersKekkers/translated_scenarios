MsgDisp("主人公","(I wonder what those two got......)");
SEPlay("EV_SE_836");
SEWait();
ChEye(22,0);
ChMouth(22,2);
ChEyeOpenLevel(22,10);
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,0);
VoicePlay("S110D00001_21_000");
MsgDisp("Michiru","No way......");
VoicePlay("S110D00001_22_000");
MsgDisp("Hikaru","Nooo......");
MsgDisp("主人公","What result did you draw?");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,5,1);
ChEyeOpenLevel(22,0);
VoicePlay("S110D00001_22_010");
MsgDisp("Hikaru","Excellent luck▼
I'm so happy～♪");
ChEyeOpenLevel(22,#1);
ChEye(21,3);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("S110D00001_21_010");
MsgDisp("Michiru","Me too.");
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,4);
VoicePlay("S110D00001_21_020");
MsgDisp("Michiru","I'm already happy everyday, so it's a bit
of a waste......
I'll share some happiness with Mari.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("S110D00001_22_020");
MsgDisp("Hikaru","Hikaru also wants to share her happiness
with Mari▼
Let's stick together this year!");
MsgDisp("主人公","(｛みちる＊｝, ｛ひかる＊｝......
I'm so happy!)");
MsgClose();
ScrFadeOut(0,0);
