BGOpen("fp100",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","... Alright.
Time to head home.");
MsgClose();
BGMPlay("BGM_C01_RYOUTA_A",0.01);
ChOpen(1,35,0,0,0,#1,#1,0,0);
VoiceEVSPlay(1);
VoicePlay("E010110100_01_000");
MsgDisp("Kazama","｛主人公｝.");
MsgDisp("主人公","｛風真＊＊｝!
Were you working today?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("E010110100_01_010");
MsgDisp("Kazama","No, just filling in.
I was just gonna take a break.");
MsgDisp("主人公","I see, good work!");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,4);
VoicePlay("E010110100_01_020");
MsgDisp("Kazama","I was prepared for the weekend to be busy,
but I swear that there's a lot of
customers asking for me specifically.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,2);
ChEyeOpenLevel(1,0);
VoicePlay("E010110100_01_030");
MsgDisp("Kazama","Isn't it weird?
How did they know I'd be here today, if
I'm just filling in...");
VoicePlay("E010110100_47_000");
MsgDisp("Woman Customer A","I heard Kazama-kun's at Simon today!");
ChEye(1,0);
ChMotion(1,3);
VoicePlay("E010110100_48_000");
MsgDisp("Woman Customer B","Yeah, I got the info too.
Let's hurry!");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("E010110100_01_040");
MsgDisp("Kazama","... Info?
I wonder if I'm being monitored...");
MsgDisp("主人公","｛風真＊＊｝, that's...");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("E010110100_01_050");
MsgDisp("Kazama","I'll get going, I can't let it bother the
manager.");
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
BGMStop();
MsgClose();
ChClose(1);
Wait(60,0);
VoicePlay("E010110100_01_060");
MsgDisp("Kazama","Sorry for keeping you waiting.");
SEPlay("EV_SE_637",0.3,0.3);
Wait(30,0);
VoicePlay("E010110100_47_010");
MsgDisp("Woman Customer A","Ah, there's Kazama-kun!
We need your advice for a gift～!");
SEStop("EV_SE_637",2);
MsgDisp("主人公","(｛風真＊＊｝ seems to be getting more and
more popular. He seems tired though... I
wonder if he's alright.)");
SEWait();
MsgClose();
ScrFadeOut(0,0);
