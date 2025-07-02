ChEye(31,4);
ChMouth(31,4);
ChMotion(31,2);
ScrFadeIn(0);
VoicePlay("P843100003_31_000");
MsgDisp("Goro","Haa...that's enough.");
MsgDisp("主人公","Eh?
ＧＯＲＯ-sensei, what's the matter?");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,5);
ChEyeOpenLevel(31,8);
VoicePlay("P843100003_31_010");
MsgDisp("Goro","Seems you're unaware.
What a terrifying girl...");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,0);
VoicePlay("P843100003_31_020");
MsgDisp("Goro","You were in charge of materials management
today right? You've been asked for advice 
quite a lot for a while now.");
MsgDisp("主人公","Ah, yes..");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,2);
VoicePlay("P843100003_31_030");
MsgDisp("Goro","Please carry out your own duties.
Thanks for accompanying me.
Well then, Adieu.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(31);
MsgDisp("主人公","(I made ＧＯＲＯ-sensei worry about me...
A huge fail...)");
MsgClose();
ScrFadeOut(0);
