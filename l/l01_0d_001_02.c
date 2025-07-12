BGOpen("ho300",2);
ChLayout(1);
MsgClose();
ChOpen(21,255,3,0,3,#1,#1,0,1,0,30);
ChOpen(22,255,0,0,3,#1,#1,0,2,0,30);
ScrFadeIn(0);
VoicePlay("L010D00102_21_000");
MsgDisp("Michiru","There's a lot of girly power in these.
They're very cute.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("L010D00102_22_000");
MsgDisp("Hikaru","Yeah yeah, super cute▼");
MsgDisp("主人公","Yeah, they came out great!");
MsgClose();
ScrFadeOut(0,0);
