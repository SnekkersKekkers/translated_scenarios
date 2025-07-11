BGOpen("sc530",0);
ChLayout(2);
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(3,254,5,3,3,-1,-1,0,1,0,30);
ChNanaType(0);
ChOpen(4,254,0,0,3,-1,-1,0,2,0,30);
MsgClose();
ChOpen(1,254,1,0,2,0,-1,0,0);
ScrFadeIn(0);
VoicePlay("D130B00000_03_000");
MsgDisp("Honda","She's coming, she's coming!");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
MsgDisp("主人公","Ah.
Good morning you guys.");
VoicePlay("D130B00000_04_000");
MsgDisp("Nanatsumori","Morning.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("D130B00000_01_000");
MsgDisp("Kazama","Oi, that's enough.
Let's go?");
MsgDisp("主人公","Eh.
Did you have some business with me?");
ChEye(1,2);
ChEyeOpenLevel(1,0);
ChMotion(4,1,1);
VoicePlay("D130B00000_04_010");
MsgDisp("Nanatsumori","Nah.
Not us anyways.
right, Dahon.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("D130B00000_03_010");
MsgDisp("Honda","Right right. If there's something you 
need to discuss, it's with Ryo-kun.
Juuuust you two!");
MsgClose();
SEPlay("EV_SE_856");
ChClose(3,0,30);
ChClose(4,0,30);
ChEye(1,0);
ChMotion(1,1);
VoicePlay("D130B00000_01_010");
MsgDisp("Kazama","It's none of your business.");
ChMotion(1,0);
Wait(10,1);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
Wait(30,1);
ChClose(1,0,30);
ChLayout(1);
MsgClose();
ChOpen(1,254,0,0,2,-1,-1,0,0,0,30);
MsgDisp("主人公","｛風真＊＊｝, what business
did you have with me?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("D130B00000_01_020");
MsgDisp("Kazama","It's more on your part.
I'm gonna return to class first.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(1);
MsgDisp("主人公","(Ah... today is Valentine's day, 
I wonder if he's worried over that...?)");
MsgClose();
ScrFadeOut(0,0);
