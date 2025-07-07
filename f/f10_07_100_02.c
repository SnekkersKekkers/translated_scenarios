ChLayout(1);
BGOpen("sc510",0);
ScrFadeIn(0);
MsgDisp("主人公","(Next up I have class with ｛御影＊＊｝.
Let's stop by the science preparation
room.)");
SEPlay("EV_SE_FOOT_WALK_KEEP_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
SEPlay("EV_SE_DOOR_024");
SEWait();
VoicePlay("F100710002_07_000");
MsgDisp("Mikage","Ah, yes...");
MsgDisp("主人公","｛御影＊＊｝?");
SEPlay("EV_SE_DOOR_019");
SEWait();
MsgClose();
BGOpen("sc351",0);
BGMPlay("BGM_C07_MIKAGE_A",0.01);
ChOpen(7,255,0,2,0,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("F100710002_07_010");
MsgDisp("Mikage","O-Oh.
Welcome...");
MsgDisp("主人公","｛御影＊＊｝?
Those clothes...");
ChEye(7,2);
ChMouth(7,0);
VoicePlay("F100710002_07_020");
MsgDisp("Mikage","I forgot to take my suit 
to the dry cleaner...");
MsgDisp("主人公","Ehh∋");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,1);
ChEyeOpenLevel(7,0);
VoicePlay("F100710002_07_030");
MsgDisp("Mikage","Other than this, I only wear overalls");
MsgDisp("主人公","Eh? We have class in the science room
next, ｛御影＊＊｝, don't you normally wear
overalls?");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("F100710002_07_040");
MsgDisp("Mikage","Eeh, ah, I see....
I've been saved...");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(7);
VoicePlay("F100710002_07_050");
MsgDisp("Mikage","Thank goodness you came, 
I was going to go to class in 
these casual clothes...");
MsgDisp("主人公","Hehe, I'm glad.");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(7,37,0,0,0,-1,-1,0,0);
VoicePlay("F100710002_07_060");
MsgDisp("Mikage","That was a narrow
escape from death.");
MsgDisp("主人公","(But, ｛御影＊＊｝ also looked
good in his casual clothes.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
