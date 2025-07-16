BGOpen("sc510",0);
ChLayout(1);
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(21,254,0,0,0,#1,#1,0,1,0,30);
ChOpen(22,254,0,3,3,#1,#1,0,2,0,30);
ScrFadeIn(0);
ChMotion(22,4,1);
VoicePlay("L020D00003_22_000");
MsgDisp("Hikaru","Hi～
Mari.
Today's Valentine's♪");
MsgDisp("主人公","Yeah, I'm ready.");
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("L020D00003_21_000");
MsgDisp("Michiru","Prepare your heart too, okay?
I hope Mari's feelings get conveyed.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("L020D00003_22_010");
MsgDisp("Hikaru","Hikaru too.
Good luck!");
MsgDisp("主人公","Thank you!");
MsgClose();
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(21,0,0);
ChClose(22,0,0);
