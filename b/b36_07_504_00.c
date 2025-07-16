MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0,1);
ScrFadeIn(0);
VoicePlay("B360750400_07_000");
MsgDisp("Mikage","Let's head home before it gets dark.");
MsgDisp("主人公","The lights are beautiful when it gets dark
out, aren't they?");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("B360750400_07_010");
MsgDisp("Mikage","...... It's beautiful, right?
No it's not.
Let's go.");
MsgDisp("主人公","......Okay.");
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
BGOpen("ex300",2);
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
BGMPlay("BGM_XMAS_TRHEE",0.01);
ScrFadeIn(0);
VoicePlay("B360750400_07_020");
MsgDisp("Mikage","It's so beautiful～♪");
MsgDisp("主人公","It was great.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("B360750400_07_030");
MsgDisp("Mikage","Ah it was definitely worth coming here.
It was worth you throwing a rare tantrum.");
MsgDisp("主人公","I'm also glad we came to see them
together, ｛御影＊＊｝.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,5);
ChEyeOpenLevel(7,7);
VoicePlay("B360750400_07_040");
MsgDisp("Mikage","What a cute thing to say.
Thank you!");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,4);
ChEyeOpenLevel(7,10);
VoicePlay("B360750400_07_050");
MsgDisp("Mikage","That being said, it's time we prepare to
go home.");
MsgDisp("主人公","(Thank you for bringing me,
｛御影＊＊｝. )");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ChCheek(7,0);
