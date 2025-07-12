BGOpen("sc210",0);
ChLayout(1);
ScrFadeIn(0);
MsgClose();
BGMPlay("BGM_C06_INORI_A");
ChOpen(6,254,0,0,0,#1,#1,0,0);
VoicePlay("L060600001_06_000");
MsgDisp("Himuro","Found you.");
MsgDisp("主人公","Ah, ｛氷室＊＊｝.
What?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
ChCheek(6,10);
VoicePlay("L060600001_06_010");
MsgDisp("Himuro","......Hey.
I'll just say this first, but
it's the thought that counts, okay?");
MsgDisp("主人公","Huh?");
SEPlay("EV_SE_664");
SEWait();
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("L060600001_06_020");
MsgDisp("Himuro","Here.
I don't take returns.");
MsgDisp("主人公","Is this for White Day?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("L060600001_06_030");
MsgDisp("Himuro","Yeah.
......'Cuz I was happy about Valentine's.");
MsgDisp("主人公","Hehe, thanks!");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("L060600001_06_040");
MsgDisp("Himuro","You're welcome.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("L060600001_06_050");
MsgDisp("Himuro","That's all I needed.
See you.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(6);
MsgDisp("主人公","(I got a present from ｛氷室＊＊｝
in return for Valentine's!
I'm so happy.)");
