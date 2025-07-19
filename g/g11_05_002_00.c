BGOpen("sc510",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I'll try going to a student council
meeting for the first time in a while...)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0,0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
SEPlay("EV_SE_DOOR_019");
SEWait();
MsgDisp("主人公","Pardon the intrusion.");
VoiceEVSPlay(5);
VoicePlay("G110500200_05_000");
MsgDisp("Hiiragi?","｛主人公｝, what's the matter?");
BGOpen("ev005",0);
MsgClose();
BGMPlay("BGM_C05_HIIRAGI_B",0.01);
ChOpen(5,100,0,0,1,#1,#1,0,0);
SEPlay("EV_SE_712");
ScrFadeIn(0);
MsgDisp("主人公","Eh...
｛柊＊＊＊｝, exactly why?");
ChEye(5,0);
ChMouth(5,1);
ChMotion(5,2);
ChEyeOpenLevel(5,0);
SEStop("EV_SE_712",0);
VoicePlay("G110500200_05_010");
MsgDisp("Hiiragi","I wonder why? I've retired from the
student council leadership committee, but
I still find myself going here from time
to time.");
ChMouth(5,1);
ChMotion(5,0);
ChEyeOpenLevel(5,#1);
MsgDisp("主人公","Hehe, is that so?
Me too, for some reason.");
VoicePlay("G110500200_05_020");
MsgDisp("Hiiragi","Were we drawn in by each other?");
MsgDisp("主人公","Eh?");
ChEye(5,1);
ChMouth(5,1);
ChMotion(5,1);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,12);
VoicePlay("G110500200_05_030");
MsgDisp("Hiiragi","Not, 'Eh?', the two of us acted together
in a play, and reunited here.");
MsgDisp("主人公","This isn't Habataki Castle, but the
student council room, you know.");
ChEyeOpenLevel(5,#1);
VoicePlay("G110500200_05_040");
MsgDisp("Hiiragi","So it's 'Student Council Room: Flames
Rising'?");
MsgDisp("主人公","Hehe!");
SEPlay("EV_SE_SCHOOL_002");
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,13);
VoicePlay("G110500200_05_050");
MsgDisp("Hiiragi","Ah, that's the signal for the show to
begin.");
MsgDisp("主人公","(Even now, I think it's amazing I was able
to perform alongside ｛柊＊＊＊｝...)");
SEStop("EV_SE_SCHOOL_002",1);
BGMStop();
MsgClose();
ScrFadeOut(0,0);
