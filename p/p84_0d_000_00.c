BGMStop();
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
SEWait();
ChOpen(21,254,0,0,0,#1,#1,0,1);
ChOpen(22,254,0,0,3,#1,#1,0,2);
ScrFadeIn(0);
VoicePlay("P840D00000_22_000");
MsgDisp("Hikaru","Amazing.
You tidied it up in an instant, 
And even served everyone tea...");
MsgDisp("主人公","There's enough for you guys too.
Yes, help yourself.");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("P840D00000_21_000");
MsgDisp("Michiru","Thank you, Mari.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("P840D00000_22_010");
MsgDisp("Hikaru","Mari... is like a Mama!
Amaーzing...!");
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,4);
VoicePlay("P840D00000_21_010");
MsgDisp("Michiru","A thoughtful, considerate 
and charming person.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,2,1);
ChEyeOpenLevel(22,0);
VoicePlay("P840D00000_22_020");
MsgDisp("Hikaru","Ah, Hikaru's tea has an upright tea stalk!
I'm super happy～▼");
MsgDisp("主人公","(Yay!
Seems like preparations went well!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(21,0,0);
ChClose(22,0,0);
