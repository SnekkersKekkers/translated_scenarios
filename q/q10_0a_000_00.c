BGMPlay("BGM_PLACE_TRAVEL");
BGOpen("sc822",0);
MsgClose();
ChOpen(2,254,3,0,4,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("Q100A00000_02_000");
MsgDisp("Sassa","Huh, it really looks like glasses.");
MsgDisp("主人公","Yeah, they're round glasses.");
ChPosition(2,2);
MsgClose();
SEPlay("EV_SE_544");
ChOpen(1,254,0,4,3,#1,#1,0,1);
VoicePlay("Q100A00000_01_000");
MsgDisp("Kazama","Meticulously crafted.
The skill of the masonry craftsmen back
then was amazing.");
MsgDisp("主人公","Yeah, it doesn't look like such an old
bridge.");
VoicePlay("Q100A00000_46_000");
MsgDisp("School Girl","Yay!
I found the heart stone.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("Q100A00000_01_010");
MsgDisp("Kazama","Heart stone?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("Q100A00000_02_010");
MsgDisp("Sassa","A power stone or something?");
ChMotion(1,0);
MsgDisp("主人公","No, there's a heart-shaped stone on the
seawall and if you touch it, it's said
that your love will come true.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("Q100A00000_02_020");
MsgDisp("Sassa","Huh, seems like something girls would
like.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("Q100A00000_01_020");
MsgDisp("Kazama","Let's find that thing.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,4);
VoicePlay("Q100A00000_02_030");
MsgDisp("Sassa","You're getting excited.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("Q100A00000_01_030");
MsgDisp("Kazama","You know, the one who finds it first...
Get it?");
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
MsgClose();
ChClose(1,0,30);
ChPosition(2,0);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,5);
SEWait();
VoicePlay("Q100A00000_02_040");
MsgDisp("Sassa","Hey, false start!");
MsgDisp("主人公","Eh?");
VoicePlay("Q100A00000_01_040");
MsgDisp("Kazama","Wait here!
I'll find it first.");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
ChClose(2);
VoicePlay("Q100A00000_02_050");
MsgDisp("Sassa","My eyesight and legs are better than
yours!");
MsgDisp("主人公","(They're gone...)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc824",0);
MsgClose();
ChOpen(1,254,0,0,2,8,#1,0,1,0,30);
ChOpen(2,254,4,0,4,7,#1,0,2,0,30);
ScrFadeIn(0);
VoicePlay("Q100A00000_02_060");
MsgDisp("Sassa","Well, I guess the search for the heart
stone ends in a draw");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("Q100A00000_01_050");
MsgDisp("Kazama","Why would we touch it together?
I wonder what will happen to us.");
MsgDisp("主人公","Maybe that means we'll be friends forever?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("Q100A00000_01_060");
MsgDisp("Kazama","Forever, huh...");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("Q100A00000_02_070");
MsgDisp("Sassa","Good friends, huh?");
SEPlay("EV_SE_837");
SEWait();
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("Q100A00000_01_070");
MsgDisp("Kazama","Look, it's Inori.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,4);
VoicePlay("Q100A00000_02_080");
MsgDisp("Sassa","What good timing.
Maybe he's watching us somehow?");
MsgDisp("主人公","Hehe, it's lunchtime.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0,1);
VoicePlay("Q100A00000_01_080");
MsgDisp("Kazama","It says: \"Get me a mildly sweet castella.\"
At times like these, we're lucky he's so
straightforward.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,4,1);
VoicePlay("Q100A00000_02_090");
MsgDisp("Sassa","Yeah.
He's nice to his senpai.");
ChEye(1,0);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("Q100A00000_02_100");
MsgDisp("Sassa","Oh, yeah.
I should also go buy some stuff for home
and people I know.");
MsgDisp("主人公","Me too.
I wanna look for souvenirs to take home.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
VoicePlay("Q100A00000_01_090");
MsgDisp("Kazama","After we all buy our souvenirs, let's meet
here again.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,1);
VoicePlay("Q100A00000_02_110");
MsgDisp("Sassa","Roger that!");
MsgClose();
SEPlay("EV_SE_856");
ChClose(2,0,30);
ChClose(1,0,30);
MsgDisp("主人公","(Okay, let's start by buying a souvenir
for ｛氷室＊＊｝!)");
MsgClose();
ScrFadeOut(0);
