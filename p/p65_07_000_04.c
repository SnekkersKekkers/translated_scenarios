MsgClose();
BGMPlay("BGM_FESTIVAL");
BGOpen("sc710",0);
ChOpen(7,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("P650700004_07_000");
MsgDisp("Mikage","Your vegetables sold out immediately!");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("P650700004_07_010");
MsgDisp("Mikage","Did you see the faces of the
people who bought some to take home?
You made them smile.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("P650700004_07_020");
MsgDisp("Mikage","And me too as well, yeah?");
MsgDisp("主人公","Hehe, yes!");
MsgDisp("主人公","(Yay, a huge success!
It was worth giving it my best.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
BGMStop();
