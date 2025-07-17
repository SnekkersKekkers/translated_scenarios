BGOpen("sc510",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(｛みちる＊｝ and
｛ひかる＊｝ are...
over there!)");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(21,254,0,0,0,#1,#1,0,1);
ChOpen(22,254,0,0,3,#1,#1,0,2);
MsgDisp("主人公","｛みちる＊｝, ｛ひかる＊｝!");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,3);
VoicePlay("K010D00100_21_000");
MsgDisp("Michiru","Mari.");
MsgDisp("主人公","Happy birthday, both of you!");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,5,1);
VoicePlay("K010D00100_22_000");
MsgDisp("Hikaru","You remembered?
That makes Hikaru so happy♪");
SEPlay("EV_SE_665");
SEWait();
MsgDisp("主人公","Here's a present.
I hope you'll like it...");
