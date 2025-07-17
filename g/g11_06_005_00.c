BGOpen("sc130",1);
ScrFadeIn(0);
MsgDisp("主人公","Ah, ｛氷室＊＊｝, are you going to
the beach after this today too?");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(6,254,0,0,0,#1,#1,0,0);
VoicePlay("G110600500_06_000");
MsgDisp("Himuro","Ah, yeah.
... That's right.
I guess you're coming too.");
MsgDisp("主人公","Eh?
Y-Yes.");
MsgClose();
MsgClose();
ScrFadeOut(0);
MsgClose();
ChClose(6,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev006",1);
BGMPlay("BGM_C06_INORI_I");
ChOpen(6,100,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110600500_06_010");
MsgDisp("Himuro","...Congratulations.");
MsgDisp("主人公","Eh?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600500_06_020");
MsgDisp("Himuro","I never thought that you would continue to
get first place in the end-of-term exams.");
MsgDisp("主人公","Hehe, well I'm glad!");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ChEyeOpenLevel(6,0);
VoicePlay("G110600500_06_030");
MsgDisp("Himuro","Don't get too carried away.
If you let your guard down, who knows what
might happen.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
VoicePlay("G110600500_06_040");
MsgDisp("Himuro","I'm sure there were many people who were
motivated by this and now want to beat
you.");
MsgDisp("主人公","That's probably true.
I have to give it my all.");
ChEye(6,0);
ChMouth(6,1);
ChMotion(6,0);
VoicePlay("G110600500_06_050");
MsgDisp("Himuro","...The next time you get first place, I'll
give you a reward.");
MsgDisp("主人公","Eh, reward?");
ChEye(6,0);
ChMouth(6,1);
ChMotion(6,1);
VoicePlay("G110600500_06_060");
MsgDisp("Himuro","Yes.
As long as it's within my capabilities,
anything is okay.");
MsgDisp("主人公","Really?
Then... can you praise me?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600500_06_070");
MsgDisp("Himuro","Eh...are you really okay with that?");
MsgDisp("主人公","Yes!");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600500_06_080");
MsgDisp("Himuro","Hmm, understood.");
MsgDisp("主人公","Yes, then I'll give it my all!");
ChEye(6,0);
ChMouth(6,1);
ChMotion(6,0);
VoicePlay("G110600500_06_090");
MsgDisp("Himuro","...Your motivation is pretty cheap.");
ChEye(6,1);
ChMouth(6,1);
ChMotion(6,1);
ChEyeOpenLevel(6,0);
VoicePlay("G110600500_06_100");
MsgDisp("Himuro","But, do your best.
I'm rooting for you.");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
