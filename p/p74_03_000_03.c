MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Aah, I failed.
I fell down...)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(3,254,1,0,4,-1,-1,0,0);
VoiceEVSPlay(3);
VoicePlay("P740300003_03_000");
MsgDisp("Honda","｛主人公｝,
You're not injured right?");
MsgDisp("主人公","Ah,｛本多＊＊｝.
I'm alright, but I failed.");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("P740300003_03_010");
MsgDisp("Honda","Eh?
Your beautiful dress was well liked.
To the point peoplem were sighing in awe.");
MsgDisp("主人公","Y-yeah...
But, I fell down...
It was a fail...");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("P740300003_03_020");
MsgDisp("Honda","Nope, 
Since you weren't injured, you failed
safely successfully!");
MsgDisp("主人公","(｛本多＊＊｝, were you trying to cheer me
up? But, I definitely didn't practice
enough for the show...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
