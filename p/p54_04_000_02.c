BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Yeah, I think it went better than last
year!)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChLayout(1);
ChNanaType(0);
ChOpen(4,254,0,0,4,#1,#1,0,0,0,60);
VoicePlay("P540400002_04_000");
MsgDisp("Nanatsumori","Amazingー...");
MsgDisp("主人公","Ah, ｛七ツ森＊｝.
It went well.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("P540400002_04_010");
MsgDisp("Nanatsumori","You were seriously skilled.
And your arrangement was super cool!");
MsgDisp("主人公","Hehe, that's because I gave it my best.");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("P540400002_04_020");
MsgDisp("Nanatsumori","I see. Yes. Everyone in the audience was
also super moved.");
MsgDisp("主人公","(Yay!
The fact they were moved to that extent
makes me happy!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
