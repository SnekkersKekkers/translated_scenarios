BGOpen("sc511",0);
SEPlay("EV_SE_SCHOOL_002");
ScrFadeIn(0);
SEPlay("EV_SE_787");
MsgDisp("主人公","(Ah, a message from ｛風真＊＊｝. 
\"Let's go home together today\", huh...
Okay, let's prepare to go home.)");
SEStop("EV_SE_SCHOOL_002",1.5);
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev001",1);
MsgClose();
BGMPlay("BGM_C01_RYOUTA_B",0.01);
ChOpen(1,100,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
VoiceEVSPlay(1);
VoicePlay("G110100200_01_000");
MsgDisp("Kazama","｛主人公｝.
Have you been busy recently?");
MsgDisp("主人公","Eh?
That's not been the case.");
ChEye(1,1);
ChMouth(1,1);
ChMotion(1,1);
VoicePlay("G110100200_01_010");
MsgDisp("Kazama","...I see.
Then the other day, I guess you were just
coincidentally busy.");
MsgDisp("主人公","Recently...?");
ChEye(1,1);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G110100200_01_020");
MsgDisp("Kazama","...Did you forget?
I was crafting a plan to invite you out.
For a date.");
MsgDisp("主人公","Ah, sorry.
Things were really frantic that day.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G110100200_01_030");
MsgDisp("Kazama","...Geez.
Aren't you just frantic by birth?");
MsgDisp("主人公","Hey.
I was just really busy that day.");
ChEye(1,1);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("G110100200_01_040");
MsgDisp("Kazama","Alright, alright.
I completely understand that there was no
deeper meaning behind your rejection.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G110100200_01_050");
MsgDisp("Kazama","I'll invite you next time when things
aren't so hectic.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,1);
VoicePlay("G110100200_01_060");
MsgDisp("Kazama","...Phew.");
MsgDisp("主人公","(｛風真＊＊｝ was really worried...
The next time he invites me, I should make
sure I accept.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);