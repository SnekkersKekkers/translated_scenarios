BGOpen("sc511",0);
SEPlay("EV_SE_SCHOOL_002");
ScrFadeIn(0);
MsgDisp("主人公","(Alright, it's time to go home now.)");
MsgDisp("主人公","(......Huh? ｛風真＊＊｝ is over there. I
might as well have a chat before I go
home.)");
SEStop("EV_SE_SCHOOL_002",1.5);
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev001",1);
MsgClose();
BGMPlay("BGM_C01_RYOUTA_B",0.01);
ChOpen(1,100,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(1);
VoicePlay("G110101100_01_000");
MsgDisp("Kazama","｛主人公｝. How is it, have you gotten
used to part time work yet?");
MsgDisp("主人公","Yes it's thanks to ｛風真＊＊｝......
No, rather, it's thanks to \"Senpai's\"
help.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,2);
ChEyeOpenLevel(1,8);
VoicePlay("G110101100_01_010");
MsgDisp("Kazama","Good.
That's a good attitude.");
MsgDisp("主人公","Hehe. But, because ｛風真＊＊｝ taught me
so many different things, the number of
things I can do has genuinely increased.");
ChEyeOpenLevel(1,0);
Wait(10,0);
ChMouth(1,0);
ChMotion(1,0);
ChEyeOpenLevel(1,#1);
VoicePlay("G110101100_01_020");
MsgDisp("Kazama","Surely it's just because you're a good
employee?");
MsgDisp("主人公","Should I aim to be employee of the month?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G110101100_01_030");
MsgDisp("Kazama","Hey, don't get carried away.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("G110101100_01_040");
MsgDisp("Kazama","Well, training for the future might be
good, I guess.");
MsgDisp("主人公","(......The future?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
