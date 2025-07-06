MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I fell...
even though it was my last show...)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(1,254,0,4,2,-1,-1,0,0);
ChEye(1,2);
ChMouth(1,2);
VoicePlay("P740100005_01_000");
MsgDisp("Kazama","Haa, seems like you're not injured.");
MsgDisp("主人公","｛風真＊＊｝...");
ChEyeOpenLevel(1,0);
Wait(8,0);
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,9);
VoicePlay("P740100005_01_010");
MsgDisp("Kazama","You were too worked up.");
MsgDisp("主人公","Y-Yeah...");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
VoicePlay("P740100005_01_020");
MsgDisp("Kazama","Well, this will become a good memory too.
I promise you this.");
MsgDisp("主人公","Promise?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("P740100005_01_030");
MsgDisp("Kazama","Right. Before long,
I'll get you to wear that dress again.
So, don't make that face.");
MsgDisp("主人公","...When?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("P740100005_01_040");
MsgDisp("Kazama","...Good grief, you're impatient.
That's why you fell.");
MsgDisp("主人公","Hey!");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("P740100005_01_050");
MsgDisp("Kazama","You really gave it your
all these last three years. Well, 
let's look frward to your big successes?");
MsgDisp("主人公","(Good memories, huh?
Yeah, in the future I hope I can 
look back on today like that.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
