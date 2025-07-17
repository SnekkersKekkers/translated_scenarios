MsgClose();
BGOpen("sc623",0);
ScrFadeIn(0);
ChOpen(7,254,0,0,0,#1,#1,0,0);
VoiceEVSPlay(7);
VoicePlay("H280700000_07_000");
MsgDisp("Mikage","｛主人公｝, our track team really
is strong.");
MsgDisp("主人公","Geez, please don't talk about it like
you're not involved at all.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,2);
VoicePlay("H280700000_07_010");
MsgDisp("Mikage","Haha, sorry for being such an
irresponsible advisor.
I can't do much other than cheer.");
MsgDisp("主人公","Your cheers will give everyone strength,
｛御影＊＊｝.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("H280700000_07_020");
MsgDisp("Mikage","You think?
As expected of our talented manager.
You even take care of my mental health.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("H280700000_07_030");
MsgDisp("Mikage","Alright, today's going to be busy.
Let's divide everyone into two groups for
cheering during the events, okay?");
MsgDisp("主人公","Hehe, okay!");
MsgDisp("主人公","(Let's support the players as best as we
can, and aim for an overall victory!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(7);
