BGOpen("sc300",0);
ScrFadeIn(0);
MsgDisp("主人公","(Right after this class ends, it's lunch.
I'm so hungry....)");
SEPlay("EV_SE_017");
MsgDisp("","(*Grumble Grumble*)");
MsgDisp("主人公","(M-My stomach growled!
... Wait.
Nobody heard it, right...?)");
MsgClose();
ScrFadeOut(0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_SCHOOL_002");
BGOpen("sc310",0);
ChLayout(1);
Wait(30,1);
SEPlay("EV_SE_788",1,0.6);
ScrFadeIn(0);
Wait(80,1);
MsgClose();
SEStop("EV_SE_SCHOOL_002",3);
SEStop("EV_SE_788",3);
BGMPlay("BGM_C01_RYOUTA_A",0.01);
ChOpen(1,254,0,0,2,#1,#1,0,0);
VoiceEVSPlay(1);
VoicePlay("F100110001_01_000");
MsgDisp("Kazama","What's wrong, ｛主人公｝?
Are you not feeling well?");
MsgDisp("主人公","Oh, ｛風真＊＊｝.
Why do you ask?");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("F100110001_01_010");
MsgDisp("Kazama","Because in class, your face turned red and
you looked down.");
MsgDisp("主人公","Huh?
You were watching?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("F100110001_01_020");
MsgDisp("Kazama","Well, when someone looks sick, it's
natural to be concerned, right?");
MsgDisp("主人公","Right, thank you.
I tried to be calm, but it's a little...");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("F100110001_01_030");
MsgDisp("Kazama","A little...?");
MsgDisp("主人公","My stomach...");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("F100110001_01_040");
MsgDisp("Kazama","Does it hurt?");
MsgDisp("主人公","No, um...");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,1);
VoicePlay("F100110001_01_050");
MsgDisp("Kazama","Huh?
... Oh, I see.
Then you'd better hurry to lunch.");
ChEye(1,0);
ChMotion(1,0);
MsgDisp("主人公","Oh...");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(1);
VoicePlay("F100110001_01_060");
MsgDisp("Kazama","Hurry up.");
MsgDisp("主人公","(I guess ｛風真＊＊｝ figured
it out?
I won't ask him about it...)");
MsgClose();
ScrFadeOut(0,0);
