BGOpen("sc605",0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("P810500000_41_000");
MsgDisp("President","The student council will be managing\nthe cultural festival. It's important work, \nso please take it seriously.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
ChOpen(5,254,4,0,0,#1,#1,0,0);
VoicePlay("P810500000_05_000");
MsgDisp("Hiiragi","We have two weeks to prepare, starting
next week. In the meantime, let's get as
much done as we can, bit by bit.");
VoicePlay("P810500000_41_010");
MsgDisp("President","Yes, it will be a hectic time, so please
take care of your health.");
VoicePlay("P810500000_05_010");
MsgDisp("Hiiragi","Certainly.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoiceEVSPlay(5);
VoicePlay("P810500000_05_020");
MsgDisp("Hiiragi","｛主人公｝, let's do our best.");
MsgDisp("主人公","Yes!");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("P810500000_05_030");
MsgDisp("Hiiragi","...The cultural festival.
I look forward to it.");
MsgDisp("主人公","Do you like the cultural festival,
｛Hiiragi＊＊＊｝?");
ChEye(5,3);
VoicePlay("P810500000_05_040");
MsgDisp("Hiiragi","Yes.
I love both culture and festivals.");
MsgDisp("主人公","Hehe, I'm looking forward to it!");
ChEye(5,0);
ChMotion(5,0);
VoicePlay("P810500000_05_050");
MsgDisp("Hiiragi","Let's make the cultural festival a
success.");
MsgDisp("主人公","(Alright, let's do our best!)");
MsgClose();
ScrFadeOut(0,0);
