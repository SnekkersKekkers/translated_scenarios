MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Haa... I fell...)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(7,254,0,0,0,#1,#1,0,0);
VoicePlay("P740700001_07_000");
MsgDisp("Mikage","I'm glad.
It doesn't seem like you're injured.");
MsgDisp("主人公","Yes.
But it was a huge fail...");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("P740700001_07_010");
MsgDisp("Mikage","Well sure. But only the current you can
create those wonderful clothes. You're
satisfied with the work itself, right?");
MsgDisp("主人公","Yes...");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("P740700001_07_020");
MsgDisp("Mikage","Then, it's fine.
Even falling down flat on your face will
become a wonderful memory.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,2);
VoicePlay("P740700001_07_030");
MsgDisp("Mikage","Haha, that was a pretty poor end though,
huh?");
MsgDisp("主人公","(Uuugh... I wish I had practiced more
carefully for the show...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
