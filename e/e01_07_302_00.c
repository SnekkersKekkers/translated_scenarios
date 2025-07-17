ChLayout(1);
BGOpen("wf200",1);
ScrFadeIn(0);
MsgDisp("主人公","(Phew, I should go home soon...)");
VoicePlay("E010730200_07_000");
MsgDisp("Mikage?","Inori, if you add some fried vegetables,
it'll taste even better.");
MsgDisp("主人公","(Huh?
That voice just now was...)");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(7,255,0,0,0,#1,#1,0,1,0,30);
ChOpen(6,255,0,0,0,#1,#1,0,2,0,30);
VoicePlay("E010730200_06_000");
MsgDisp("Himuro","Huh, why...");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoiceEVSPlay(7);
VoicePlay("E010730200_07_010");
MsgDisp("Mikage","｛主人公｝.
Hey, you look well.");
MsgDisp("主人公","Yes, hello.
What were you both talking about?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("E010730200_07_020");
MsgDisp("Mikage","Inori was stocking up on instant ramen.
I was telling him to eat vegetables too.");
MsgDisp("主人公","Eh?
｛氷室＊＊｝, you can't just eat
instant ramen.");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("E010730200_06_010");
MsgDisp("Himuro","Ugh... fine.
I understand.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,2);
VoicePlay("E010730200_07_030");
MsgDisp("Mikage","Alright. Next time I'll prepare you some
vegetables. Pick them up at the science
prep room, okay?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("E010730200_06_020");
MsgDisp("Himuro","Okay... but, please don't include any
eggplant...
Well then, please excuse me.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(6);
ChPosition(7,0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("E010730200_07_040");
MsgDisp("Mikage","Hahaha. What's with him? The moment you
arrived, he became so obedient.");
MsgDisp("主人公","Eh?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("E010730200_07_050");
MsgDisp("Mikage","As punishment, I'll prepare a lot of
eggplant for him.");
MsgDisp("主人公","(｛御影＊＊｝, you're worried about
｛氷室＊＊｝'s health, aren't
you...?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
