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
MsgDisp("Hiiragi?","Can I help you?");
MsgDisp("主人公","Err...My name is ｛主人公姓名｝, and I
would like to join the student council!");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("A020520000_05_010");
MsgDisp("Hiiragi?","Yes, I'm listening.
I'm Hiiragi Yanosuke.
Looking forward to working with you.");
MsgDisp("主人公","O-Of course!
Looking forward too!");
VoicePlay("A020520000_41_000");
MsgDisp("Student President","Ah, a new member? Welcome. Hiiragi-kun,
you introduced yourself already?");
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,4);
VoicePlay("A020520000_05_020");
MsgDisp("Hiiragi","We were just introducing ourselves.");
VoicePlay("A020520000_41_010");
MsgDisp("Student President","So, are you surprised?");
MsgDisp("主人公","About what?");
ChEye(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("A020520000_41_020");
MsgDisp("Student President","No one told you? Hiiragi-kun is the
chairman of the Habataki Theater Troupe
even though he's still a high schooler. On
top of that he's a member of our student
council.");
MsgDisp("主人公","Whoa, the troupe chairman ...∋");
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,4);
VoicePlay("A020520000_05_030");
MsgDisp("Hiiragi","President, we're at school here.
Let's not make it about the theater.");
VoicePlay("A020520000_41_030");
MsgDisp("Student President","Huh, you're right.
Well then, let's make our school exciting!");
MsgDisp("主人公","Yes!!");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("A020520000_05_040");
MsgDisp("Hiiragi","Alright then, I'm off to the school's
beautification campaign.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(5);
MsgDisp("主人公","(｛柊＊＊＊｝, was it...I can't
believe the theater troupe chairman is in
the same year as me. He seems a bit
strict, though.)");
MsgClose();
ScrFadeOut(0,0);
