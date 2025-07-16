BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Huh?
｛七ツ森＊｝ still isn't
here...");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgDisp("主人公","｛七ツ森＊｝, you're
late...");
VoicePlay("B110400002_35_000");
MsgDisp("?Boy","... Okay!
Then for tonight's meeting, we'll go to
the usual three star sushi restaurant!");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(35,254,0,1,0,#1,#1,0,0);
VoicePlay("B110400002_35_010");
MsgDisp("Guy","Well, well well! There are still more...
there are still more diamonds in the rough
in Habataki City!");
MsgDisp("主人公","...Eh?");
ChEye(35,2);
ChMouth(35,0);
VoicePlay("B110400002_35_020");
MsgDisp("Guy","Yes, come, today is a success too!
I've been producing in Habataki City for
decades, so leave it to me!");
ChEye(35,1);
ChMouth(35,0);
VoicePlay("B110400002_35_030");
MsgDisp("Guy","From today onwards you'll be singing and
dancing in an idol group, True Reversal
4——");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChPosition(35,2);
BGMPlay("BGM_C04_NANA_A",0.01);
MsgClose();
ChNanaType(#1);
ChOpen(4,253,0,1,0,#1,#1,0,1);
VoicePlay("B110400002_04_000");
MsgDisp("Nanatsumori","You sure are persistent...");
MsgDisp("主人公","｛七ツ森＊｝!");
VoicePlay("B110400002_35_040");
ChEye(35,2);
ChMouth(35,2);
MsgDisp("Guy","Huh? High school model Nana-kun? That's
you? Right?");
MsgDispSksp(1,5);
ChEye(4,0);
ChMouth(4,0);
VoicePlay("B110400002_04_010");
MsgDisp("Nanatsumori","Sure is.");
MsgDispSksp(0);
MsgDispSksp(1,5);
ChEye(4,0);
ChMouth(4,1);
ChMotion(4,1,1);
VoicePlay("B110400002_04_020");
MsgDisp("Nanatsumori","Hey you... If you keep doing stuff like
this here, our agency is going to file
another complaint, yeah?");
MsgDispSksp(0);
ChEye(35,1);
ChMouth(35,1);
VoicePlay("B110400002_35_050");
MsgDisp("Guy","Is that so... right, right!
This isn't really our turf so standing out
is a bit risky you know...");
MsgDispSksp(1,5);
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,0,1);
VoicePlay("B110400002_04_030");
MsgDisp("Nanatsumori","... Ah.
It's the company director.");
MsgDispSksp(0);
ChEye(35,1);
ChMouth(35,0);
VoicePlay("B110400002_35_060");
MsgDisp("Guy","Crap!
Then pass on my regards to your
president～!");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
ChClose(35,0,30);
SEWait();
ChPosition(4,0);
ChEye(4,0);
ChMouth(4,2);
ChMotion(4,2,1);
VoicePlay("B110400002_04_040");
MsgDisp("Nanatsumori","That old man is apparently an alumnus of
our school.");
MsgDisp("主人公","Ehh∋
He's kinda famous around here, right?
... Not exactly in a good way.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("B110400002_04_050");
MsgDisp("Nanatsumori","Yeah, but somehow he keeps climbing up the
ranks.
Guess even weeds can bloom into flowers...");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("B110400002_04_060");
MsgDisp("Nanatsumori","... Well, whatever.
Let's go.");
