BGOpen("sc500",0);
ChLayout(1);
ScrFadeIn(0);
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(22,254,0,0,3,#1,#1,0,1);
ChOpen(21,254,0,0,0,#1,#1,0,2);
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("F100130002_21_000");
MsgDisp("Michiru","Good morning, Mari.");
MsgDisp("主人公","Oh, ｛みちる＊｝ and ｛ひかる＊｝.
Good morning!");
ChMotion(22,4,1);
VoicePlay("F100130002_22_000");
MsgDisp("Hikaru","Aha▼
The three of us have gathered here
early, so today will be a good day♪");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("F100130002_21_010");
MsgDisp("Michiru","There's one more person though, right?");
MsgClose();
ChClose(22,0,30);
ChClose(21,0,30);
ChLayout(2);
MsgClose();
ChOpen(22,254,0,0,3,#1,#1,0,1,0,30);
ChOpen(21,254,0,0,0,#1,#1,0,2,0,30);
MsgClose();
SEPlay("EV_SE_544");
ChOpen(1,254,0,0,2,8,#1,0,0);
VoicePlay("F100130002_01_000");
MsgDisp("Kazama","Ha...");
MsgDisp("主人公","｛風真＊＊｝?");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("F100130002_01_010");
MsgDisp("Kazama","I get it.
What Hanatsubaki said the other day.");
ChMotion(22,4,1);
VoicePlay("F100130002_22_010");
MsgDisp("Hikaru","About Mari's explosion of cuteness?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("F100130002_01_020");
MsgDisp("Kazama","Yeah, that.");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("F100130002_21_020");
MsgDisp("Michiru","That's right.
It's different from when she's with 
Kazama-kun.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("F100130002_01_030");
MsgDisp("Kazama","It's a good lesson for me.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
MsgClose();
ChClose(22,0,30);
ChClose(21,0,30);
ChLayout(1);
MsgClose();
ChOpen(22,254,0,0,3,#1,#1,0,1,0,30);
ChOpen(21,254,0,0,0,#1,#1,0,2,0,30);
SEWait();
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,4);
VoicePlay("F100130002_21_030");
MsgDisp("Michiru","Haha, as expected of Kazama-kun.
When it's regarding Mari, he's quick to
understand.");
MsgDisp("主人公","(...what in the world was he
quick to understand?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
