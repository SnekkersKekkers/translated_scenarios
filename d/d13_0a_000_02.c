BGOpen("sc530",0);
ChLayout(2);
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(6,254,0,0,0,#1,#1,0,0,0,30);
ChOpen(2,254,0,0,4,#1,#1,0,1,0,30);
ChOpen(1,254,0,0,0,#1,#1,0,2,0,30);
ScrFadeIn(0);
MsgDisp("主人公","Ah, what's up?
Everyone's altogether.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("D130A00002_02_000");
MsgDisp("Sassa","What's up...huh?");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0,1);
VoicePlay("D130A00002_01_000");
MsgDisp("Kazama","Yeah.
The fact that you're empty handed is
making Inori feel down.");
MsgDisp("主人公","Eh?");
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,1);
ChEyeOpenLevel(6,0);
VoicePlay("D130A00002_06_000");
MsgDisp("Himuro","I'm not particularly down.");
ChEyeOpenLevel(1,0);
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("D130A00002_02_010");
MsgDisp("Sassa","Inori, don't worry.
There'll be another time.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
ChCheek(6,5);
VoicePlay("D130A00002_06_010");
MsgDisp("Himuro","What are you talking about?");
ChEye(1,0);
ChMouth(1,2);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
ChEyeOpenLevel(6,0);
VoicePlay("D130A00002_06_020");
MsgDisp("Himuro","...I'm busy, so please excuse me.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(6,0,30);
Wait(120,1);
MsgClose();
ChClose(2,0,30);
ChClose(1,0,30);
ChLayout(1);
MsgClose();
ChOpen(2,254,0,0,4,#1,#1,0,1,0,30);
ChOpen(1,254,0,2,3,#1,#1,0,2,0,30);
VoicePlay("D130A00002_01_010");
MsgDisp("Kazama","Oi, you two; don't bully your juniors.");
MsgDisp("主人公","Ehh?
Me?");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("D130A00002_01_020");
MsgDisp("Kazama","Yeah, especially you.
Did you know it was Valentine's day?");
MsgDisp("主人公","Ah!
I see...");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("D130A00002_02_020");
MsgDisp("Sassa","Haha, maybe we teased him too much.
Maybe you should go cheer him up.
See you then.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
BGMStop();
ChClose(1,0,30);
ChClose(2,0,30);
MsgDisp("主人公","(I see, today is Valentine's day.
｛氷室＊＊｝ was hoping for something...)");
MsgClose();
ScrFadeOut(0);
ChLayout(1);
