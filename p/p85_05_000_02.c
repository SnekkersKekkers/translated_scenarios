BGMPlay("BGM_FESTIVAL",0.01);
BGOpen("sc710",0);
ChLayout(1);
MsgClose();
ChOpen(5,254,0,4,4,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","｛柊＊＊＊｝, good work.");
ChEye(5,3);
ChMouth(5,4);
ChMotion(5,3);
Wait(20,1);
VoicePlay("P850500002_05_000");
MsgDisp("Hiiragi","Yes, thank you for your hard work.
We received everyone's thanks.");
MsgDisp("主人公","Yeah, 
that's what I'm most happy about.
We were of help to everyone, huh.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("P850500002_05_010");
MsgDisp("Hiiragi","I too, was saved many times by your
tenacity and your smile...thank you.");
MsgDisp("主人公","(Yay! I was able to make a good memory of
the last cultural festival of my high
school life!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
