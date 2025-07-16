BGOpen("sc512",0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("L060500001_05_000");
MsgDisp("Hiiragi?","Aah, I've been looking for you.");
MsgClose();
BGMPlay("BGM_C05_HIIRAGI_A");
ChOpen(5,254,0,0,4,#1,#1,0,0);
MsgDisp("主人公","Hm?
Ah, ｛柊＊＊＊｝.");
SEPlay("EV_SE_664");
SEWait();
ChEye(5,3);
ChMotion(5,3);
ChCheek(5,7);
VoicePlay("L060500001_05_010");
MsgDisp("Hiiragi","In return for your chocolate.
...... Will you accept this?");
MsgDisp("主人公","Of course!
Thank you!");
ChEye(5,4);
ChMotion(5,0);
VoicePlay("L060500001_05_020");
MsgDisp("Hiiragi","I'm glad.
Well then, until next time.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(5);
