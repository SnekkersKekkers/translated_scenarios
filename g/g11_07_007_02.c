BGOpen("sc310",0);
ScrFadeIn(0);
MsgDisp("主人公","(Ah, oh yeah. I have to thank
｛御影＊＊｝ for the
shearing event at the ranch.)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev007",0);
BGMPlay("BGM_C07_MIKAGE_A");
ChOpen(7,100,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(7);
VoicePlay("G110700702_07_000");
MsgDisp("Mikage","｛主人公｝, I'm happy you showed
up.");
MsgDisp("主人公","｛御影＊＊｝, thank you
very much for the shearing event at the
ranch.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("G110700702_07_010");
MsgDisp("Mikage","That's great but, next time you should
thank me in a more interesting way.");
MsgDisp("主人公","Huh?");
ChEye(7,0);
ChMouth(7,1);
ChMotion(7,0);
VoicePlay("G110700702_07_020");
MsgDisp("Mikage","Come on, am I just the biology teacher at
your school to you?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700702_07_030");
MsgDisp("Mikage","A mysterious (manly) guy in a jumpsuit who
jumped in and joined.");
MsgDisp("主人公","Hehe!
Well then, what should I say?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("G110700702_07_040");
MsgDisp("Mikage","What should I say?
A little riddle would be interesting?
Please write one next time.");
MsgDisp("主人公","Okay then, please let me know when the
next shearing event is.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("G110700702_07_050");
MsgDisp("Mikage","Am I the shearing specialist now?");
MsgDisp("主人公","(Hehe, I want to go to the ranch now
instead of interviewing
｛御影＊＊｝... )");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
