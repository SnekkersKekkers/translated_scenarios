MsgClose();
ChOpen(5,255,0,4,4,#1,#1,0,0);
VoicePlay("G020540000_05_000");
MsgDisp("Hiiragi","Recently something wonderful occurred.
It was regarding the theatre company.");
MsgDisp("主人公","What happened?");
ChEye(5,3);
VoicePlay("G020540000_05_010");
MsgDisp("Hiiragi","A 10-year-old boy came with his mother,
wanting to join the troupe.");
MsgDisp("主人公","Amazing!
But can elementary school students join
the theatre troupe?");
ChEye(5,0);
ChMotion(5,4);
VoicePlay("G020540000_05_020");
MsgDisp("Hiiragi","Of course, there's no problem at all.
I've been doing this since I was 2 years
old.");
MsgDisp("主人公","It'd be amazing if they could join.");
ChEye(5,4);
ChMotion(5,0);
VoicePlay("G020540000_05_030");
MsgDisp("Hiiragi","Yes.
Above all, I was moved that they entrusted
their small child to us.");
VoicePlay("G020540000_05_040");
MsgDisp("Hiiragi","We are gaining recognition as a community
theater group in Habataki City.");
MsgDisp("主人公","It's the results of ｛柊＊＊＊｝'s hard
work.");
ChEye(5,3);
VoicePlay("G020540000_05_050");
MsgDisp("Hiiragi","Yes, I hope to continue working hard so
that the citizens of Habataki City will
continue to recognize us.");
MsgDisp("主人公","And you've found a candidate for a future
leading actor?");
ChEye(5,4);
ChMotion(5,4);
VoicePlay("G020540000_05_060");
MsgDisp("Hiiragi","Heh, that's an entirely separate matter.
I still have. alot left in me, you know?");
MsgDisp("主人公","(I'm so happy ｛柊＊＊＊｝'s efforts are
starting to bare fruit!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
