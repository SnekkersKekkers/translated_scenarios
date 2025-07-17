SEPlay("EV_SE_700");
BGOpen("sc815",2);
MsgClose();
ChOpen(22,30,0,0,3,#1,#1,8,0);
ScrFadeIn(0);
MsgDisp("主人公","｛ひかる＊｝∋");
ChMotion(22,4,1);
VoicePlay("Q262200000_22_000");
MsgDisp("Hikaru","Aha▼
It's Mari, I'm glad!");
ChEye(22,4);
ChMouth(22,3);
ChMotion(22,2,1);
VoicePlay("Q262200000_22_010");
MsgDisp("Hikaru","It really is heart-thumping.
What if it was a guy?");
MsgDisp("主人公","(So that was
｛ひかる＊｝... )");
MsgClose();
ScrFadeOut(0,0);
ChClose(22,0,0);
