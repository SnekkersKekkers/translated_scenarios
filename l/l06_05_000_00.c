BGOpen("sc512",0);
ChLayout(1);
ScrFadeIn(0);
MsgClose();
BGMPlay("BGM_C05_HIIRAGI_A");
ChOpen(5,254,0,0,0,#1,#1,0,0);
VoiceEVSPlay(5);
VoicePlay("L060500000_05_000");
MsgDisp("Hiiragi","｛主人公｝.");
MsgDisp("主人公","｛柊＊＊＊｝.
What is it?");
ChMouth(5,4);
VoicePlay("L060500000_05_010");
MsgDisp("Hiiragi","I thank you for last month.
Please have this, though it's nothing
much.");
SEPlay("EV_SE_664");
SEWait();
MsgDisp("主人公","Th-Thank you for
your consideration......");
ChMouth(5,4);
VoicePlay("L060500000_05_020");
MsgDisp("Hiiragi","Well then, please excuse me.");
MsgClose();
BGMStop();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(5);
Wait(60);
VoicePlay("L060500000_05_030");
MsgDisp("Hiiragi","I was able to hand it over.");
MsgDisp("主人公","(Hm, this is obligatory......)");
MsgClose();
ScrFadeOut(0,0);
