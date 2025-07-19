BGOpen("sc300",0);
ScrFadeIn(0);
SEPlay("EV_SE_DOOR_019");
SEWait();
VoicePlay("Z710700001_07_000");
MsgDisp("Mikage?","Yo, thanks for waiting.");
MsgClose();
ScrFadeOut(0);
BGOpen("sc320",0);
MsgClose();
BGMPlay("BGM_C07_MIKAGE_A",0.01);
ChOpen(7,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
SEPlay("EV_SE_GAYA_023",0.01,0.5);
SEPlay("EV_SE_863")MsgDisp("主人公","(Huh!?
｛御影＊＊｝ is my teacher again this
year!?)");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("Z710700001_07_010");
MsgDisp("Mikage","Ooh, what a good reaction.");
SEStop("EV_SE_GAYA_023",2);
SEStop("EV_SE_863",2)SEPlay("EV_SE_743",0.2,0.6)VoicePlay("Z710700001_44_000");
MsgDisp("School Girl","Yes!
I'm finally in Mikagecchi's class!");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("Z710700001_07_020");
MsgDisp("Mikage","I see, you're finally in.");
VoicePlay("Z710700001_42_010");
MsgDisp("Male Student","It's been two years in a row for me, you
know～?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("Z710700001_07_030");
MsgDisp("Mikage","Wow, isn't that great?");
VoicePlay("Z710700001_42_020");
MsgDisp("Male Student","You're saying that?");
SEPlay("EV_SE_GAYA_016",0,0.9);
MsgClose();
ScrFadeOut(0);
ChClose(7);
SEStop("EV_SE_GAYA_016",5);
SEPlay("EV_SE_067");
SEWait();
BGOpen("sc321",0);
ScrFadeIn(0);
Wait(60);
MsgClose();
SEPlay("EV_SE_544");
ChOpen(7,254,0,0,3,#1,#1,0,0);
VoicePlay("Z710700001_07_040");
MsgDisp("Mikage","My name is Mikage Kojiro.
Did everyone know that already?
Anyways, looking forward to this year.");
SEPlay("EV_SE_743");
SEPlay("EV_SE_863",0,0.7);
Wait(30,0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("Z710700001_07_050");
MsgDisp("Mikage","Hm, hm.
There are a few people that have been with
me for the past three years.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
SEStop("EV_SE_743",1);
VoiceEVSPlay(7);
VoicePlay("Z710700001_07_060");
MsgDisp("Mikage","｛主人公｝, the usual question, please.");
MsgDisp("主人公","Huh!?
Um...is Molly doing well?");
SEStop("EV_SE_863",1);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,4);
VoicePlay("Z710700001_07_070");
MsgDisp("Mikage","That's right.
This cow here is Molly, and she's part of
my family.");
VoicePlay("Z710700001_42_030");
MsgDisp("Male Student","Everyone knows that too.");
SEPlay("EV_SE_GAYA_023",0.01,0.5);
SEPlay("EV_SE_863",0,0.6);
SEPlay("EV_SE_864",0,0.9);
Wait(50,1);
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("Z710700001_07_080");
MsgDisp("Mikage","Hey, come on. There's no way that's true.
We have to go through this. Right?");
SEStop("EV_SE_GAYA_023",2);
SEStop("EV_SE_863",2);
SEStop("EV_SE_864",2);
MsgDisp("主人公","Hehe, yes.");
MsgClose();
BGMStop(2);
ScrFadeOut(0);
ChClose(7);
SEWait();
Wait(60);
BGOpen("sc300",0);
ScrFadeIn(0);
MsgDisp("主人公","(Finally, I've asked a question for all
three years.
It's going to be another great year...!)");
MsgClose();
ScrFadeOut(0,0);
