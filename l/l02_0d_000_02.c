BGOpen("sc510",0);
ChLayout(1);
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(21,254,0,0,0,-1,-1,0,1,0,30);
ChOpen(22,254,0,3,3,-1,-1,0,2,0,30);
ScrFadeIn(0);
ChMotion(22,4,1);
VoicePlay("L020D00002_22_000");
MsgDisp("Hikaru","Hi～ Mari▼
Did you prepare your chocolate?");
MsgDisp("主人公","Yeah, of course!");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("L020D00002_21_000");
MsgDisp("Michiru","That's a nice smile.
Won't the boys receiving your chocolate
get knocked out from just that?");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("L020D00002_22_010");
MsgDisp("Hikaru","I want to see that, but I'll endure.
Good luck～!");
MsgDisp("主人公","Thank you!");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(21,0,0);
ChClose(22,0,0);
