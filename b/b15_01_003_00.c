BGOpen("ho000",2);
ChLayout(1);
MsgClose();
ChOpen(1,255,0,0,2,8,#1,7,0);
ScrFadeIn(0);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("B150100300_01_000");
MsgDisp("Kazama","Hey, that's enough.");
MsgDisp("主人公","Ah... I'm sorry.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,3);
VoicePlay("B150100300_01_010");
MsgDisp("Kazama","Don't pretend you've come to your senses.
...Geez, are you okay?");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
ChCheek(1,0);
VoicePlay("B150100300_01_020");
MsgDisp("Kazama","Hey, you know it's been 10 years since
we've last met, but neither me or you are
the same as back then.");
MsgDisp("主人公","Y-Yeah.
I know that.");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,3);
ChEyeOpenLevel(1,0);
VoicePlay("B150100300_01_030");
MsgDisp("Kazama","Nope-, you don't.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("B150100300_01_040");
MsgDisp("Kazama","Haa... Listen, we're basically in front of
your house. What would you do if your
family saw you?");
MsgDisp("主人公","Ah... I would probably be a bit
embarrassed.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ChEyeOpenLevel(1,9);
VoicePlay("B150100300_01_050");
MsgDisp("Kazama","Right? That's why you should stop here. If
you understand, go home already.");
MsgDisp("主人公","Sorry, ｛風真＊＊｝. I'll be careful to
not do it again.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
ChCheek(1,5);
VoicePlay("B150100300_01_060");
MsgDisp("Kazama","Uugh, in that case...
I mean, that's somewhat not enough...");
ChEye(1,2);
ChMouth(1,4);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
ChCheek(1,0);
VoicePlay("B150100300_01_070");
MsgDisp("Kazama","Haa... I'm going crazy. See you. I'll cool
my head as I go home.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
MsgDisp("主人公","(I wonder if I've troubled ｛風真＊＊｝...
)");
MsgClose();
ScrFadeOut(0,0);
