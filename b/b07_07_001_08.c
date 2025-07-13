MsgDisp("主人公","............");
ChEye(7,0);
ChMouth(7,4);
ChMotion(7,5);
VoicePlay("B070700001_07_620");
MsgDisp("Mikage","Hm? What's up?");
MsgDisp("主人公","Ah, I'm sorry.
I ended up staring at you.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("B070700001_07_630");
MsgDisp("Mikage","I don't particularly mind.");
MsgClose();
ScrFadeOut(0);
SEPlay("EV_SE_551");
Wait(40,1);
SEWait();
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("B070700001_07_640");
MsgDisp("Mikage","Come on, this is at maximum magnification.
Observe carefully.");
MsgDisp("主人公","...Y-You're close.
But, your eyes are pretty 
aren't they, ｛御影＊＊｝?");
ChEye(7,4);
ChMouth(7,4);
ChMotion(7,1);
VoicePlay("B070700001_07_650");
MsgDisp("Mikage","So are yours──");
MsgClose();
Wait(40,1);
SEPlay("EV_SE_551");
SEWait();
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,2);
ScrFadeIn(0);
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("B070700001_07_660");
MsgDisp("Mikage","Crap...
I upped the magnification too high.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("B070700001_07_670");
MsgDisp("Mikage","Listen, as the magnification increases,
your field of vision narrows.
It would be dangerous if you 
couldn't see your surroundings");
MsgDisp("主人公","Eh, is it dangerous?");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,4);
VoicePlay("B070700001_07_680");
MsgDisp("Mikage","That's right.
Phew... that was dangerous.");
MsgDisp("主人公","(｛御影＊＊｝'s eyes were so pretty,
my heart started to race...)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(7,#1);
ChMouthOpenLevel(7,#1);
ChCheek(7,0);
