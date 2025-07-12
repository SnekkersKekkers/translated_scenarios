ChLayout(1);
BGOpen("sc510",0);
ScrFadeIn(0);
MsgDisp("主人公","(Next lesson is biology.
I wonder if ｛御影＊＊｝ is there already?
Let's head there early.)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
BGOpen("sc352",0);
ScrFadeIn(0);
MsgDisp("主人公","Ah, ｛御影＊＊｝ 
and ｛柊＊＊＊｝ is also here!");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(7,37,0,0,0,#1,#1,0,1,0,30);
ChOpen(5,254,0,0,4,#1,#1,0,2,0,30);
VoiceEVSPlay(7);
VoicePlay("F100720001_07_000");
MsgDisp("Mikage","｛主人公｝, you sure are 
early aren't you?");
MsgDisp("主人公","Are ｛御影＊＊｝ and ｛柊＊＊＊｝
talking about blackboards?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("F100720001_05_000");
MsgDisp("Hiiragi","Yes, it is truly an exceptional item.
Every week, after this, your class is 
in the science classroom, correct?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("F100720001_07_010");
MsgDisp("Mikage","That's right.
The content of the lessons is pretty
much the same, so it's easy for me too.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("F100720001_05_010");
MsgDisp("Hiiragi","That's an efficient schedule.
Just like that blackboard.");
MsgDisp("主人公","But the blackboard 
gets erased every time?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("F100720001_07_020");
MsgDisp("Mikage","It's not that easy.
The timing of writing on the
board is also important.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("F100720001_05_020");
MsgDisp("Hiiragi","I understand that.
Even if it's the same play, you want 
to change the gaps and timing of your 
lines based on the audience's reaction.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("F100720001_07_030");
MsgDisp("Mikage","I see.
Teachers and actors might be 
surprisingly similar, right?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("F100720001_05_030");
MsgDisp("Hiiragi","As are the pupils and the customers.");
MsgDisp("主人公","Hehe, that's interesting.");
SEPlay("EV_SE_SCHOOL_002");
Wait(15,0);
SEPlay("EV_SE_666",0.6,0.8);
Wait(40,0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
VoicePlay("F100720001_05_040");
MsgDisp("Hiiragi","It's almost time for the
show to start, Mikage-sensei.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,4);
VoicePlay("F100720001_07_040");
MsgDisp("Mikage","Yeah, the teacher's podium
is my stage. Shall we start?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
MsgDisp("主人公","Yes.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("F100720001_05_050");
MsgDisp("Hiiragi","I'll be off to be 
a guest at another venue.");
MsgClose();
SEPlay("EV_SE_856");
BGMStop();
ChClose(5,0,30);
ChClose(7,0,30);
SEPlay("EV_SE_788",0.5,0.6);
VoicePlay("F100720001_07_050");
MsgDisp("Mikage","It's about time for 
the curtains to raise for 
\"Biology Basics\".");
VoicePlay("F100720001_42_000");
MsgDisp("Male Student","Curtain rises?
Mikagecchi, what's wrong?");
MsgDisp("主人公","(Hehe! It looks like ｛御影＊＊｝
is trying to be an actor?)");
SEStop("EV_SE_SCHOOL_002",1);
SEStop("EV_SE_788",1);
MsgClose();
ScrFadeOut(0,0);
