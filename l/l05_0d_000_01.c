BGOpen("sc510",0);
ChLayout(1);
MsgClose();
ChOpen(21,254,3,0,3,#1,#1,0,1,0,30);
ChOpen(22,254,0,3,3,#1,#1,0,2,0,30);
BGMPlay("BGM_HANYOU_A",0.01);
ScrFadeIn(0);
VoicePlay("L050D00001_21_000");
MsgDisp("Michiru","Good morning, Mari.
This year's White Day has finally come.
The day of all men's decisive battle.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("L050D00001_22_000");
MsgDisp("Hikaru","Make sure to properly accept his feelings
in return, 'kay?");
MsgDisp("主人公","Y-Yeah.
I'm a little nervous...");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,4);
VoicePlay("L050D00001_21_010");
MsgDisp("Michiru","It'll be fine. Just try to be considerate
of them. The thought of Mari is surely
building up inside them.");
MsgDisp("主人公","(They're thinking about me huh...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(21);
ChClose(22);
