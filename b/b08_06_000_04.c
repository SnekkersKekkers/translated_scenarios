ChPosition(6,0);
Wait(60,0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
VoicePlay("B080600002_06_010");
MsgDisp("Himuro","Huh? Is
there someone waiting for you?");
MsgDisp("主人公","I-is that right?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
ChEyeOpenLevel(6,0);
VoicePlay("B080600002_06_020");
MsgDisp("Himuro","Well, that's fine though.
It's got nothing to do with me.");
MsgDisp("主人公","Yeah...");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B080600002_06_030");
MsgDisp("Himuro","I'm going home. See you.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(6);
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
