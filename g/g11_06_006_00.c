BGOpen("sc130",1);
ScrFadeIn(0);
MsgClose();
ChOpen(6,254,0,0,0,#1,#1,0,0);
MsgDisp("主人公","(Ah, it's ｛氷室＊＊｝! )");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(6);
MsgDisp("主人公","(......Ah, he left.
Okay, let's try chasing after him!)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev006",1);
MsgClose();
BGMPlay("BGM_C06_INORI_I");
ChOpen(6,100,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110600600_06_000");
MsgDisp("Himuro","......So, you really came all the way
here?
You have a lot of free time, don't you.");
MsgDisp("主人公","Ugh......");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600600_06_010");
MsgDisp("Himuro","But, maybe it's a good thing.
There's something I wanted to ask you too.");
MsgDisp("主人公","Eh, what?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
VoicePlay("G110600600_06_020");
MsgDisp("Himuro","......Before, You wanted to know what my
type was?
Why was that?");
MsgDisp("主人公","Umm...... even if I said that then, it was
just mere curiosity?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600600_06_030");
MsgDisp("Himuro","Other than that, there was no other
intention at all?");
MsgDisp("主人公","Um, yeah......");
ChEye(6,0);
ChMouth(6,1);
ChMotion(6,2);
VoicePlay("G110600600_06_040");
MsgDisp("Himuro","......Ah, is that so.
Then it's fine.");
MsgDisp("主人公","｛氷室＊＊｝?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
ChCheek(6,10);
VoicePlay("G110600600_06_050");
MsgDisp("Himuro","It's nothing.
I was just a bit curious.");
MsgDisp("主人公","Why?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600600_06_060");
MsgDisp("Himuro","Does there need to be a reason?
Even you asked me about my type for no
reason, right?");
MsgDisp("主人公","That's right but......");
ChEye(6,2);
ChMouth(6,1);
ChMotion(6,2);
ChCheek(6,0);
VoicePlay("G110600600_06_070");
MsgDisp("Himuro","It seems that I was an idiot for worrying
so much.");
MsgDisp("主人公","(｛氷室＊＊｝...... That question really
worried you, huh......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
