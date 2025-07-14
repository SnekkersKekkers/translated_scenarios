MsgClose();
ChClose(6,0,0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
BGOpen("ne320",0);
ChLayout(2);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0,1);
ScrFadeIn(0);
SEPlay("EV_SE_086");
Wait(15,1);
SEPlay("EV_SE_869");
SEPlay("EV_SE_062");
SEWait();
VoicePlay("B330C20500_06_000");
MsgDisp("Himuro","Yeah, it's in.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
Wait(20,1);
ChOpen(6,255,0,0,4,#1,#1,0,3);
MsgDisp("主人公","Amazing, ｛氷室＊＊｝!");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0,1);
VoicePlay("B330C20500_05_000");
MsgDisp("Hiiragi","Yes, it landed in the center all three
times.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("B330C20500_07_000");
MsgDisp("Mikage","Inori, you're good at this.
Teach me the trick.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,1);
VoicePlay("B330C20500_06_010");
MsgDisp("Himuro","Okay.");
MsgClose();
SEPlay("EV_SE_856");
ChClose(6,0,30);
ChClose(7,0,30);
ChEye(5,0);
SEWait();
VoicePlay("B330C20500_06_020");
MsgDisp("Himuro","Sensei has a long reach, so stretch your
arm as far as you can, get close to the
target, and throw.");
VoicePlay("B330C20500_07_010");
MsgDisp("Mikage","Uh— 
h-how is it, like this?");
VoicePlay("B330C20500_06_030");
MsgDisp("Himuro","More.
...Yeah, like that.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT",0,0.6);
ChClose(5);
ChLayout(1);
SEPlay("EV_SE_544");
MsgClose();
ChOpen(5,255,0,0,4,#1,#1,0,0);
VoicePlay("B330C20500_05_010");
MsgDisp("Hiiragi","Inori-kun is like a teacher.");
MsgDisp("主人公","Hehe, yeah.");
MsgClose();
Wait(10,1);
ChClose(5,0,30);
ChOpen(5,255,7,4,4,#1,#1,0,2,0,30);
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChOpen(6,255,0,0,4,#1,#1,0,1,0,30);
SEWait();
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0,1);
VoicePlay("B330C20500_05_020");
MsgDisp("Hiiragi","Inori-kun, 
Please teach me next too.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,4);
VoicePlay("B330C20500_06_040");
MsgDisp("Himuro","Eh? I'm stopping here. Since I might be
teaching wrong things....");
ChEye(5,3);
ChMouth(5,2);
ChMotion(5,0);
VoicePlay("B330C20500_05_030");
MsgDisp("Hiiragi","Eh, you were teaching Mikage-sensei just
now?");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,3);
VoicePlay("B330C20500_06_050");
MsgDisp("Himuro","I was messing.
See, teaching a teacher is kind of
interesting.");
MsgDisp("主人公","Ehhh∋");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0,1);
VoicePlay("B330C20500_05_040");
MsgDisp("Hiiragi","Hehe, Inori-kun is a fun person.");
SEPlay("EV_SE_086");
Wait(15,1);
SEPlay("EV_SE_087");
SEWait();
VoicePlay("B330C20500_07_020");
MsgDisp("Mikage","Ah, all of them were failures.");
MsgDisp("主人公","(｛御影＊＊｝... Was ｛氷室＊＊｝ toying
with you?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
ChClose(5,0,0);
ChLayout(2);
ChOpen(6,253,7,0,0,#1,#1,0,3,0,0);
ChOpen(5,253,7,0,0,#1,#1,0,3,0,0);
ChOpen(7,253,7,0,0,#1,#1,0,3,0,0);
