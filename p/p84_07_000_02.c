ScrFadeIn(0);
VoicePlay("P840700002_48_000");
MsgDisp("School Girl","Good work～ That's amazing. You ordered
the perfect amount of supplies?");
MsgDisp("主人公","Yes, just one piece left.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(7,254,0,0,0,#1,#1,0,0);
VoicePlay("P840700002_07_000");
MsgDisp("Mikage","Ohh, you have leftover cardboard?");
MsgDisp("主人公","Ah, ｛御影＊＊｝.
Yes, in the end exactly one piece.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("P840700002_07_010");
MsgDisp("Mikage","Oh, that helps.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("P840700002_07_020");
MsgDisp("Mikage","...Nevertheless, 
For only one piece to be left, 
seems like that was a great calculations.");
MsgDisp("主人公","Yes.
It was a coincidence but I was surprised
it was like my estimate.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("P840700002_07_030");
MsgDisp("Mikage","Then, with this last piece of cardboard, 
I'll put in some vegetables the 
gardening club grew. Share it with 
the student council club members.");
MsgDisp("主人公","Eh, is that alright?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
VoicePlay("P840700002_07_040");
MsgDisp("Mikage","Yeah. Everyone had fun due to you guys'
hard work. Wait a minute.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(7);
MsgDisp("主人公","(I'm truly happy that I prepared properly
and we were able to do it just as 
planned... hurray!)");
MsgClose();
ScrFadeOut(0,0);
