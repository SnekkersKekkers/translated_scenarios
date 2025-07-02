MsgDisp("主人公","What sort of TV shows do you watch?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ChEyeOpenLevel(1,8);
VoicePlay("B070100000_01_010");
MsgDisp("Kazama","TV?
Geez, you're such a sheep.");
MsgDisp("主人公","Does ｛風真＊＊｝ not watch it at all?");
ChMotion(1,1);
ChEyeOpenLevel(1,0);
Wait(8,0);
ChEye(1,0);
ChMouth(1,2);
VoicePlay("B070100000_01_020");
MsgDisp("Kazama","I'm not interested, there are so many 
stupid shows. Especially variety shows? 
Pranks and stuff. Watching those 
makes me feel bad.");
ChEyeOpenLevel(1,0);
MsgDisp("主人公","Somethimes they do pretty extreme stuff...");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("B070100000_01_030");
MsgDisp("Kazama","Right? 
I like shows anyone can enjoy...");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("B070100000_01_040");
MsgDisp("Kazama","Hey like \"Fish the World\". ");
MsgDisp("主人公","You like fishing shows?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,2);
ChEyeOpenLevel(1,0);
VoicePlay("B070100000_01_050");
MsgDisp("Kazama","The \"Eating Around the Globe Series\"
is good too. The episode about British
home cooking was incredible.");
MsgDisp("主人公","(Umm, ｛風真＊＊｝ does like TV...)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(1,-1);
ChMouthOpenLevel(1,-1);
ChCheek(1,0);
