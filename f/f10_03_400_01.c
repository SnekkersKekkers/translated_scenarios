BGOpen("sc530",0);
MsgClose();
BGMPlay("BGM_C03_HONDA_A",0.01);
ChOpen(3,254,0,0,4,-1,-1,0,0);
ChLayout(1);
ScrFadeIn(0);
VoiceEVSPlay(3);
VoicePlay("F100340001_03_000");
MsgDisp("Honda","｛主人公｝.
Have you seen Mii-kun?
He's nowhere to be found.");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("F100340001_03_010");
MsgDisp("Honda","Even though recess
is almost over.");
MsgDisp("主人公","Hmm, I haven't seen him?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("F100340001_03_020");
MsgDisp("Honda","Ah, it's times like these
that really test how well 
I know Me-kun.");
MsgDisp("主人公","Hehe, maybe.
Where do you think he is?");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,2,1);
ChEyeOpenLevel(3,0);
VoicePlay("F100340001_03_030");
MsgDisp("Honda","That's right...
The rooftop, the science room...");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,5,1);
VoicePlay("F100340001_03_040");
MsgDisp("Honda","He's got to be behind the 
school building after all.");
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
BGOpen("sc220",0);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
ScrFadeIn(0);
VoicePlay("F100340001_03_050");
MsgDisp("Honda","Found you∈");
ChPosition(3,1);
MsgClose();
ChNanaType(0);
ChOpen(4,254,0,0,0,-1,-1,0,2);
MsgDisp("主人公","You were right!
Amazing, ｛本多＊＊｝.");
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,1,1);
VoicePlay("F100340001_04_000");
MsgDisp("Nanatsumori","Haa... so noisy.
What are you two doing?");
MsgDisp("主人公","｛本多＊＊｝ was guessing
where you were, ｛七ツ森＊｝.
How did you know?");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
ChEyeOpenLevel(3,0);
VoicePlay("F100340001_03_060");
MsgDisp("Honda","Yep, yep, to me, Mii-kun is a cat.
It's the kind of place cats like; 
quiet and cool... so I thought 
this might be it.");
ChMouth(4,1);
ChMotion(4,0,1);
MsgDisp("主人公","Hehe, a cat huh...
｛七ツ森＊｝ is definitely cat like?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("F100340001_03_070");
MsgDisp("Honda","Right right, that's 
the impression he gives.");
ChEye(4,0);
ChMouth(4,0);
VoicePlay("F100340001_04_010");
MsgDisp("Nanatsumori","So, what do you need?");
MsgDisp("主人公","Umm");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("F100340001_03_080");
MsgDisp("Honda","It's recess, so let's talk——");
SEPlay("EV_SE_SCHOOL_002");
BGMStop(0.5);
Wait(50,0);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("F100340001_04_020");
MsgDisp("Nanatsumori","It's over.
See ya.");
MsgClose();
SEPlay("EV_SE_626");
ChClose(4);
ChPosition(3,0);
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("F100340001_03_090");
MsgDisp("Honda","It was kind of fun, 
like searching for a lost cat.
Shall we do it again?");
MsgClose();
SEPlay("EV_SE_626");
ChClose(3);
SEStop("EV_SE_SCHOOL_002",1);
MsgDisp("主人公","(｛本多＊＊｝, are you having 
fun playing hide-and-seek?)");
MsgClose();
ScrFadeOut(0,0);
