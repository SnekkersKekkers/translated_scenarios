BGOpen("ar200",0);
ScrFadeIn(0);
MsgDisp("主人公","｛氷室＊＊｝, good work today.
Do you want to walk home together?");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(6,35,1,0,0,#1,#1,0,0);
VoicePlay("G110601000_06_000");
MsgDisp("Himuro","I'm dropping by the beach today.");
MsgDisp("主人公","I'll come too, then.
Is that okay?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
ChEyeOpenLevel(6,0);
VoicePlay("G110601000_06_010");
MsgDisp("Himuro","It's okay but......
Ryota-senpai—— Ah, nevermind.");
MsgDisp("主人公","(｛風真＊＊｝?)");
MsgClose();
MsgClose();
ScrFadeOut(0);
ChClose(6,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev006",1);
BGMPlay("BGM_C06_INORI_I");
ChOpen(6,100,2,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110601000_06_020");
MsgDisp("Himuro","Ryota-senpai is really worried about you.");
MsgDisp("主人公","Eh, is that so?");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("G110601000_06_030");
MsgDisp("Himuro","......And it's unrequited.");
MsgDisp("主人公","Eh, in what way?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ChEyeOpenLevel(6,5);
VoicePlay("G110601000_06_040");
MsgDisp("Himuro","Well.
It's none of my business.");
MsgDisp("主人公","?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110601000_06_050");
MsgDisp("Himuro","Well, why don't you do your job properly?
That way, Ryota-senpai will feel more at
ease.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110601000_06_060");
MsgDisp("Himuro","He won't have to come all the way to check
on you.");
MsgDisp("主人公","He just happened to drop by though?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ChEyeOpenLevel(6,5);
VoicePlay("G110601000_06_070");
MsgDisp("Himuro","Do you really think that's the case?");
MsgDisp("主人公","Is it not?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("G110601000_06_080");
MsgDisp("Himuro","Well.
But if Ryota-senpai says it, that must be
the case right?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
VoicePlay("G110601000_06_090");
MsgDisp("Himuro","...... Geez.
What am I so worried for?");
MsgDisp("主人公","｛氷室＊＊｝?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110601000_06_100");
MsgDisp("Himuro","It's nothing.");
MsgDisp("主人公","(???)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
