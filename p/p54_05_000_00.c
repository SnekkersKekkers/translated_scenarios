BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I'm glad!
Seems like my first performance
went by smoothly!)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(5,254,0,3,4,-1,-1,0,0);
ChMotion(5,3);
Wait(20,0);
VoicePlay("P540500000_05_000");
MsgDisp("Hiiragi","Congratulations.
THe applause wouldn't quite stop.");
MsgDisp("主人公","Thank you ｛柊＊＊＊｝!");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("P540500000_05_010");
MsgDisp("Hiiragi","That's a nice smile.
And a wonderful performance.");
MsgDisp("主人公","Once I got on stage,
I started to feel calm.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("P540500000_05_020");
MsgDisp("Hiiragi","You're a strong performer.
And a strong-minded person.
Congratulations on the concert's success.");
MsgDisp("主人公","Thank you!");
MsgDisp("主人公","(Yay!｛柊＊＊＊｝ seems happy!
It was worth giving my all practicing.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
