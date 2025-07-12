BGOpen("sc605",0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("G110500804_41_000");
MsgDisp("Student Council President","Thank you.
I was saved thanks to Hiiragi-kun.");
VoicePlay("G110500804_05_000");
MsgDisp("Hiiragi","No, I'm glad to be of help.");
VoicePlay("G110500804_41_010");
MsgDisp("Student Council President","I'll consult you again.
See you then.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
Wait(55,0);
SEPlay("EV_SE_DOOR_013");
SEWait();
MsgClose();
BGMPlay("BGM_C05_HIIRAGI_B",0.01);
ChOpen(5,254,0,0,4,#1,#1,0,0);
MsgDisp("主人公","The president was happy. 
What happened?");
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("G110500804_05_010");
MsgDisp("Hiiragi","I just helped him a little bit 
with the speech for the school assembly.");
MsgDisp("主人公","Ah, the one from the other day?
It was well received.
Did ｛柊＊＊＊｝ write the manuscript?");
MsgClose();
ScrFadeOut(0,0,30);
ChClose(5,0,0);
BGOpen("ev005",0);
MsgClose();
ChOpen(5,100,0,0,1,#1,#1,0,0);
SEPlay("EV_SE_712");
ScrFadeIn(0);
VoicePlay("G110500804_05_020");
MsgDisp("Hiiragi","No, the president wrote it.
And I did a little directing.");
MsgDisp("主人公","Oh that's right.
His gestures were very passionate 
and persuasive.");
ChEye(5,1);
ChMouth(5,1);
ChMotion(5,1);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,12);
SEStop("EV_SE_712",0);
VoicePlay("G110500804_05_030");
MsgDisp("Hiiragi","Haha, 
that's the president's acting ability.");
SEPlay("EV_SE_712");
ChEye(5,0);
ChMouth(5,1);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,#1);
VoicePlay("G110500804_05_040");
MsgDisp("Hiiragi","But, I'm happy to think my efforts were
useful to the student council a little.");
ChEye(5,0);
ChMouth(5,1);
ChMotion(5,2);
SEStop("EV_SE_712",0);
VoicePlay("G110500804_05_050");
MsgDisp("Hiiragi","Giving it my all, and sitting here during
recess paid off.");
ChMotion(5,0);
SEPlay("EV_SE_712");
MsgDisp("主人公","Y-Yes. I think it's impressive....... The
theatre company, your studies, and the
student council too......");
ChEye(5,1);
ChMouth(5,0);
ChMotion(5,1);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,13);
SEStop("EV_SE_712",0);
VoicePlay("G110500804_05_060");
MsgDisp("Hiiragi","W-What's the matter?");
MsgDisp("主人公","I'm so happy that ｛柊＊＊＊｝'s efforts
are being recognized......");
ChMouth(5,1);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEyeOpenLevel(5,#1);
VoicePlay("G110500804_05_070");
MsgDisp("Hiiragi","You really are such a kind person.
Yes......t-thank you.");
MsgDisp("主人公","(｛柊＊＊＊｝, I'm so glad.
Even though you were tired and sleepy
you always gave it your all......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
