BGOpen("fp100",1);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0,1);
BGMPlay("BGM_C07_MIKAGE_C",0.01);
ScrFadeIn(0);
VoicePlay("B360750101_07_000");
MsgDisp("Mikage","Everyone's in a rush at this hour.");
MsgDisp("主人公","Do you want to go home early?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,5);
VoicePlay("B360750101_07_010");
MsgDisp("Mikage","Yeah.
Maybe we should hurry too.");
MsgDisp("主人公","Umm...
I'd like to go slowly.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("B360750101_07_020");
MsgDisp("Mikage","Haha, okay.
Shall we take three steps forward and two
steps back?");
MsgDisp("主人公","Hehe, sure.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,5);
VoicePlay("B360750101_07_030");
MsgDisp("Mikage","Hey you can't just say \"okay\" aren't you
going to say something about it?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("B360750101_07_040");
MsgDisp("Mikage","...Geez, what an interesting person.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(7);
VoicePlay("B360750101_07_050");
MsgDisp("Mikage","Come on, hurry up slowly.");
MsgDisp("主人公","Okay.");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChLayout(1);
ChOpen(7,255,7,0,0,#1,#1,0,0,0,0);
