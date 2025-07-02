BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I'm glad!
Seems like my first performance 
was a huge success!)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(1,254,0,0,3,-1,-1,0,0);
VoicePlay("P540100000_01_000");
MsgDisp("Kazama","Congratulations.
Naturally you would get a 
standing ovation.");
MsgDisp("主人公","Yes, I'm super happy.
What did you think,｛風真＊＊｝?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("P540100000_01_010");
MsgDisp("Kazama","It was good.
...I was the first one to stand up.");
MsgDisp("主人公","(Yay!
I'm happy that ｛風真＊＊｝ seems happy!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
