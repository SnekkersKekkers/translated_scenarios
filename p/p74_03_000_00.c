MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I'm glad,
seems like it was somewhat of a success!)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(3,254,1,0,3,-1,-1,0,0);
VoicePlay("P740300000_03_000");
MsgDisp("Honda","Your model walk was so stylish!");
MsgDisp("主人公","Thank you, it's Haba School
handicraft club's tradition.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("P740300000_03_010");
MsgDisp("Honda","Hmmーm, but you're number one. The
audience's applause was loudest for you.");
MsgDisp("主人公","(Hehe!
Yay, it was a huge success!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
