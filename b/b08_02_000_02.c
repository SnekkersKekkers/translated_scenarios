ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("B080200002_02_000");
MsgDisp("Sassa","Is there a problem?");
MsgDisp("主人公","I-It's nothing.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("B080200002_02_010");
MsgDisp("Sassa","Well, that's fine.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("B080200002_02_020");
MsgDisp("Sassa","... But if something's up, let me know.");
MsgDisp("主人公","Yes, thank you.
Good night.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("B080200002_02_030");
MsgDisp("Sassa","Yeah.
Then, see you later.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(2);
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
