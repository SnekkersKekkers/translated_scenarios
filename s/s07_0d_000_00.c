BGOpen("ex020",0);
ChLayout(1);
MsgClose();
ChOpen(21,255,0,0,0,#1,#1,0,1,0,30);
ChOpen(22,255,0,0,3,#1,#1,0,2,0,30);
ScrFadeIn(0);
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,5,1);
ChEyeOpenLevel(22,0);
VoicePlay("S070D00000_22_000");
MsgDisp("Hikaru","It's burning up～!
The tension is rising～!");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,4);
VoicePlay("S070D00000_21_000");
MsgDisp("Michiru","Hikaru, calm down.
You'll disturb the gods.");
MsgDisp("主人公","Hehe!");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("S070D00000_22_010");
MsgDisp("Hikaru","Has Mari decided what to wish for?");
MsgDisp("主人公","It's a secret.");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("S070D00000_21_010");
MsgDisp("Michiru","Hehe, good choice.");
ChEye(22,2);
ChMouth(22,5);
ChMotion(22,5,1);
VoicePlay("S070D00000_22_020");
MsgDisp("Hikaru","Eeーh, sis.
What does that mean～∋");
MsgDisp("主人公","(The two of them are already doing well
this year, huh.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(21,0,0);
ChClose(22,0,0);
