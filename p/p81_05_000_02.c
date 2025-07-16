BGOpen("sc605",0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("P810500002_41_000");
MsgDisp("Student Council President","We, the student council executives, have
been entrusted with management of the
cultural festival. This is important work,
please be aware of this.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
ChOpen(5,254,0,0,4,#1,#1,0,0);
VoicePlay("P810500002_05_000");
MsgDisp("Hiiragi","This year is our last.");
MsgDisp("主人公","Yeah, it's a little lonely...");
ChEye(5,4);
VoicePlay("P810500002_05_010");
MsgDisp("Hiiragi","I like doing work itself together with
you. That's why the preparatory period is
like the real thing.");
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("P810500002_05_020");
MsgDisp("Hiiragi","...I truly enjoyed preparing for the
cultural festival alongside you these last
three years.");
MsgDisp("主人公","｛柊＊＊＊｝...");
ChEye(5,4);
ChMotion(5,0);
VoicePlay("P810500002_05_030");
MsgDisp("Hiiragi","I may be giving my thanks a little early.");
MsgDisp("主人公","Hehe, that's right.");
MsgDisp("主人公","(Whether I laugh or I cry, this is my last
cultural festival.
I want to make the best memories...!)");
MsgClose();
ScrFadeOut(0,0);
