BGOpen("sc710",0);
ChLayout(1);
ScrFadeIn(0);
MsgClose();
SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
SEWait();
ChOpen(1,254,0,2,3,0,-1,0,0);
VoicePlay("F110110001_01_000");
MsgDisp("Kazama","Hah...");
MsgDisp("主人公","Oh, ｛風真＊＊｝.
What's the matter?");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("F110110001_01_010");
MsgDisp("Kazama","This year, I had to come before the
General Store Simon customers could catch
me.");
SEPlay("EV_SE_FOOT_RUN_COME_TWO");
SEWait();
VoicePlay("F110110001_48_000");
MsgDisp("School Girl A","Kazama-senpai, 
can't we walk around together?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("F110110001_01_020");
MsgDisp("Kazama","Ah.");
VoicePlay("F110110001_46_000");
MsgDisp("School Girl B","Kazama-senpai, go with me, too～
I want to enjoy the festival!");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("F110110001_01_030");
MsgDisp("Kazama","Um, well--");
SEPlay("EV_SE_802",0,0.6);
Wait(130,1);
SEStop("EV_SE_802",2);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("F110110001_47_000");
MsgDisp("Broadcast","Habataki High School 2nd year Kazama
Ryouta, please come to the staff room. The
Respect-Senior-Citizens association is
here.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,2);
ChEyeOpenLevel(1,8);
VoicePlay("F110110001_01_040");
MsgDisp("Kazama","Huh? The Respect-Senior-Citizens
association? ...oh, my grandfather's
suggestion.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,1);
VoicePlay("F110110001_01_050");
MsgDisp("Kazama","Sorry everyone!
Don't follow me!");
VoicePlay("F110110001_48_010");
MsgDisp("School Girl A","Huh? Kazama-senpai!");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(16,0);
ChEye(1,2);
ChMouth(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("F110110001_01_060");
MsgDisp("Kazama","I'll see you later. If you have time,
let's walk around together.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
MsgDisp("主人公","(It's another bad year for ｛風真＊＊｝, 
huh...)");
MsgClose();
ScrFadeOut(0,0);
