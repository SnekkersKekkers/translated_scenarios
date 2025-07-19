MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0,1);
ScrFadeIn(0);
VoicePlay("B360723600_07_000");
MsgDisp("Mikage","Well, let's go home before it gets dark.");
MsgDisp("主人公","Um...");
VoicePlay("B360723600_07_010");
ChEye(7,0);
ChMouth(7,4);
ChMotion(7,5);
MsgDisp("Mikage","What's up?");
MsgDisp("主人公","The night parade is happening soon.");
VoicePlay("B360723600_07_020");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
MsgDisp("Mikage","Come on, let's go now.");
MsgDisp("主人公","...Okay.");
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
BGOpen("tr470",2);
BGMPlay("BGM_PLACE_AMUSE_NIGHT",0.01);
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,2);
ScrFadeIn(0);
VoicePlay("B360723601_07_030");
MsgDisp("Mikage","Wow...");
MsgDisp("主人公","｛御影＊＊｝, it's a skull bear!");
VoicePlay("B360723601_07_040");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,3);
MsgDisp("Mikage","That's good, right～?");
MsgDisp("主人公","Thank you, ｛御影＊＊｝.");
VoicePlay("B360723601_07_050");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,1);
MsgDisp("Mikage","I'm glad you're happy.
But I think it's time to go.");
MsgDisp("主人公","Ah, okay...");
VoicePlay("B360723601_07_060");
ChEye(7,2);
ChMouth(7,3);
ChMotion(7,3);
ChEyeOpenLevel(7,0);
MsgDisp("Mikage","Fine!
How about we stay until the skull bear
passes by?");
MsgDisp("主人公","(Yay!
I got to watch the Night Parade with
｛御影＊＊｝ today!)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ChCheek(7,0);
