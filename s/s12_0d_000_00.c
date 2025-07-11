MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(21,-1);
ChMouthOpenLevel(21,-1);
ChCheek(21,0);
ChEyeOpenLevel(22,-1);
ChMouthOpenLevel(22,-1);
ChCheek(22,0);
BGOpen("ex020",0);
ChLayout(1);
ScrFadeIn(0);
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("S120D00000_21_000");
MsgDisp("Michiru","Hehe, isn't it fun to have a girls
only outting?");
MsgDisp("主人公","Yeah.
Thanks so much you two!");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("S120D00000_22_000");
MsgDisp("Hikaru","It's so nice that we get to see Mari
right at the beginning of the new year♪");
MsgDisp("主人公","Hehe!");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("S120D00000_21_010");
MsgDisp("Michiru","Happy New Year.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("S120D00000_22_010");
MsgDisp("Hikaru","Nice meeting with you, Mari▼
See you at school～!");
MsgClose();
SEPlay("EV_SE_856");
ChClose(21,0,30);
ChClose(22,0,30);
MsgDisp("主人公","(Alright!
Let's try our best this year!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
