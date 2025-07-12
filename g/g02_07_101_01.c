ChLayout(1);
MsgClose();
ChOpen(7,255,0,0,0,#1,#1,0,0);
VoicePlay("G020710101_07_000");
MsgDisp("Mikage","When you stand here, 
you can hear people's inner voices, right?");
MsgDisp("主人公","Yes, 
that's how it goes in the rumour.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
ChEyeOpenLevel(7,0);
VoicePlay("G020710101_07_010");
MsgDisp("Mikage","…………");
SEPlay("EV_SE_644");
SEWait();
ChEye(7,1);
ChMouth(7,5);
ChMotion(7,5);
ChEyeOpenLevel(7,10);
VoicePlay("G020710101_07_020");
MsgDisp("Mikage","Uwah∋
Don't startle me like that.");
MsgDisp("主人公","Haaa, I was surprised.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G020710101_07_030");
MsgDisp("Mikage","Two fish jumping at the same time?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("G020710101_07_040");
MsgDisp("Mikage","......Could it be, are those two sulking?");
MsgDisp("主人公","Those two?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G020710101_07_050");
MsgDisp("Mikage","Yanosuke and Inori. Maybe they're angry
because they want to have fun together
like the other day?");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,4);
VoicePlay("G020710101_07_060");
MsgDisp("Mikage","Haa, at least give it a rest for today,
Ah, could that be the inner voice?");
MsgDisp("主人公","(Does that mean......
those two want to be here with me?
If that's the case, I'd be happy.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(7,#1);
ChMouthOpenLevel(7,#1);
ChCheek(7,0);
