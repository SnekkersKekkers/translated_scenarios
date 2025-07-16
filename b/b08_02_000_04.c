ChPosition(2,0);
Wait(60,0);
ChEye(2,0);
ChMouth(2,2);
ChMotion(2,4);
VoicePlay("B080200004_02_000");
MsgDisp("Sassa","What was that just now?");
MsgDisp("主人公","Y-Yeah.
What was the matter I wonder?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("B080200004_02_010");
MsgDisp("Sassa","Well.
I don't know what it is, but if
something's up, tell me.");
MsgDisp("主人公","Y-Yeah, I'll see you then.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("B080200004_02_020");
MsgDisp("Sassa","Then, goodnight!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(2);
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
