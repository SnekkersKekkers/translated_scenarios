BGOpen("sc510",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(It's a nice day today... I still
have time in my lunch break today,
so I'll go to the courtyard.)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(5,254,0,0,4,#1,#1,0,0);
MsgDisp("主人公","Ah, ｛柊＊＊＊｝.");
ChEye(5,4);
VoicePlay("G110500600_05_000");
MsgDisp("Hiiragi","Greetings. Ah, want to use
one of the canvas' today?");
MsgDisp("主人公","Hm, I wasn't sure yet...
Will you, ｛柊＊＊＊｝?");
ChEye(5,0);
ChMotion(5,4);
VoicePlay("G110500600_05_010");
MsgDisp("Hiiragi","I was just preparing for the meeting
in the student council room.
See you.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(5);
MsgDisp("主人公","(｛柊＊＊＊｝ is as busy as ever.
Speaking of, I just noticed the drawing
he made earlier...)");
MsgClose();
ScrFadeOut(0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_DOOR_024");
SEWait();
VoicePlay("G110500600_05_020");
MsgDisp("Hiiragi?","Alright, here you go.");
SEPlay("EV_SE_DOOR_013");
SEWait();
BGOpen("ev005",0);
MsgClose();
BGMPlay("BGM_C05_HIIRAGI_B",0.01);
ChOpen(5,100,0,0,0,#1,#1,0,0);
SEPlay("EV_SE_712");
ScrFadeIn(0);
ChEye(5,1);
ChMouth(5,1);
ChMotion(5,1);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,12);
Wait(30,0);
SEStop("EV_SE_712",0);
VoicePlay("G110500600_05_030");
MsgDisp("Hiiragi","Huh, has today already ended?");
MsgDisp("主人公","Yeah. The weather was so nice that
I really didn't do much progress.");
ChEye(5,0);
ChMouth(5,1);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,#1);
VoicePlay("G110500600_05_040");
MsgDisp("Hiiragi","Haha, I didn't do much either.
Mine was just a bad computer though.");
MsgDisp("主人公","I'm not much of a good artist.");
ChEye(5,1);
ChMouth(5,1);
ChMotion(5,1);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,12);
VoicePlay("G110500600_05_050");
MsgDisp("Hiiragi","Then you're like me, then.
I just enjoy this time of day.");
VoicePlay("G110500600_05_060");
MsgDisp("Hiiragi","Can you show me sometime?
Your drawings, I mean.");
MsgDisp("主人公","I'll try to draw something
that you will like then.");
ChEye(5,0);
ChMouth(5,1);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,#1);
VoicePlay("G110500600_05_070");
MsgDisp("Hiiragi","Okay, I'll look forward to it and
cheer you on from the window.");
MsgDisp("主人公","Huh?
｛柊＊＊＊｝, I would get nervous if
you were watching me draw.");
ChEye(5,1);
ChEye(5,0);
ChMouth(5,1);
ChMotion(5,1);
Wait(10,0);
ChEyeOpenLevel(5,12);
VoicePlay("G110500600_05_080");
MsgDisp("Hiiragi","Oh, please forgive me then.
Then, I won't watch you.");
ChEye(5,0);
ChMouth(5,1);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,#1);
MsgDisp("主人公","(｛柊＊＊＊｝... are you going to see me
anyways?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
