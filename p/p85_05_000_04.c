BGMPlay("BGM_FESTIVAL",0.01);
BGOpen("sc710",0);
ChLayout(1);
MsgClose();
ChOpen(5,254,0,0,4,-1,-1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","｛柊＊＊＊｝, good work.");
ChEye(5,4);
ChMotion(5,4);
VoiceEVSPlay(5);
VoicePlay("P850500004_05_000");
MsgDisp("Hiiragi","｛主人公｝, well done.
As expected of you.");
MsgDisp("主人公","Thank you.
It was a huge success, right?");
ChEye(5,3);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("P850500004_05_010");
MsgDisp("Hiiragi","Yes. It seems that both everyone in the
student body, and the outside visitors
were very satisfied.");
MsgDisp("主人公","(Yay!
It was worth giving it my best)");
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
