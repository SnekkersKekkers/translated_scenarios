BGOpen("sc530",0);
ChLayout(2);
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(2,254,0,0,4,#1,#1,0,0,0,30);
ChOpen(1,254,0,0,0,#1,#1,0,1,0,30);
ChOpen(6,254,0,0,0,#1,#1,0,2,0,30);
ScrFadeIn(0);
MsgDisp("主人公","Ah, what are you all gathered here talking
about?");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("D130A00001_06_000");
MsgDisp("Himuro","That's a new opener.");
ChEye(1,4);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("D130A00001_01_000");
MsgDisp("Kazama","Really?
I thought that was quite standard for her.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("D130A00001_06_010");
MsgDisp("Himuro","Hmmm, as expected of childhood friends.");
MsgDisp("主人公","Ummm... what is it?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
ChCheek(2,10);
VoicePlay("D130A00001_02_000");
MsgDisp("Sassa","\"W-What\" you say?
That is, well, you know, \"that\".");
ChMouth(1,2);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("D130A00001_06_020");
MsgDisp("Himuro","Your childhood friend over here is
completely conscious over it.");
ChEye(1,2);
ChMouth(1,0);
ChEyeOpenLevel(1,0);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,2);
VoicePlay("D130A00001_02_010");
MsgDisp("Sassa","It'll be hard for you if everyone is
altogether.
That's why I'll head over there by myself.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(2,0,30);
ChEye(1,0);
ChMouth(1,2);
Wait(120,1);
MsgClose();
ChClose(1,0,30);
ChClose(6,0,30);
ChLayout(1);
MsgClose();
ChOpen(1,254,0,2,2,0,#1,0,1,0,30);
ChOpen(6,254,0,0,4,#1,#1,0,2,0,30);
MsgDisp("主人公","Hm?");
ChMotion(1,1);
VoicePlay("D130A00001_01_010");
MsgDisp("Kazama","Notice already.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("D130A00001_06_030");
MsgDisp("Himuro","What day is it today?
That's all I'll say.
... Well then.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
BGMStop();
ChClose(1,0,30);
ChClose(6,0,30);
MsgDisp("主人公","(Ah, today is Valentine's day.
That's why everyone is so excited.)");
MsgClose();
ScrFadeOut(0);
ChLayout(1);
