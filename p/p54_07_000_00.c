BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I'm glad!
It seems like my first performance was a
huge success!)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(7,254,0,0,0,#1,#1,0,0);
VoicePlay("P540700000_07_000");
MsgDisp("Mikage","You did well, that was splendid.");
MsgDisp("主人公","Ah, yes!
It's thanks to ｛御影＊＊｝.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("P540700000_07_010");
MsgDisp("Mikage","I had nothing to do with it.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("P540700000_07_020");
MsgDisp("Mikage","Alright, everyone is waiting.
Go rejoice with your friends.");
MsgDisp("主人公","Thank you very much!");
MsgDisp("主人公","(Hurray! I'm happy to be praised by
｛御影＊＊｝!");
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
