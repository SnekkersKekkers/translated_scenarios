BGOpen("sc511",0);
SEPlay("EV_SE_SCHOOL_002");
ScrFadeIn(0);
MsgDisp("主人公","(Well, it's tie to go home now.)");
MsgDisp("主人公","(......Huh?
｛風真＊＊｝ is over there, huh.
Let's go for a chat before heading home.)");
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
ChOpen(1,100,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("G110100400_01_000");
MsgDisp("Kazama","It's weird to say it again, but......
It's good huh, being rose queen.");
MsgDisp("主人公","Yeah......
But, is it really okay for it to be me?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G110100400_01_010");
MsgDisp("Kazama","Hey, act more proud.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G110100400_01_020");
MsgDisp("Kazama","Winners should act more grand. If you
don't, the losers won't rest in peace. So
stand proudly, and loudly.");
MsgDisp("主人公","Y-yeah.
You say that but......");
VoicePlay("G110100400_41_000");
MsgDisp("Male Student","Isn't that the Rose Queen-senpai
over there?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("G110100400_48_000");
MsgDisp("School Girl","Kyaa...... next to her is the
young-master, Kazama Ryota! I wonder if
they're going out?");
ChEye(1,1);
ChMouth(1,0);
ChMotion(1,1);
ChMouthOpenLevel(1,0);
ChCheek(1,7);
VoicePlay("G110100400_01_030");
MsgDisp("Kazama","…………");
ChEyeOpenLevel(1,0);
MsgDisp("主人公","......It's somewhat embarassing huh.");
MsgClose();
SEPlay("EV_SE_645");
ChClose(1,0,30);
VoicePlay("G110100400_01_040");
MsgDisp("Kazama?","Hey, 
I can hear everything you guys are saying!");
VoicePlay("G110100400_41_020");
MsgDisp("Male Student","We're very sorry.");
VoicePlay("G110100400_48_010");
MsgDisp("School Girl","Please excuse us.");
MsgDisp("主人公","(｛風真＊＊｝ is so loud......
everyone is looking here......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
