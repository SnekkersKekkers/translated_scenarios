BGMStop();
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
MsgDisp("主人公","...I'm sorry.");
ChEye(3,2);
ChMouth(3,0);
ChMotion(3,2,1);
VoicePlay("T020300060_03_000");
MsgDisp("Honda","...I see.");
MsgDisp("主人公","Um, I...");
BGMPlay("BGM_C03_HONDA_C",0.01);
Wait(40,0);
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("T020300060_03_010");
MsgDisp("Honda","Don't worry about it.");
ChEye(3,2);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("T020300060_03_020");
MsgDisp("Honda","If you give me that look, I'll regret
confessing my feelings to you.");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("T020300060_03_030");
MsgDisp("Honda","I will always love this world with you in
it.");
MsgDisp("主人公","｛本多＊＊｝...");
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("T020300060_03_040");
MsgDisp("Honda","Meeting you has made me excited for my
future.
Thank you.");
ChSet(3,3);
ChEyeOpenLevel(3,0);
VoicePlay("T020300060_03_050");
MsgDisp("Honda","Phew...
That's it!");
BGMStop(3.6);
MsgClose();
ScrFadeOut(0,1,120);
ChClose(3,0,0);
Wait(120);
