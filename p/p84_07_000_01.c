ScrFadeIn(0);
VoicePlay("P840700001_48_000");
MsgDisp("School Girl","That was bad wasn't it...
Getting their name wrong
was the most impolite.");
MsgDisp("主人公","Y-Yes.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(7,254,0,2,0,#1,#1,0,0);
VoicePlay("P840700001_07_000");
MsgDisp("Mikage","Oi, what's wrong.
Why are you making that face.");
MsgDisp("主人公","Ah, ｛御影＊＊｝...
I got the guest's names
wrong many times...");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("P840700001_07_010");
MsgDisp("Mikage","Haha, seriously.
You're as funny as ever.");
MsgDisp("主人公","Uuugh...
This is no laughing matter, 
it's inexcusable...");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("P840700001_07_020");
MsgDisp("Mikage","Ohh, sorry, sorry.
But, did you apologise properly?");
MsgDisp("主人公","Yes.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("P840700001_07_030");
MsgDisp("Mikage","Then, that'll settle it.
Everyone makes mistakes.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,2);
VoicePlay("P840700001_07_040");
MsgDisp("Mikage","It's kind of funny that you did it 
over and over again though.");
MsgDisp("主人公","(Haa... If only I had looked over
the list of names properly...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
