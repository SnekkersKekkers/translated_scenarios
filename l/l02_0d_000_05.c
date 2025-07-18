BGOpen("sc510",0);
ChLayout(1);
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(21,254,0,0,0,#1,#1,0,1,0,30);
ChOpen(22,254,0,3,3,#1,#1,0,2,0,30);
ScrFadeIn(0);
ChMotion(22,4,1);
VoicePlay("L020D00005_22_000");
MsgDisp("Hikaru","Hi～ Mari. It's our last Valentine's in
high school, are you ready?");
MsgDisp("主人公","Yes, one way or another.");
ChEye(21,4);
ChMouth(21,0);
ChMotion(21,4);
VoicePlay("L020D00005_21_000");
MsgDisp("Michiru","Since it's the last one, I really wanted
to make chocolate together, but...you
know?");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("L020D00005_22_010");
MsgDisp("Hikaru","But Hikaru would be happy receiving
chocolate from Mari too▼
Right?");
MsgDisp("主人公","Hehe, thank you!");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(21,0,0);
ChClose(22,0,0);
