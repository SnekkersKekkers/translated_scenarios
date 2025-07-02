MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Haa, a fail.
I fell down...)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(7,254,0,2,0,-1,-1,0,0);
VoiceEVSPlay(7);
VoicePlay("P740700003_07_000");
MsgDisp("Mikage","｛主人公｝, are you alright?");
MsgDisp("主人公","Yes, I'm fine, but...");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("P740700003_07_010");
MsgDisp("Mikage","It doesn't seem like you're injured.
Then, there's no problem.");
MsgDisp("主人公","Eh?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("P740700003_07_020");
MsgDisp("Mikage","That's right. Your beautiful dress was
popular wasn't it?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("P740700003_07_030");
MsgDisp("Mikage","You're not in the modelling club, 
but the handicrafts club.");
MsgDisp("主人公","Yes...");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("P740700003_07_040");
MsgDisp("Mikage","Cheer up.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("P740700003_07_050");
MsgDisp("Mikage","Still, a lack of exercise is a problem.
How about ftom tomorrow onwards, you model
walk to and from school.");
MsgDisp("主人公","(Uugh... I wish I prepared more 
carefully for the show...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
