BGOpen("sc510",0);
ChLayout(1);
MsgClose();
ChOpen(21,254,0,0,0,#1,#1,0,1,0,30);
ChOpen(22,254,0,3,3,#1,#1,0,2,0,30);
BGMPlay("BGM_HANYOU_A",0.01);
ScrFadeIn(0);
VoicePlay("L050D00000_21_000");
MsgDisp("Michiru","Good morning, Mari.
Today's White Day.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("L050D00000_22_000");
MsgDisp("Hikaru","You'll definitely get something
in return for Valentine's Day▼");
MsgDisp("主人公","Y-You think so?");
ChEye(21,4);
ChMouth(21,0);
ChMotion(21,4);
VoicePlay("L050D00000_21_010");
MsgDisp("Michiru","Yes.
Today's the day when Mari's feelings
will be returned. I'm excited.");
MsgDisp("主人公","(My feelings will be returned......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(21);
ChClose(22);
