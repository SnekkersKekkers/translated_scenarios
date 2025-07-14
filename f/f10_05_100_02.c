BGOpen("sc310",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I wonder if ｛柊＊＊＊｝ is studying hard
in the library...?
I'll go check it out.)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0,0);
Wait(40,0);
BGOpen("sc330",0);
ScrFadeIn(0);
VoiceEVSPlay(5);
VoicePlay("F100510002_05_000");
MsgDisp("Hiiragi?","｛主人公｝, you came.");
MsgClose();
BGMPlay("BGM_C05_HIIRAGI_A",0.01);
ChOpen(5,254,0,4,4,#1,#1,0,0);
MsgDisp("主人公","Yeah, you sure are working
hard, huh?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("F100510002_05_010");
MsgDisp("Hiiragi","Yes. After I found the middle school
textbook, I was no longer dumbfounded.");
MsgDisp("主人公","I'm glad.
If you keep progressing like this, you'll
be alright.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("F100510002_05_020");
MsgDisp("Hiiragi","It is reassuring to 
hear you say that.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("F100510002_05_030");
MsgDisp("Hiiragi","That is right.
There is one part I didn't understand.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("F100510002_05_040");
MsgDisp("Hiiragi","Could you come here for a second?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(5);
MsgDisp("主人公","Yeah1");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE",0,0.5);
MsgClose();
ScrFadeOut(0,0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
SEPlay("EV_SE_SCHOOL_002");
MsgClose();
ChOpen(5,254,4,4,2,#1,#1,0,0);
Wait(30,0);
ScrFadeIn(0);
VoicePlay("F100510002_05_050");
MsgDisp("Hiiragi","I see... I finally understand the meaning
of the \"past progressive tense\" we learned
about in English class this morning.");
MsgDisp("主人公","Hehe, I'm glad.
I'm sure you'll gradually understand more
and more.");
SEStop("EV_SE_SCHOOL_002",2);
ChMotion(5,3);
Wait(22,1);
ChEye(5,3);
ChMouth(5,4);
VoicePlay("F100510002_05_060");
MsgDisp("Hiiragi","Thank you.
You are my teacher.");
MsgDisp("主人公","No. I'm also learning a lot too. Thank
you.");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("F100510002_05_070");
MsgDisp("Hiiragi","You really are such a kind person...
Please don't make me cry.");
MsgDisp("主人公","Hehe. You shouldn't cry over something
like this, okay? There is still lots to
learn, after all.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("F100510002_05_080");
MsgDisp("Hiiragi","That's right. I only just understood the
meaning of \"past progressive tense.\",
There's still a long way to go. Please
continue to help me, teacher.");
MsgDisp("主人公","(I'm also having fun studying with
｛柊＊＊＊｝...! )");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
