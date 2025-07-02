ChEye(31,1);
ChMouth(31,1);
ChMotion(31,1);
ScrFadeIn(0);
VoicePlay("P143100000_31_000");
MsgDisp("Goro","Haa, haa, haa...");
MsgDisp("主人公","ＧＯＲＯ-sensei, 
are you alright?");
ChEye(31,1);
ChMouth(31,1);
ChMotion(31,0);
ChEyeOpenLevel(31,0);
VoicePlay("P143100000_31_010");
MsgDisp("Goro","It's already no good.");
MsgDisp("主人公","Did you not like it..?");
ChEye(31,2);
ChMouth(31,2);
ChMotion(31,2);
ChEyeOpenLevel(31,0);
VoicePlay("P143100000_31_020");
MsgDisp("Goro","Non, non.
The cow collab maze is fun～♪
I'll go once again!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(31);
MsgDisp("主人公","(ＧＯＲＯ-sensei seems to like it!
Yay, a huge success!)");
MsgClose();
ScrFadeOut(0,0);
