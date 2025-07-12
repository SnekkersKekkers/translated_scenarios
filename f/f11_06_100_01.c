BGOpen("sc710",0);
ChLayout(1);
ScrFadeIn(0);
MsgClose();
ChOpen(6,254,0,0,0,#1,#1,0,0);
VoicePlay("F110610001_06_000");
MsgDisp("Himuro","...");
MsgDisp("主人公","｛氷室＊＊｝?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,5);
VoicePlay("F110610001_06_010");
MsgDisp("Himuro","∋");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("F110610001_06_020");
MsgDisp("Himuro","Oh, it's you.");
MsgDisp("主人公","That's weird. 
Are you skipping this year, too?");
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("F110610001_06_030");
MsgDisp("Himuro","No, I'm being diligent.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("F110610001_06_040");
MsgDisp("Himuro","But, I could feel a gaze...");
MsgDisp("主人公","Is there some job you're forgetting?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("F110610001_06_050");
MsgDisp("Himuro","Maybe.
Well, you asked your questions. 
I'll go back now.");
MsgDisp("主人公","Okay.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(6);
SEWait();
VoicePlay("F110610001_48_000");
MsgDisp("School Girl A","Ah, Himuro-kun.
He already left...");
VoicePlay("F110610001_46_000");
MsgDisp("School Girl B","I should've been braver...
Enough to greet him before he left...");
VoicePlay("F110610001_48_010");
MsgDisp("School Girl A","There's still time.
Go run after him!");
SEPlay("EV_SE_FOOT_RUN_AWAY_TWO",0,0.6);
SEWait();
MsgDisp("主人公","(Maybe... The gaze ｛氷室＊＊｝ said he
felt belonged to them? I wonder if he's
popular.)");
MsgClose();
ScrFadeOut(0,0);
