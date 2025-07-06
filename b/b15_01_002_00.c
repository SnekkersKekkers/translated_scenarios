BGOpen("ho000",2);
ChLayout(1);
MsgClose();
ChOpen(1,255,0,0,2,-1,-1,7,0);
ScrFadeIn(0);
ChEye(1,2);
ChEyeOpenLevel(1,0);
VoicePlay("B150100200_01_000");
MsgDisp("Kazama","Phew..");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChCheek(1,5);
VoicePlay("B150100200_01_010");
MsgDisp("Kazama","Hey, you.
Did you keep that promise...?");
MsgDisp("主人公","Promise?");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
ChCheek(1,0);
VoicePlay("B150100200_01_020");
MsgDisp("Kazama","To not do it to other guys.");
MsgDisp("主人公","Y-Yeah.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("B150100200_01_030");
MsgDisp("Kazama","Oi, don't give me a vague reply.
I've been holding back because
we had a promise.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("B150100200_01_040");
MsgDisp("Kazama","If you break it...
I'll return the favour three-fold, 
English style.");
MsgDisp("主人公","Three-fold∋
...Got it.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B150100200_01_050");
MsgDisp("Kazama","If you get it, that's fine.
See you.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
MsgDisp("主人公","(A English style repayal three-fold...
Seems kinda intense...)");
MsgClose();
ScrFadeOut(0,0);
