MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Uuugh, I fell...)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(1,254,0,0,2,-1,-1,0,0);
ChMotion(1,3);
VoicePlay("P740100001_01_000");
MsgDisp("Kazama","Oi, are you alright?");
MsgDisp("主人公","Yeah.
Sorry I worried you.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("P740100001_01_010");
MsgDisp("Kazama","It's good that you're not hurt.
It's not like you're in an outfit that 
makes it that hard to move around, is it?");
MsgDisp("主人公","(Haa...
Maybe I didn't practice quite enough...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
