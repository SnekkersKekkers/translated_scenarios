BGOpen("sc710",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(The festival is even bigger this year...
There must be a lot of non-school
visitors.)");
VoicePlay("F110210002_49_000");
MsgDisp("Woman","What's this? 
\"The Classroom Kiddie Race\"!");
VoicePlay("F110210002_44_000");
MsgDisp("Boy","Wah, let's go, let's go!");
MsgDisp("主人公","(Classroom Kiddie Race...?)");
MsgClose();
ChOpen(2,254,3,0,3,#1,#1,0,0);
VoicePlay("F110210002_02_000");
MsgDisp("Sassa","This year, we registered it with
management. Now, we're doing a class race.");
MsgDisp("主人公","Heh, I see.
That boy earlier looked really happy.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,1);
VoicePlay("F110210002_02_010");
MsgDisp("Sassa","Really?
I'm going to teach that kid to get first
place in sports day.");
MsgDisp("主人公","Haha. Good luck!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(2);
MsgDisp("主人公","(｛颯砂＊＊｝ trains intensely, every
single day. Running with the kids was
fun!)");
MsgClose();
ScrFadeOut(0);
