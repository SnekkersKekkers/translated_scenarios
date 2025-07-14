BGOpen("ne330",0);
MsgClose();
ChOpen(6,255,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("B050600300_06_000");
MsgDisp("Himuro","That bear prize......
I've seen it around a lot lately.");
MsgDisp("主人公","Prize......?
Ah, it's a skullbear∈");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,0);
VoicePlay("B050600300_06_010");
MsgDisp("Himuro","The look in your eyes changed.
Do you maybe......want one?");
MsgDisp("主人公","Yeah!
But I can't get it——");
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("B050600300_06_020");
MsgDisp("Himuro","Don't think that.
You won't know unless you try.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(6);
MsgDisp("主人公","Eh, ｛氷室＊＊｝?");
SEPlay("EV_SE_501",0,0.9);
SEWait();
VoicePlay("B050600300_06_030");
MsgDisp("Himuro","......That's the one we're aiming for.
In that case, I'll get it in one try.");
MsgClose();
BGMPlay("BGM_C06_INORI_C",0.01);
ScrFadeOut(0);
StlOpen("ev_06_05");
StlEye(6,0);
StlMouth(6,0);
ScrFadeIn(0);
VoicePlay("B050600300_06_040");
MsgDisp("Himuro","I have it......!");
MsgDisp("主人公","Uwah, awesome!
You're really amazing, ｛氷室＊＊｝!");
StlEye(6,0);
StlMouth(6,0);
VoicePlay("B050600300_06_050");
MsgDisp("Himuro","Don't jump.
If it swings too much, it'll fall.");
MsgDisp("主人公","Ah......Sorry?");
StlEye(6,0);
StlMouth(6,0);
StlEyeOpenLevel(6,5);
VoicePlay("B050600300_06_060");
MsgDisp("Himuro","We're not in the clear yet.
Try to watch quietly.");
MsgDisp("主人公","Okay, got it!");
VoicePlay("B050600300_06_070");
MsgDisp("Himuro",".........You know.");
MsgDisp("主人公","Hmm?");
StlEye(6,1);
StlMouth(6,0);
StlCheek(6,10);
VoicePlay("B050600300_06_080");
MsgDisp("Himuro","You know, I didn't say to stare at my
face.");
MsgDisp("主人公","Ah......");
StlEye(6,1);
StlMouth(6,0);
StlEyeOpenLevel(6,0);
VoicePlay("B050600300_06_090");
MsgDisp("Himuro","It's really distracting, or I guess,
embarrassing......");
MsgDisp("主人公","Ah, ｛氷室＊＊｝!");
StlEye(6,0);
StlMouth(6,0);
StlCheek(6,0);
VoicePlay("B050600300_06_100");
MsgDisp("Himuro","Eh——");
BGMStop();
MsgClose();
ScrFadeOut(0);
StlClose();
Wait(30,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
Wait(60);
ScrFadeIn(0);
MsgDisp("主人公","Hmm......that was unfortunate.");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(6,255,2,2,0,0,#1,0,0);
VoicePlay("B050600300_06_110");
MsgDisp("Himuro","Haa......");
MsgDisp("主人公","Sorry? I shouldn't have said that I
wanted——");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(6);
MsgDisp("主人公","Eh, where are you going?");
VoicePlay("B050600300_06_120");
MsgDisp("Himuro","Wait there.
I'm going to exchange more money.");
MsgDisp("主人公","(Ehh! ｛氷室＊＊｝ wants to get revenge?)");
ChPrmTblAdd(6,0);
