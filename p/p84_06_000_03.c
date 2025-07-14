ScrFadeIn(0);
MsgDisp("主人公","Huh?
Where is the cardboard...?");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(6,254,2,1,0,0,#1,0,0);
VoicePlay("P840600003_06_000");
MsgDisp("Himuro","Have you still not found it?");
MsgDisp("主人公","Yeah. Even though it was supposed to be
here...");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
ChEyeOpenLevel(6,8);
VoicePlay("P840600003_06_010");
MsgDisp("Himuro","Hey, is this it?");
MsgDisp("主人公","Ah! It was there!");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("P840600003_06_020");
MsgDisp("Himuro","...How about being more careful?");
MsgDisp("主人公","(Uuugh... a huge fail...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
