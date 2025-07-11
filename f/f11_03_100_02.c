BGOpen("sc710",0);
MsgClose();
ChOpen(3,254,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(3);
VoicePlay("F110310002_03_000");
MsgDisp("Honda","｛主人公｝.");
MsgDisp("主人公","Ah, ｛本多＊＊｝,
You're not doing it this year?");
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("F110310002_03_010");
MsgDisp("Honda","The quiz haircut battle?");
MsgDisp("主人公","Yes, that.
Last year, it was kind of popular.");
ChEye(3,2);
ChMouth(3,3);
ChMotion(3,0,1);
VoicePlay("F110310002_03_020");
MsgDisp("Honda","Well, it was popular in a different
way than what I'd assumed.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,1,1);
VoicePlay("F110310002_03_030");
MsgDisp("Honda","I always cut my own hair,
So I wanted to show off my skills.");
MsgDisp("主人公","But no one could beat you
in a quiz battle, right?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,4,1);
VoicePlay("F110310002_03_040");
MsgDisp("Honda","Yep, that's right.
Well, this year—");
VoicePlay("F110310002_47_000");
MsgDisp("Broadcast","The annual Quiz Haircut Battle is outside
the school gate this year. If you want to 
participate, please come to the gate.");
MsgDisp("主人公","No way...");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1,1);
ChEyeOpenLevel(3,0);
VoicePlay("F110310002_03_050");
MsgDisp("Honda","Huh.
They're going to do something big. Like,
a massive quiz tournament.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("F110310002_03_060");
MsgDisp("Honda","So, I would give a haircut to
whoever lost to me.");
MsgDisp("主人公","Huh∋
Well, what's the point in that?!");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,1,1);
VoicePlay("F110310002_03_070");
MsgDisp("Honda","You think so? I do, too.");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,0,1);
VoicePlay("F110310002_03_080");
MsgDisp("Honda","There's no prize, so it's more
like a punishment game, you know?");
ChEye(3,1);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("F110310002_03_090");
MsgDisp("Honda","I'd only give you a haircut if you won.
So why would you want to lose?");
MsgDisp("主人公","Y-Yeah.
You'd definitely want to win, right?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("F110310002_03_100");
MsgDisp("Honda","Well, I get it now.
Seeya.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(3);
MsgDisp("主人公","(I don't think ｛本多＊＊｝ will lose
this year, either...)");
MsgClose();
ScrFadeOut(0,0);
