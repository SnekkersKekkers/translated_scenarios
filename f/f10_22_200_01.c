BGOpen("sc220",0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("F102220001_31_000");
MsgDisp("Goro?","Oh my!
I wonder why Ikkaku won't wear it?!");
VoicePlay("F102220001_22_000");
MsgDisp("Hikaru?","Ahー...
Uncle's fashion designs only suit a select
few after all...");
MsgDisp("主人公","(That voice...)");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(22,254,0,0,0,#1,#1,0,1,0,30);
ChOpen(31,254,0,0,0,#1,#1,0,2,0,30);
MsgDisp("主人公","｛ひかる＊｝.
Goro-sensei is also here again?");
ChEye(31,3);
ChMouth(31,3);
ChMotion(31,4);
VoicePlay("F102220001_31_010");
MsgDisp("Goro","Hello.
I came here because I wanted someone to
try on my new work.");
MsgDisp("主人公","Eh, you mean ｛ひかる＊｝?");
ChEye(22,4);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("F102220001_22_010");
MsgDisp("Hikaru","Nope～! Uncle's new designs are for men.
He gets his friend, the chairman to try it
on every time.");
ChEye(31,1);
ChMouth(31,1);
ChMotion(31,5);
VoicePlay("F102220001_31_020");
MsgDisp("Goro","Right. Even so, he ran away as soon as he
saw the clothes! Come on!");
MsgDisp("主人公","What in the world design was it?");
ChEye(31,2);
ChMouth(31,2);
ChMotion(31,3);
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("F102220001_22_020");
MsgDisp("Hikaru","Amazing～?
Lacy, fluffy shorts and a gold riders
jacket.");
ChEye(22,4);
ChMouth(22,3);
ChMotion(22,0,1);
VoicePlay("F102220001_22_030");
MsgDisp("Hikaru","Even Hikaru and the others haven't come
across that sort of design in their
modelling work.");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,0);
VoicePlay("F102220001_31_030");
MsgDisp("Goro","I don't need run-of-the mill designs in my
world.
Well then, adieu!");
MsgClose();
SEPlay("EV_SE_626");
ChClose(31);
ChPosition(22,0);
ChEye(22,2);
ChMouth(22,3);
ChMotion(22,2,1);
VoicePlay("F102220001_22_040");
MsgDisp("Hikaru","No～...I can see why Uncle is the best in
the world. No one else would have thought
of that.");
MsgDisp("主人公","(Maybe I would've liked to see the designs
by Goro-sensei...?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
