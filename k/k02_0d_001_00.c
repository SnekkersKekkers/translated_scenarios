BGOpen("sc510",0);
ChLayout(1);
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(21,254,0,0,0,-1,-1,0,1);
ChOpen(22,254,0,0,3,-1,-1,0,2);
ScrFadeIn(0);
VoicePlay("K020D00100_21_000");
MsgDisp("Michiru","Mari, I found you.");
MsgDisp("主人公","Ah, ｛みちる＊｝, ｛ひかる＊｝.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("K020D00100_22_000");
MsgDisp("Hikaru","Aha▼
Happy birthday♪");
MsgDisp("主人公","You remembered?
Thank you!");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
SEPlay("EV_SE_665");
SEWait();
VoicePlay("K020D00100_21_010");
MsgDisp("Michiru","This is your present.
I hope that you like it.
Can you open it quietly later?");
MsgDisp("主人公","Yeah!");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,0,1);
ChEyeOpenLevel(22,0);
VoicePlay("K020D00100_22_010");
MsgDisp("Hikaru","We put a lot of thought into choosing
it for you, Mari.
Ehehe▼");
MsgClose();
SEPlay("EV_SE_856");
BGMStop();
ChClose(21,0,30);
ChClose(22,0,30);
MsgClose();
ScrFadeOut(0,0);
