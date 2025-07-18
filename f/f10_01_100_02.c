BGOpen("sc310",0);
ChLayout(1);
SEPlay("EV_SE_788",1,0.6);
ScrFadeIn(0);
MsgClose();
BGMPlay("BGM_C01_RYOUTA_A",0.01);
ChOpen(1,254,0,0,2,#1,#1,0,0);
VoicePlay("F100110002_01_000");
MsgDisp("Kazama","Next class is dangerous.");
MsgDisp("主人公","Oh, ｛風真＊＊｝.
What's dangerous about it?");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("F100110002_01_010");
MsgDisp("Kazama","You eat lunch at the cafeteria and start
feeling good, and then you go to your
afternoon classes...");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("F100110002_01_020");
MsgDisp("Kazama","No matter what, you'll start falling
asleep.");
MsgDisp("主人公","Is that so?
I'm okay now, but...'");
ChEyeOpenLevel(1,0);
Wait(8,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,#1);
VoicePlay("F100110002_01_030");
MsgDisp("Kazama","If you ever start feeling sleepy, look at
this.");
SEPlay("EV_SE_662");
SEWait();
MsgDisp("主人公","...A letter?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
VoicePlay("F100110002_01_040");
MsgDisp("Kazama","No, it's like medicine that keeps you
awake.");
SEPlay("EV_SE_DOOR_019");
SEWait();
VoicePlay("F100110002_42_000");
MsgDisp("Male Student","Take your seats.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("F100110002_01_050");
MsgDisp("Kazama","In case of emergencies.
Later.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(1);
MsgDisp("主人公","???");
MsgClose();
ScrFadeOut(0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc300",0);
ScrFadeIn(0);
MsgDisp("主人公","(...The note ｛風真＊＊｝ gave
me...I wonder what it says? I'm not
sleepy, but I'll take a look.)");
SEPlay("EV_SE_662");
SEWait();
MsgDisp("主人公","(Um...
'Look at me'?)");
MsgDisp("主人公","(from ｛風真＊＊｝...
He's looking at me and laughing!)");
VoicePlay("F100110002_39_010");
MsgDisp("Teacher","Kazama, you seem to be having fun.
Do you like ancient literature that much?");
MsgClose();
SEPlay("EV_SE_621");
ChOpen(1,254,3,2,2,#1,#1,0,0,0,30);
VoicePlay("F100110002_01_060");
MsgDisp("Kazama","Ah, yes. ...sorry.");
SEPlay("EV_SE_GAYA_017",0.1,0.6);
SEPlay("EV_SE_GAYA_016",0.2,0.7);
VoicePlay("F100110002_38_000");
MsgDisp("Students","Hahaha!");
MsgClose();
SEStop("EV_SE_GAYA_017",1);
SEStop("EV_SE_GAYA_016",1);
ScrFadeOut(0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc310",0);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0,1);
BGMPlay("BGM_C01_RYOUTA_B",0.01);
ScrFadeIn(0);
ChMouth(1,1);
VoiceEVSPlay(1);
VoicePlay("F100110002_01_070");
MsgDisp("Kazama","｛主人公｝, that was quick.");
MsgDisp("主人公","Huh?");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("F100110002_01_080");
MsgDisp("Kazama","I thought you would have a little
patience, but looking at it right away?
I couldn't help but laugh.");
MsgDisp("主人公","Oh, that note?
It said to look at ｛風真＊＊｝.
What was that about?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("F100110002_01_090");
MsgDisp("Kazama","I was going to make a funny face so you'd
laugh at me, but then I ended up laughing
at you.");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(16,0);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,#1);
VoicePlay("F100110002_01_100");
MsgDisp("Kazama","You win.");
MsgDisp("主人公","(I didn't end up laughing at you...
But I think you saved me there!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
