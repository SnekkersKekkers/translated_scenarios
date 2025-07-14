ChPosition(3,0);
Wait(60,0);
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0);
ChEyeOpenLevel(3,#1);
VoicePlay("B080300002_03_010")MsgDisp("Honda","Oh, they left.
They might have had something to do.");
MsgDisp("主人公","Y-Yeah.
I wonder what happened?");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4);
VoicePlay("B080300002_03_020")MsgDisp("Honda","Maybe you should go after them?");
MsgDisp("主人公","......I think it's okay.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
VoicePlay("B080300002_03_030")MsgDisp("Honda","Is that so?
Okay, I'll head off.
Good night!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(3);
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
