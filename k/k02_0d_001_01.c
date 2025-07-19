BGOpen("sc510",0);
ChLayout(1);
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(21,254,0,0,0,#1,#1,0,1);
ChOpen(22,254,0,0,3,#1,#1,0,2);
ScrFadeIn(0);
ChMotion(22,3,1);
VoicePlay("K020D00101_22_000");
MsgDisp("Hikaru","Found you, Mari!");
MsgDisp("主人公","｛みちる＊｝, ｛ひかる＊｝.
What's up?");
ChEye(21,4);
ChMouth(21,0);
ChMotion(21,4);
VoicePlay("K020D00101_21_000");
MsgDisp("Michiru","It's a little late, but...
Happy birthday.");
MsgDisp("主人公","Thank you!");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("K020D00101_22_010");
MsgDisp("Hikaru","This is the present that Hikaru chose.
Here you go▼");
SEPlay("EV_SE_665");
SEWait();
MsgDisp("主人公","Wah, I'm so happy!");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,0,1);
ChEyeOpenLevel(22,0);
VoicePlay("K020D00101_22_020");
MsgDisp("Hikaru","Ehehe, Hikaru's happy too♪
Open it later～!");
MsgClose();
SEPlay("EV_SE_856");
BGMStop();
ChClose(21,0,30);
ChClose(22,0,30);
MsgClose();
ScrFadeOut(0,0);
