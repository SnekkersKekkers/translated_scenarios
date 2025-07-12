BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Haa...
It didn't go smoothly...)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(7,254,0,0,0,#1,#1,0,0);
VoicePlay("P540700001_07_000");
MsgDisp("Mikage","Good work.");
MsgDisp("主人公","｛御影＊＊｝...
I alone, failed.
I feel so guilty for everyone...");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("P540700001_07_010");
MsgDisp("Mikage","I could tell that you
gave it your best effort.
...I think your friends could too.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("P540700001_07_020");
MsgDisp("Mikage","Right?");
MsgDisp("主人公","Yes...");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("P540700001_07_030");
MsgDisp("Mikage","Then, come and talk 
to everyone properly.");
MsgDisp("主人公","Yes.
｛御影＊＊｝, thank you very much.");
MsgDisp("主人公","(｛御影＊＊｝ had to cheer me up...
If only I had practiced more...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
