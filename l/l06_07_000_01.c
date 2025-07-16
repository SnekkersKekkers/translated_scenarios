BGOpen("sc530",0);
BGMPlay("BGM_C07_MIKAGE_A");
MsgClose();
ChOpen(7,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoiceEVSPlay(7);
VoicePlay("L060700001_07_000");
MsgDisp("Mikage","｛主人公｝.");
MsgDisp("主人公","｛御影＊＊｝, what is it?");
SEPlay("EV_SE_664");
SEWait();
VoicePlay("l060700000_07_010");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
MsgDisp("Mikage","Thanks for the chocolate.
Take this in return.");
MsgDisp("主人公","Thank you very much!");
VoicePlay("l060700000_07_020");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
MsgDisp("Mikage","Well, I got it according to my sense, so
don't expect too much, okay?
See you.");
MsgClose();
BGMStop();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(7);
MsgDisp("主人公","(I got a return gift from
｛御影＊＊｝! I wonder
what it is? How exciting.)");
