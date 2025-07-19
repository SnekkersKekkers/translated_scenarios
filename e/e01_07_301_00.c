ChLayout(1);
BGOpen("fp100",1);
ScrFadeIn(0);
MsgDisp("主人公","(Ok, I think it's time to head home.
...Huh?
Who's that over there——)");
VoicePlay("E010730100_07_000");
MsgDisp("Mikage?","That's amazing Is it easy to use?");
VoicePlay("E010730100_03_000");
MsgDisp("Honda?","It's the best!
I check it out all the time.");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(7,255,0,0,0,#1,#1,0,1,0,30);
ChOpen(3,255,0,0,0,#1,#1,0,2,0,30);
MsgDisp("主人公","｛御影＊＊｝, ｛本多＊＊｝.
What are you two talking about?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("E010730100_07_010");
MsgDisp("Mikage","Yo.
The story is Honda's wish came true and he
got a treasure.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
VoiceEVSPlay(3);
VoicePlay("E010730100_03_010");
MsgDisp("Honda","｛主人公｝, I'll let you take a peek too.");
MsgDisp("主人公","Huh...a peek?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("E010730100_07_020");
MsgDisp("Mikage","That doesn't seem suspicious at all.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3);
ChEyeOpenLevel(3,0);
VoicePlay("E010730100_03_020");
MsgDisp("Honda","Isn't it great?
I just bought a new microscope!");
MsgDisp("主人公","Ah, a microscope...");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1);
ChEyeOpenLevel(3,#1);
VoicePlay("E010730100_03_030");
MsgDisp("Honda","Yeah!
The magnification is 1000 times∈ It's
amazing, you definitely have to see!");
MsgDisp("主人公","Hehe.
｛本多＊＊｝, I'm happy for you.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("E010730100_07_030");
MsgDisp("Mikage","You did well at your job and bought it.");
ChEye(3,1);
ChMouth(3,3);
ChMotion(3,4);
VoicePlay("E010730100_03_040");
MsgDisp("Honda","Ahー, now I feel like looking through it
again. I'm going home now! See you!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(3);
ChPosition(7,0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("E010730100_07_040");
MsgDisp("Mikage","That's Honda's talent.
When he has an interest he gets so
invested that he forgets to eat or sleep.");
MsgDisp("Mikage","He's suited to become a researcher.");
MsgDisp("主人公","Hehe.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("E010730100_07_050");
MsgDisp("Mikage","Be careful, okay?
You might be included in his interests.");
MsgDisp("主人公","Eh?");
ChEye(7,0);
ChMouth(7,3);
VoicePlay("E010730100_07_060");
MsgDisp("Mikage","Maybe you'll be studied at 1000 times
magnification.");
MsgDisp("主人公","Ehh? ∋");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("E010730100_07_070");
MsgDisp("Mikage","Haha, just kidding.
See you.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(7);
MsgDisp("主人公","(Me, a subject of ｛本多＊＊｝'s research?
There's no way...)");
MsgClose();
ScrFadeOut(0,0);
