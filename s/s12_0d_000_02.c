MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(21,#1);
ChMouthOpenLevel(21,#1);
ChCheek(21,0);
ChEyeOpenLevel(22,#1);
ChMouthOpenLevel(22,#1);
ChCheek(22,0);
BGOpen("ex020",0);
ChLayout(1);
ScrFadeIn(0);
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("S120D00002_21_000");
MsgDisp("Michiru","I guess this is the end of our visit.");
ChEye(22,2);
ChMouth(22,5);
ChMotion(22,0,1);
VoicePlay("S120D00002_22_000");
MsgDisp("Hikaru","Ehー. But Hikaru wants to play with Mari
more!");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,4);
VoicePlay("S120D00002_21_010");
MsgDisp("Michiru","I do too but...
Have some restraint.
I'm sure Mari has other things to do.");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("S120D00002_22_010");
MsgDisp("Hikaru","Oh, I guess you're right!
Mari, see you at school▼");
MsgDisp("主人公","Yeah!
Thank you for inviting me today.");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("S120D00002_21_020");
MsgDisp("Michiru","No problem.
We'll be third year students this year.
Let's help each other out.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("S120D00002_22_020");
MsgDisp("Hikaru","Let's play a lot this year!
A bientot!");
MsgClose();
SEPlay("EV_SE_856");
ChClose(21,0,30);
ChClose(22,0,30);
MsgDisp("主人公","(I wonder what the New Year holds...
I'm looking forward to it!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
