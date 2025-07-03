BGOpen("sc500",1);
SEPlay("EV_SE_SCHOOL_002");
ScrFadeIn(0);
MsgClose();
ChOpen(6,254,0,0,0,-1,-1,0,0);
MsgDisp("主人公","Ah, ｛氷室＊＊｝. Are you headed to the
beach after this, today too?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600700_06_000");
MsgDisp("Himuro","No, today I'm going to the game
centreー——");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,1);
VoicePlay("G110600700_06_010");
MsgDisp("Himuro","No......yes, I'm going to the beach.
I guess you're coming?");
MsgDisp("主人公","Ah, yes!");
SEStop("EV_SE_SCHOOL_002",2);
MsgClose();
ScrFadeOut(0);
ChClose(6,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev006",1);
ChOpen(6,100,0,0,0,-1,-1,0,0);
BGMPlay("BGM_C06_INORI_I",0.01);
ScrFadeIn(0);
MsgDisp("主人公","｛氷室＊＊｝, you were about to say
'game centre', were you planning to go?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600700_06_020");
MsgDisp("Himuro","You heard that huh......");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600700_06_030");
MsgDisp("Himuro","Well, yeah. I was wondering if I should
practice a bit.");
MsgDisp("主人公","Practice?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600700_06_040");
MsgDisp("Himuro","Practice to be able to get the crane game 
prizes out in one shot.");
MsgDisp("主人公","Eh......");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
VoicePlay("G110600700_06_050");
MsgDisp("Himuro","Because I was frustrated 
the last time we went together.");
MsgDisp("主人公","(｛氷室＊＊｝, 
was disappointed over that......)");
BGMStop();
MsgClose();
ScrFadeOut(0);
