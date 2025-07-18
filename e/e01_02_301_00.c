BGOpen("wf100",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Alright, let's head home!)");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(2,255,3,0,3,#1,#1,0,1);
ChOpen(6,255,0,0,0,#1,#1,0,2);
VoicePlay("E010230100_02_000");
MsgDisp("Sassa","Huh, you too?");
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("E010230100_06_000");
MsgDisp("Himuro","I told you, that's not what I'm here for.");
MsgDisp("主人公","｛颯砂＊＊｝, ｛氷室＊＊｝!
What are you guys doing?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("E010230100_02_010");
MsgDisp("Sassa","There's a training goods sale.
That's what everyone's after, right?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("E010230100_06_010");
MsgDisp("Himuro","Nah, not really.
That's only you, Nozomu-senpai.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("E010230100_02_020");
MsgDisp("Sassa","You're not here for the sale either...");
MsgDisp("主人公","Y-Yeah...");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,2);
VoicePlay("E010230100_02_030");
MsgDisp("Sassa","But Inori was glued to store window,
looking like he really wanted something,
right?");
MsgDisp("主人公","Hehe, is that so?");
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("E010230100_06_020");
MsgDisp("Himuro","I told you, you're mistaken.
I was just curious.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,4);
VoicePlay("E010230100_02_040");
MsgDisp("Sassa","That's enough for me.
Come on, let's go inside together.
Come!");
MsgClose();
SEPlay("EV_SE_856");
MsgClose();
ChClose(2,0,30);
MsgClose();
ChClose(6,0,30);
VoicePlay("E010230100_06_030");
MsgDisp("Himuro","Hey!
Nozomu-senpai, it's fine!");
VoicePlay("E010230100_02_050");
MsgDisp("Sassa","Don't be shy.
Are you coming too-?");
MsgDisp("主人公","No, sorry!
You guys have fun!");
VoicePlay("E010230100_06_040");
MsgDisp("Himuro","Ahh, come on...");
MsgDisp("主人公","(Hehe!
｛氷室＊＊｝ looked a little
happy.)");
BGMStop();
MsgClose();
ScrFadeOut(0);
