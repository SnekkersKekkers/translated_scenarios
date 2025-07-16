BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I'm glad, looks like it went well!)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(3,254,4,4,3,#1,#1,0,0);
VoicePlay("P540300004_03_000");
MsgDisp("Honda","Ahー,I've been defeatedー......");
MsgDisp("主人公","Eh?
｛本多＊＊｝, what's wrong?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("P540300004_03_010");
MsgDisp("Honda","This is the first time I've cried
listening to a performance.");
MsgDisp("主人公","Eh?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("P540300004_03_020");
MsgDisp("Honda","Because your solo part was unfair.
The tears just came out of my eyes at that
point.");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,0,1);
VoicePlay("P540300004_03_030");
MsgDisp("Honda","I know you've been practicing with the
utmost effort.");
MsgDisp("主人公","｛本多＊＊｝...");
ChEye(3,2);
ChMouth(3,4);
ChMotion(3,2,1);
VoicePlay("P540300004_03_040");
MsgDisp("Honda","... Ah, here we go again.
This might be hopeless.");
MsgDisp("主人公","(Seems like he was super moved!
I'm truly glad I gave it my all these last
three years in the wind music club...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
