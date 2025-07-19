BGOpen("ho100",2);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_DOOR_001");
SEWait();
MsgDisp("主人公","Coming!");
SEPlay("EV_SE_DOOR_022");
SEWait();
SEPlay("EV_SE_DOOR_023",0,0.3);
MsgClose();
BGMPlay("BGM_C01_RYOUTA_A");
ChOpen(1,255,0,0,3,#1,#1,0,0);
VoiceEVSPlay(1);
VoicePlay("K020100001_01_000");
MsgDisp("Kazama","｛主人公｝.
Sorry for the short notice.");
MsgDisp("主人公","Hm?
｛風真＊＊｝, what's up?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,4);
ChCheek(1,5);
VoicePlay("K020100001_01_010");
MsgDisp("Kazama","I couldn't make it on the actual day.
I rushed over here to give it to you.");
ChEye(1,0);
ChMotion(1,0);
MsgDisp("主人公","Could it be...");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
ChCheek(1,0);
VoicePlay("K020100001_01_020");
MsgDisp("Kazama","What else?");
SEPlay("EV_SE_665");
SEWait();
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("K020100001_01_030");
MsgDisp("Kazama","Happy birthday.
Let's celebrate.");
MsgDisp("主人公","Thank you, ｛風真＊＊｝!");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("K020100001_01_040");
MsgDisp("Kazama","It's not that I forgot.
Don't doubt that.");
MsgDisp("主人公","Hehe, I know.
Can I open this?");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
ChCheek(1,5);
VoicePlay("K020100001_01_050");
MsgDisp("Kazama","You can't.
I don't know what expression to have while
standing here.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,3);
ChCheek(1,0);
VoicePlay("K020100001_01_060");
MsgDisp("Kazama","See you.
Open it later in your room.");
MsgClose();
SEPlay("EV_SE_DOOR_022");
SEWait();
SEPlay("EV_SE_DOOR_023",0,0.3);
BGMStop();
ChClose(1);
MsgDisp("主人公","(I got a present from ｛風真＊＊｝!)");
MsgClose();
ScrFadeOut(0,0);
