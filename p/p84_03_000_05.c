ScrFadeIn(0);
VoicePlay("P840300005_48_000");
MsgDisp("School Girl","Excuse me, I found a lost meal ticket.");
MsgDisp("主人公","Ah, thank you very much.
Please write an entry of where you found
it in this lost items notebook.");
VoicePlay("P840300005_48_010");
MsgDisp("School Girl","...Notebook?");
MsgClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(3,254,1,0,0,#1,#1,0,0);
VoiceEVSPlay(3);
VoicePlay("P840300005_03_000");
MsgDisp("Honda","｛主人公｝, good work.");
MsgDisp("主人公","Ah, ｛本多＊＊｝.
Did you find your meal ticket?");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("P840300005_03_010");
MsgDisp("Honda","No. I bought another one, so let's eat
together later. My lost items are my own
responsibility.");
MsgDisp("主人公","Y-Yeah...that's right huh?");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("P840300005_03_020");
MsgDisp("Honda","Is something the matter?");
MsgDisp("主人公","Seems like I lost the lost items notebook,
so the management is already in a
disarray...");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,5,1);
VoicePlay("P840300005_03_030");
MsgDisp("Honda","Ehh? The lost-and-found notebook going
missing is like the biter being bit. It's
funny.");
ChEye(3,2);
ChMouth(3,4);
ChMotion(3,2,1);
VoicePlay("P840300005_03_040");
MsgDisp("Honda","Haa, I can't laugh.
Let's both be careful with looking after
our things.");
MsgDisp("主人公","(Haa...even though it was my last cultural
festival, and I need to calm down and get
to work...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
