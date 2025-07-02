MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Uuugh, I fell...)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
SEWait();
ChOpen(5,254,0,0,4,-1,-1,0,0);
VoicePlay("P740500001_05_000");
MsgDisp("Hiiragi","Thank you for your hard work.");
MsgDisp("主人公","｛柊＊＊＊｝...");
ChMotion(5,4);
VoicePlay("P740500001_05_010");
MsgDisp("Hiiragi","Your clothes were wonderful, 
Maybe you just get enough
practice for the walking?");
MsgDisp("主人公","...Yeah.
I wasn't attentive to that side of things.");
ChEye(5,2);
ChMotion(5,0);
ChEyeOpenLevel(5,9);
VoicePlay("P740500001_05_020");
MsgDisp("Hiiragi","It's not an exhibition, 
it's a fashion show...That's something 
to keep in mind from now on, yes?");
MsgDisp("主人公","(Haa... I should have spent more
time doing club activities...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
