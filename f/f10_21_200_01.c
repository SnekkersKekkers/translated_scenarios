BGOpen("sc210",0);
ChLayout(1);
MsgClose();
ChOpen(21,254,0,0,4,-1,-1,0,1,0,0);
ChOpen(6,254,0,0,0,-1,-1,0,2,0,0);
BGMPlay("BGM_HANYOU_A",0.01);
ScrFadeIn(0);
MsgDisp("主人公","(Ah, it's ｛みちる＊｝ and ｛氷室＊＊｝ )");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,0);
VoicePlay("F102120001_21_000");
MsgDisp("Michiru","Hey, it's getting complicated
even for you, right?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("F102120001_06_000");
MsgDisp("Himuro","Not really.
I can tell the difference 
intuitively.");
ChEye(21,4);
ChMouth(21,4);
ChMotion(21,1);
VoicePlay("F102120001_21_010");
MsgDisp("Michiru","Hey!
You really are a contrararian.");
MsgDisp("主人公","Hey,｛みちる＊｝,｛氷室＊＊｝!
What are you two talking about?");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("F102120001_21_020");
MsgDisp("Michiru","Ah, Mari.");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("F102120001_06_010");
MsgDisp("Himuro","...Seems like it's a 
puzzling conversation.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("F102120001_06_020");
MsgDisp("Himuro","Then, that's all from me.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(6);
ChEye(21,4);
ChMouth(21,4);
ChMotion(21,2);
VoicePlay("F102120001_21_030");
MsgDisp("Michiru","Haa...
he ran away again.");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("F102120001_21_040");
MsgDisp("Michiru","Maybe he would be at a 
disadvantage with Mari here?");
MsgDisp("主人公","（？？？）");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
