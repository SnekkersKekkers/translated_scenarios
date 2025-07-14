BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","｛柊＊＊＊｝, you're late...
Did something happen...");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
VoicePlay("B110500002_35_000");
MsgDisp("?Boy","Ehh? The girl I approached was a member of
Habataki Theatre Troupe～?");
VoicePlay("B110500002_35_010");
MsgDisp("?Boy","That makes it easier, right? Theatre is
lowly, tough work so dangle a debut in
front of them, and they'll sign right
away!");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(35,254,0,0,0,#1,#1,0,0);
VoicePlay("B110500002_35_020");
MsgDisp("Guy","Waah, are you part of Habataki Theatre
Troupe too? Why don't you stop that work
and come to us?");
MsgDisp("主人公","Ehh?");
ChEye(35,1);
ChMouth(35,0);
VoicePlay("B110500002_35_030");
MsgDisp("Guy","It's fine, just quit.
If you come to us, we'll double the lesson
fees and get you debuted right away.");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHOR");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE",0,0.8);
ChPosition(35,2);
MsgClose();
SEWait();
BGMPlay("BGM_C05_HIIRAGI_A",0.01);
ChOpen(5,253,0,0,0,#1,#1,0,1,0,30);
VoicePlay("B110500002_05_000");
MsgDisp("Hiiragi","Is there something you need with one of
our members?");
ChEye(35,2);
ChMouth(35,0);
VoicePlay("B110500002_35_040");
MsgDisp("Guy","Huh? Ah, you want to debut in the mens?
OK! We'll take care of both of you. The
lesson fee will be tripled!");
MsgDispSksp(1,5);
ChEye(5,0);
ChMouth(5,4);
VoicePlay("B110500002_05_010");
MsgDisp("Hiiragi","I am the chairman of Habataki Theatre
Troupe.
I am Hiiragi Yanosuke.");
MsgDispSksp(0);
ChEye(35,1);
ChMouth(35,0);
VoicePlay("B110500002_35_050");
MsgDisp("Guy","Hm? Really～?");
MsgDispSksp(1,5);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0);
VoicePlay("B110500002_05_020");
MsgDisp("Hiiragi","So, which agency are you from?");
MsgDispSksp(0);
ChEye(35,1);
ChMouth(35,1);
VoicePlay("B110500002_35_060");
MsgDisp("Guy","Ehh? You're messing with me. Hey, stop
pulling my leg～!");
MsgDispSksp(1,5);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,1);
ChEyeOpenLevel(5,0);
VoicePlay("B110500002_05_030");
MsgDisp("Hiiragi","I don't understand why I would have to
lie.");
MsgDispSksp(0);
ChEye(35,2);
ChMouth(35,1);
VoicePlay("B110500002_35_070");
MsgDisp("Guy","Crap, you're being for real?
I won't poach from your company-.");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
ChClose(35);
ChPosition(5,0);
Wait(60,0);
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,0);
ChEyeOpenLevel(5,#1);
VoicePlay("B110500002_05_040");
MsgDisp("Hiiragi","Haa... I'm sorry, that was my fault for
being late.");
MsgDisp("主人公","No, it's alright.
But I ended up looking like a member of
the Habataki Theatre Company...");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B110500002_05_050");
MsgDisp("Hiiragi","Yes, you're welcome here at any time.
Then, let's go.");
