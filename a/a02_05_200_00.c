BGOpen("sc100",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Alright, let's join the student
council!");
MsgClose();
ScrFadeOut(0,0);
BGOpen("sc510",0);
ScrFadeIn(0);
MsgDisp("主人公","(The student council room...
Phew, I'm nervous...!)");
MsgClose();
ScrFadeOut(0,0);
SEPlay("EV_SE_DOOR_024");
SEWait();
MsgDisp("主人公","E-Excuse me.");
SEPlay("EV_SE_DOOR_013");
BGOpen("sc609",0);
ScrFadeIn(0);
SEWait();
MsgDisp("主人公","Excuse me...
Is anyone here...?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
BGMPlay("BGM_C05_HIIRAGI_I",0.01);
ChOpen(5,254,0,0,0,#1,#1,0,0);
VoicePlay("A020520000_05_000");
MsgDisp("Hiiragi?","May I help you with something?");
MsgDisp("主人公","Uhm...
My name is ｛主人公姓名｝, and I
would like to join the student council!");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("A020520000_05_010");
MsgDisp("Hiiragi?","Yes, I'm listening.
I'm Hiiragi Yanosuke.
I'm looking forward to working with you.");
MsgDisp("主人公","Y-Yes!
I'm looking forward to it too!");
VoicePlay("A020520000_41_000");
MsgDisp("President","Ah, a new member? Welcome.
Hiiragi-kun, did you introduce
yourself already?");
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,4);
VoicePlay("A020520000_05_020");
MsgDisp("Hiiragi","We were just introducing ourselves.");
VoicePlay("A020520000_41_010");
MsgDisp("President","So, were you surprised?");
MsgDisp("主人公","Huh?");
ChEye(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("A020520000_41_020");
MsgDisp("President","What, he didn't tell you? Hiiragi-kun is
the Habataki Theater Company chairman
and a Student Council member too.");
MsgDisp("主人公","Woah, he's the chairman...∋");
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,4);
VoicePlay("A020520000_05_030");
MsgDisp("Hiiragi","President, we are currently at school.
My theater work isn't relevant here.");
VoicePlay("A020520000_41_030");
MsgDisp("President","R-Right. Of course.
Let's work hard to make Habataki High
even better, then!");
MsgDisp("主人公","Yes!!");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("A020520000_05_040");
MsgDisp("Hiiragi","Now then, I'm off to the school
cleanup campaign.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(5);
MsgDisp("主人公","(｛Hiiragi＊＊＊｝, was it...I can't
believe there's a troupe leader in the
same year as me. He seems a bit strict...)");
MsgClose();
ScrFadeOut(0,0);
