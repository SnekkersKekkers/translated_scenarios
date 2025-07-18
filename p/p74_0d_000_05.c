MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I fell...
Even though it was my last show...)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
SEWait();
ChOpen(21,254,0,4,0,#1,#1,0,1);
ChOpen(22,254,0,2,0,#1,#1,0,2);
VoicePlay("P740D00005_21_000");
MsgDisp("Michiru","Good work, Mari.");
ChEye(22,2);
ChMouth(22,0);
ChMotion(22,3,1);
VoicePlay("P740D00005_22_000");
MsgDisp("Hikaru","...Cheer up!
The scatterbrained bride was cute?");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,5);
VoicePlay("P740D00005_21_010");
MsgDisp("Michiru","Hikaru...that's not a compliment.");
MsgDisp("主人公","Uuugh...");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,5,1);
VoicePlay("P740D00005_22_010");
MsgDisp("Hikaru","It's alright!
To Hikaru, Mari is the world's number one
cutest bride!");
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,4);
VoicePlay("P740D00005_21_020");
MsgDisp("Michiru","I can't deny that?");
MsgDisp("主人公","(It was a fail even at the end...
But, I'm glad I continued with the
handicrafts club for three years...)");
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChClose(21,0,0);
ChClose(22,0,0);
