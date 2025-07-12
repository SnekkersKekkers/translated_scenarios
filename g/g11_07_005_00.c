BGOpen("sc210",0);
ScrFadeIn(0);
MsgDisp("主人公","......Hey? It looks like someones in the
gardening club's fields.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
BGOpen("ev007",0);
BGMPlay("BGM_C07_MIKAGE_A");
ChOpen(7,100,2,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","｛御影＊＊｝. You still take care of the
plants even on your lunch break?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700500_07_000");
MsgDisp("Mikage","Oh.
Is that why you're here too?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700500_07_010");
MsgDisp("Mikage","The more time you invest into it, 
the more beautiful they will grow.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700500_07_020");
MsgDisp("Mikage","......Well, isn't it the same for people?");
MsgDisp("主人公","Eh?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("G110700500_07_030");
MsgDisp("Mikage","I'm telling you, you're becoming beautiful
too.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700500_07_040");
MsgDisp("Mikage","Maybe it's because recently I've been
investing a lot of effort into you?");
MsgDisp("主人公","Effort?");
SEPlay("EV_SE_SCHOOL_002");
Wait(30,0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("G110700500_07_050");
MsgDisp("Mikage","Damn, lunch time is over.
See you then.");
MsgDisp("主人公","(Effort...... Is he talking about how we
went out together?)");
SEStop("EV_SE_SCHOOL_002",1);
BGMStop();
MsgClose();
ScrFadeOut(0,0);
