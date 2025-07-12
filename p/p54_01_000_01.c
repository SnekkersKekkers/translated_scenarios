BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Haa... I failed...)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(1,254,0,0,0,#1,#1,0,0);
VoicePlay("P540100001_01_000");
MsgDisp("Kazama","You did everything you could?");
MsgDisp("主人公","No, I should have practiced more.
I'm so sorry to everyone....");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("P540100001_01_010");
MsgDisp("Kazama","It's alright.
You did your utmost best, 
that was properly conveyed.");
MsgDisp("主人公","But...");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("P540100001_01_020");
MsgDisp("Kazama","After that, it's just about 
you coming to terms with it.
You can start practicing today, right?");
MsgDisp("主人公","...Yeah.");
MsgDisp("主人公","(It's as ｛風真＊＊｝ says.
Kazama is right. 
I'll practice until I'm satisfied! )");
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
