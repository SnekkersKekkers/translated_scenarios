BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Yes, I was able to perform better than
last year!)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(5,254,0,4,4,#1,#1,0,0);
VoicePlay("P540500002_05_000");
MsgDisp("Hiiragi","Good work.
That was an enjoyable performance.
I'm beginning to like game music.");
MsgDisp("主人公","Yay!");
ChEye(5,3);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("P540500002_05_010");
MsgDisp("Hiiragi","Heheh.
There's a lot of people who are thinking
the same as me.");
MsgDisp("主人公","I'm happy.
It was worth giving it my best.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("P540500002_05_020");
MsgDisp("Hiiragi","On the back of the enjoyable music, are
your efforts from day after day.
Congratulations on the success!");
MsgDisp("主人公","Yes, thank you!");
MsgDisp("主人公","(｛柊＊＊＊｝ praised me!
I'm truly glad I gave it my best.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
