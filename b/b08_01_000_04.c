ChPosition(1,0);
Wait(60,0);
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,3);
VoicePlay("B080100004_01_000");
MsgDisp("Kazama","What's up with that guy....
Are you alright?");
MsgDisp("主人公","Y-yeah.
Maybe they have something they need?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("B080100004_01_010");
MsgDisp("Kazama","At this time?");
MsgDisp("主人公","Yeah...");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("B080100004_01_020");
MsgDisp("Kazama","It's late, so talk in front of 
your house. I'm going now.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
