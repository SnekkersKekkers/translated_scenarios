ChLayout(1);
BGOpen("sc520",1);
ScrFadeIn(0);
MsgDisp("主人公","(Well, seems like it's about time to go
home...)");
VoicePlay("F100740001_07_000");
MsgDisp("Mikage?","P-Please stop.");
MsgDisp("主人公","(Eh? That voice just now, was
｛御影＊＊｝, right? What's wrong...?)");
VoicePlay("F100740001_32_000");
MsgDisp("VP Himuro?",".........!
Are you really that worried?");
VoicePlay("F100740001_07_010");
MsgDisp("Mikage","Eh?");
VoicePlay("F100740001_32_010");
MsgDisp("VP Himuro?","Come out, please.");
MsgDisp("主人公","...Y-Yes.
I'm sorry.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
BGOpen("sc510",1);
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(7,254,0,0,4,#1,#1,0,1,0,30);
ChOpen(32,254,0,0,0,#1,#1,0,2,0,30);
ScrFadeIn(0);
ChEye(7,0);
ChMouth(7,4);
ChMotion(7,0);
VoicePlay("F100740001_07_020");
MsgDisp("Mikage","Oi, what's up?");
MsgDisp("主人公","Um, I heard ｛御影＊＊｝'s voice,
so...");
ChEye(32,2);
ChMouth(32,0);
VoicePlay("F100740001_32_020");
MsgDisp("VP Himuro","...I'm not scolding your Mikage-sensei.
Please relax.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
VoicePlay("F100740001_07_030");
MsgDisp("Mikage","Hahaha. So you were worried about me.
Thank you.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("F100740001_07_040");
MsgDisp("Mikage","I mean, I'm not always just getting
scolded, you know?");
ChEye(32,0);
ChMouth(32,0);
ChEyeOpenLevel(32,0);
VoicePlay("F100740001_32_030");
MsgDisp("VP Himuro","Haa... I
was definitely praising you.");
MsgDisp("主人公","Eh∋");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("F100740001_07_050");
MsgDisp("Mikage","Hey, you're too surprised.");
MsgDisp("主人公","Ah, I'm sorry.");
ChEye(32,0);
ChMouth(32,0);
VoicePlay("F100740001_32_040");
MsgDisp("VP Himuro","You're not my ideal
image of a teacher...");
ChEye(7,0);
ChMouth(7,4);
ChMotion(7,1);
VoicePlay("F100740001_07_060");
MsgDisp("Mikage","Vice Principal Himuro?
What's wrong?");
ChEye(32,1);
ChMouth(32,0);
ChEyeOpenLevel(32,0);
VoicePlay("F100740001_32_050");
MsgDisp("VP Himuro","It's nothing.
My apologies.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(32);
SEWait();
ChPosition(7,0);
MsgDisp("主人公","That's great.
So you were being praised?");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("F100740001_07_070");
MsgDisp("Mikage","It's kind of crazy.
But, it's fine every once in a while.");
ChEye(7,0);
ChMouth(7,3);
VoicePlay("F100740001_07_080");
MsgDisp("Mikage","Then, be careful going home.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(7);
MsgDisp("主人公","(｛御影＊＊｝ seems happy!
Even I'm somewhat happy!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
