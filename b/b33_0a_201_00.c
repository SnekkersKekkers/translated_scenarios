BGOpen("wf220",0);
ChLayout(2);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3,1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
MsgDisp("主人公","It kinda looks like everyone's going on a
trip doesn't it?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("B330A20100_02_000");
MsgDisp("Sassa","It's definitely like a family trip.");
ChMouth(1,2);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("B330A20100_06_000");
MsgDisp("Himuro","Then you can juts say we're a regular
group of friends can't we?");
ChEye(1,4);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("B330A20100_01_000");
MsgDisp("Kazama","Then, how is this family made up?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("B330A20100_02_010");
MsgDisp("Sassa","Well, if we're talking physique, I'm the
dad, and you're the Mom?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
MsgDisp("主人公","Hehe, how funny.
Are ｛風真＊＊｝ and ｛氷室＊＊｝ brothers?");
ChMouth(1,1);
VoicePlay("B330A20100_01_010");
MsgDisp("Kazama","It's not funny.
I'm clearly the Dad, not based off
appearance, but personality.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
ChEyeOpenLevel(2,7);
VoicePlay("B330A20100_02_020");
MsgDisp("Sassa","You were the only one who decided to judge
it by personality?");
ChMouth(1,0);
ChEyeOpenLevel(1,0);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("B330A20100_02_030");
MsgDisp("Sassa","Well, either way Inori is definitely the
son.");
ChEye(1,0);
ChMouth(1,2);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
ChEyeOpenLevel(6,0);
VoicePlay("B330A20100_06_010");
MsgDisp("Himuro","Seriously, it's not funny at all.
Come on, we have to set off already.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(6,0,30);
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,5);
VoicePlay("B330A20100_02_040");
MsgDisp("Sassa","Wait up, my son!");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
ChClose(2,0,30);
ChClose(1,0,30);
ChLayout(1);
ChOpen(1,255,7,0,2,#1,#1,0,0,0,30);
VoicePlay("B330A20100_06_020");
MsgDisp("Himuro","Hm, what an idiot.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ChEyeOpenLevel(1,8);
VoicePlay("B330A20100_01_020");
MsgDisp("Kazama","He's at the rebellious stage huh.");
MsgDisp("主人公","(Hehe, if we were really a family...
It might be kind of interesting?)");
MsgClose();
ScrFadeOut(0);
ChClose(1,0,0);
ChLayout(2);
ChOpen(2,253,7,0,0,#1,#1,0,0,0,0);
ChPosition(2,3);
ChOpen(1,253,7,0,0,#1,#1,0,0,0,0);
ChPosition(1,3);
ChOpen(6,253,7,0,0,#1,#1,0,0,0,0);
ChPosition(6,3);
