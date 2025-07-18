ChLayout(1);
ScrFadeIn(0);
MsgClose();
ChOpen(7,255,0,0,0,#1,#1,0,0);
VoicePlay("B050700100_07_000");
MsgDisp("Mikage","Then, I'll walk you home.
...We can talk whilst walking.");
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEWait();
BGOpen("ho000",2);
ScrFadeIn(0);
MsgDisp("主人公","｛御影＊＊｝, thank you
for walking me home.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("B050700100_07_010");
MsgDisp("Mikage","Today's walk home was peaceful wasn't it?");
MsgDisp("主人公","Eh?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("B050700100_07_020");
MsgDisp("Mikage","Is it because I submitted to your fierce
attack the other day?");
MsgDisp("主人公","Are you...talking about skinship?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("B050700100_07_030");
MsgDisp("Mikage","That's right.
This type.");
MsgClose();
ScrFadeOut(0);
ChClose(7);
SEPlay("EV_SE_504");
SEWait();
Wait(5,0);
BGMPlay("BGM_C07_MIKAGE_B",0.01);
StlOpen("ev_07_02");
StlEye(7,0);
StlMouth(7,0);
ScrFadeIn(0);
VoicePlay("B050700100_07_040");
MsgDisp("Mikage","......");
MsgDisp("主人公","...?");
StlEye(7,0);
StlMouth(7,1);
VoicePlay("B050700100_07_050");
MsgDisp("Mikage","Thank you.
You saw how troubled I was and stopped
playing around right?");
MsgDisp("主人公","Eh....");
StlEye(7,0);
StlMouth(7,1);
StlEyeOpenLevel(7,5);
VoicePlay("B050700100_07_060");
MsgDisp("Mikage","This is as much retaliation as I can
muster.");
MsgDisp("主人公","...｛御影＊＊｝?");
StlEye(7,0,0);
StlMouth(7,1);
StlEyeOpenLevel(7,0,1);
VoicePlay("B050700100_07_070");
MsgDisp("Mikage","Ehhh, I feel relieved.
When I do this.");
StlEye(7,0);
StlMouth(7,0);
VoicePlay("B050700100_07_080");
MsgDisp("Mikage","Phew...it's over.");
MsgClose();
SEPlay("EV_SE_781",2,0.8,0.5);
ScrFadeOut(0);
StlClose();
BGOpen("ho000",2);
ChLayout(0);
MsgClose();
ChOpen(7,255,0,2,0,#1,#1,0,0);
SEStop("EV_SE_781",0.4);
BGMVol(0.5,2);
ScrFadeIn(0);
VoicePlay("B050700100_07_090");
MsgDisp("Mikage","I don't have the guts, so I couldn't even
move a single step.");
MsgDisp("主人公","...What's wrong?");
ChEye(7,2);
ChMouth(7,3);
ChMotion(7,2);
VoicePlay("B050700100_07_100");
MsgDisp("Mikage","What is wrong, I wonder.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("B050700100_07_110");
MsgDisp("Mikage","That sort of cowardly me, thanks to you
was able to take a small step today.");
MsgDisp("主人公","Take a step?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("B050700100_07_120");
MsgDisp("Mikage","That's right.
Even if it was just a small step.
I was able to do it because you guided me.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("B050700100_07_130");
MsgDisp("Mikage","...Thank you.");
MsgDisp("主人公","｛御影＊＊｝...");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT",0,0.5,0.3);
ChClose(7);
ChLayout(1);
MsgClose();
ChOpen(7,255,2,0,0,#1,#1,0,0);
SEWait();
VoicePlay("B050700100_07_140");
MsgDisp("Mikage","Phew...See you, it'll be the same as
usual tomorrow. Well then.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(7);
MsgDisp("主人公","(｛御影＊＊｝ held my hand in his...
But, what did he mean by take a step
forward?)");
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(7,0);
