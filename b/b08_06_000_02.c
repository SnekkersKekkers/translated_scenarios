ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
VoicePlay("B080600001_06_020");
MsgDisp("Himuro","What's wrong?");
MsgDisp("主人公","No, it's a bit...");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
ChEyeOpenLevel(6,0);
VoicePlay("B080600001_06_030");
MsgDisp("Himuro","... Hmph.
Then I'm going home.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(6);
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
