BGOpen("wf100",0);
ScrFadeIn(0);
VoicePlay("D010300000_46_000");
MsgDisp("Clerk","Thanks for your patronage!");
MsgDisp("主人公","(Yeah, I think I got some good deals.)");
VoicePlay("D010300000_03_000");
MsgDisp("Honda?","Over here!");
MsgDisp("主人公","That voice is...");
MsgClose();
BGMPlay("BGM_C03_HONDA_A",0.01);
ChOpen(3,254,0,3,0,#1,#1,0,0,0,60);
MsgDisp("主人公","｛本多＊＊｝!
Are you out shopping?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("D010300000_03_010");
MsgDisp("Honda","Yeah.
I like to come here sometimes because my
roots are here.");
MsgDisp("主人公","｛本多＊＊｝'s roots?");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3);
VoicePlay("D010300000_03_020");
MsgDisp("Honda","Yepyep, want to see?
Okiedokie, come this way.");
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0,0);
ChClose(3);
SEWait();
StlOpen("ev_03_06");
StlEye(3,0);
StlMouth(3,0);
ScrFadeIn(0);
VoicePlay("D010300000_03_030");
MsgDisp("Honda","Look, right here.");
MsgDisp("主人公","The marble pillar?
Wow, that swirl pattern is beautiful.");
StlEye(3,1);
StlMouth(3,0);
VoicePlay("D010300000_03_040");
MsgDisp("Honda","Yep, that's the exact same reaction I had.
But you know, this isn't a pattern, it's a
fossil.");
MsgDisp("主人公","Eh?
Fossils, you mean like dinosaurs?");
StlEye(3,0);
StlMouth(3,0);
StlEyeOpenLevel(3,5,1);
VoicePlay("D010300000_03_050");
MsgDisp("Honda","Exactly. It's an ammonite from 150 million
years ago. Isn't that awesome?");
MsgDisp("主人公","Seriously?
Wow!");
StlEye(3,1);
StlMouth(3,0);
VoicePlay("D010300000_03_060");
MsgDisp("Honda","German marble has a lot more things hidden
inside of it like crinoids and belemnites.");
StlEye(3,1);
StlMouth(3,0);
StlEyeOpenLevel(3,0);
VoicePlay("D010300000_03_070");
MsgDisp("Honda","But you know, Ammonite-kun is special.
My mother introduced me to him when I was
in middle school.");
MsgDisp("主人公","Your mother?");
StlEye(3,0);
StlMouth(3,0);
VoicePlay("D010300000_03_080");
MsgDisp("Honda","That's right.
I was always reading books and then one
day she told me—"); 
MsgDisp("Honda","\"The outside world is more interesting
than pictures in a book!\"");
MsgDisp("主人公","Hehe, she sounds like a good mom.");
StlEye(3,0);
StlMouth(3,0);
StlEyeOpenLevel(3,5);
VoicePlay("D010300000_03_090");
MsgDisp("Honda","Yepyep. After that I started wanting to
confirm the things I learn by seeing and
touching them with my own eyes.");
BGMVol(0.5,2);
MsgClose();
ScrFadeOut(0);
StlClose();
MsgClose();
ChOpen(3,254,0,0,0,#1,#1,0,0,0,0);
ScrFadeIn(0);
MsgDisp("主人公","So ｛本多＊＊｝'s current lifestyle
was born from his mother's advice.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("D010300000_03_100");
MsgDisp("Honda","Right, because when you're teaching
someone, that kind of knowledge is more
interesting than the stuff in books.");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,4);
VoicePlay("D010300000_03_110");
MsgDisp("Honda","That's why I still come to see
Ammonite-kun from time to time.");
MsgDisp("主人公","I get it. For you, this is an important
place. Thanks for teaching me about it,
｛本多＊＊｝.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
VoicePlay("D010300000_03_120");
MsgDisp("Honda","Huh, what did I teach you?");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4);
VoicePlay("D010300000_03_130");
MsgDisp("Honda","... Wait.
I think you may be the first person I've
told this besides my sister...?");
MsgDisp("主人公","(Thank you, ｛本多＊＊｝.
For sharing your precious memories with
me.)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChClose(3,0,0);
ChPrmTblAdd(3,0);
