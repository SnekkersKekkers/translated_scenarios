BGOpen("sc500",1);
ChLayout(1);
MsgClose();
BGMPlay("BGM_C22_HIKARU_A",0.01);
ChOpen(22,254,0,0,3,#1,#1,0,0);
ScrFadeIn(0);
ChMotion(22,4,1);
VoicePlay("F122200001_22_000");
MsgDisp("Hikaru","Mari, let's go home together～");
MsgDisp("主人公","Sure.");
BGMStop();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc000",1);
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,0);
ScrFadeIn(0);
ChMotion(22,4,1);
VoicePlay("F122200001_22_010");
MsgDisp("Hikaru","Hey, Mari.
It's almost Valentine's Day, you know～");
MsgDisp("主人公","Yes, that's right.");
ChEye(22,0);
ChMouth(22,2);
ChMotion(22,0,1);
VoicePlay("F122200001_22_020");
MsgDisp("Hikaru","Huh? Why are you so calm about it?");
MsgDisp("主人公","What?");
ChEye(22,2);
ChMouth(22,0);
ChMotion(22,2,1);
ChEyeOpenLevel(22,0);
VoicePlay("F122200001_22_030");
MsgDisp("Hikaru","Come on...
Hikaru really can't stop worrying about
Mari's love life, huh～");
MsgDisp("主人公","Uh...");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("F122200001_22_040");
MsgDisp("Hikaru","Leave it to Hikaru!
With homemade chocolate, Hikaru will 
help at full strength!");
MsgDisp("主人公","(Right, it's almost Valentine's Day...)");
MsgClose();
ScrFadeOut(0,0);
