BGOpen("tr220",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
MsgClose();
ChOpen(6,255,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("B050600200_06_000");
MsgDisp("Himuro","Ah...Over there. A pitch black cat is
sitting in the corner.");
MsgDisp("主人公","Oh, you're right.
Come here, kitty.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B050600200_06_010");
MsgDisp("Himuro","Leave it alone.
I'm sure it likes being alone.");
MsgDisp("主人公","But that's so lonely...");
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("B050600200_06_020");
MsgDisp("Himuro","Lonely...? So what? Are you going to stay
here for the rest of your life and play
with him?");
MsgDisp("主人公","Eh?");
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("B050600200_06_030");
MsgDisp("Himuro","You only hang out with him while you're
here, and then you leave when you're done.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B050600200_06_040");
MsgDisp("Himuro","Ah...");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B050600200_06_050");
MsgDisp("Himuro","Sorry, don't worry about it.
I'll go look at some other ones.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
MsgClose();
ChClose(6);
MsgDisp("主人公","(｛氷室＊＊｝...?)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ScrFadeIn(0);
MsgDisp("主人公","(I wonder where ｛氷室＊＊｝ went.
... Ah——)");
VoicePlay("B050600200_06_060");
MsgDisp("Himuro","... Come here.
It's okay.");
MsgClose();
ScrFadeOut(0);
BGMPlay("BGM_C06_INORI_B",0.01);
StlOpen("ev_06_04");
StlEye(6,0);
StlMouth(6,0);
ScrFadeIn(0);
VoicePlay("B050600200_06_070");
MsgDisp("Himuro","Hey.
Do you really like being alone that much?");
SEPlay("EV_SE_838");
SEWait();
MsgDisp("主人公","(That black cat...
It's the one hiding in the corner
earlier!)");
StlEye(6,0);
StlMouth(6,0);
VoicePlay("B050600200_06_080");
MsgDisp("Himuro","Well, I get it.
Being alone is easy.");
StlEye(6,0);
StlMouth(6,0);
VoicePlay("B050600200_06_090");
MsgDisp("Himuro","... But you know, deep down don't you want
friends too?
That's why I can't leave you alone there.");
SEPlay("EV_SE_839");
SEWait();
StlEye(6,0);
StlMouth(6,0);
StlEyeOpenLevel(6,5);
VoicePlay("B050600200_06_100");
MsgDisp("Himuro","It's true that we can only come here once
in a while.");
StlEye(6,0);
StlMouth(6,0);
VoicePlay("B050600200_06_110");
MsgDisp("Himuro","But...don't think badly of that person
from earlier, okay?");
MsgDisp("主人公","(That person...
He's talking about me, right?)");
StlEye(6,0);
StlMouth(6,0);
StlEyeOpenLevel(6,0);
VoicePlay("B050600200_06_120");
MsgDisp("Himuro","She's just living in the moment.
She doesn't mean any harm.");
StlEye(6,0);
StlMouth(6,0);
StlEyeOpenLevel(6,5,1);
VoicePlay("B050600200_06_130");
MsgDisp("Himuro","That's what makes it cruel, in a way.");
SEPlay("EV_SE_840");
SEWait();
StlEye(6,1);
StlMouth(6,1);
VoicePlay("B050600200_06_140");
MsgDisp("Himuro","... What?
You suddenly meowed.
Is that... sympathy?");
MsgDisp("主人公","Hehe.");
StlEye(6,2);
StlMouth(6,1);
StlCheek(6,10);
VoicePlay("B050600200_06_150");
MsgDisp("Himuro","Eh...");
BGMVol(0.5,2);
MsgClose();
ScrFadeOut(0);
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
Wait(60);
ScrFadeIn(0);
MsgClose();
ChOpen(6,255,4,0,0,#1,#1,5,0);
VoicePlay("B050600200_06_160");
MsgDisp("Himuro","...for how long have you been listening?");
MsgDisp("主人公","Uhm, from the moment you picked up the
kitty?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
ChEyeOpenLevel(6,0);
VoicePlay("B050600200_06_170");
MsgDisp("Himuro","Really, so you heard everything...
Forget it.");
MsgDisp("主人公","(Did I get to hear ｛氷室＊＊｝'s
true feelings?)");
BGMStop();
ChPrmTblAdd(6,0);
