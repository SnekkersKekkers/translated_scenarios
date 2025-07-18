BGOpen("sc210",0);
ChLayout(1);
MsgClose();
ChOpen(21,254,0,0,4,#1,#1,0,1,0,0);
ChOpen(6,254,0,0,0,#1,#1,0,2,0,0);
BGMPlay("BGM_HANYOU_A",0.01);
ScrFadeIn(0);
MsgDisp("主人公","(Ah, it's ｛みちる＊｝
and ｛氷室＊＊｝)");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("F102120000_06_000");
MsgDisp("Himuro","Even if you say that, I can't.");
ChEye(21,4);
ChMouth(21,4);
ChMotion(21,5);
VoicePlay("F102120000_21_000");
MsgDisp("Michiru","I don't understand.
Because that's what most people do, right?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("F102120000_06_010");
MsgDisp("Himuro","Seems that way.");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,0);
VoicePlay("F102120000_21_010");
MsgDisp("Michiru","The, why is it not the same for us?");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("F102120000_06_020");
MsgDisp("Himuro","Haa...
It's really hard to explain why.
Sorry, but this is all from me.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(6);
ChEye(21,4);
ChMouth(21,4);
ChMotion(21,2);
VoicePlay("F102120000_21_020");
MsgDisp("Michiru","Hey.
If the reason is complicated, I want to
know even more.");
MsgDisp("主人公","(What on earth are they talking about?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
