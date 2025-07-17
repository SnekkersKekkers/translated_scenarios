MsgClose();
ScrFadeOut(0);
ChClose(5,0,0);
BGOpen("fp200",0);
ChLayout(1);
ChOpen(5,255,0,0,4,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("B050500200_05_000");
MsgDisp("Hiiragi","Where around here would the spring water
be?");
MsgDisp("主人公","Hmm...
｛柊＊＊＊｝, is there something
on your mind?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B050500200_05_010");
MsgDisp("Hiiragi","Yes. Desperate times call for desperate
measures. If only I had more power, I
could unify the theater company...");
MsgDisp("主人公","Eh?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("B050500200_05_020");
MsgDisp("Hiiragi","Don't worry, it's not that serious. Shall
we look around? I want to find the source
of the spring's energy.");
MsgDisp("主人公","S-Sure.");
MsgClose();
BGMStop();
SEPlay("EV_SE_767");
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
Wait(30,0);
VoiceEVSPlay(5);
VoicePlay("B050500200_05_030");
MsgDisp("Hiiragi","｛主人公｝, over there.
There are ripples on the surface of the
water.");
SEPlay("EV_SE_703");
SEWait();
MsgDisp("主人公","You're right.
｛柊＊＊＊｝, watch your step.");
SEPlay("EV_SE_703");
SEWait();
MsgClose();
BGMPlay("BGM_C05_HIIRAGI_B",0.01);
StlOpen("ev_05_04");
StlEye(5,0);
StlEyeOpenLevel(5,5);
StlMouth(5,0);
Wait(8,0);
SEPlay("EV_SE_607",0,0.8);
ScrFadeIn(0);
SEWait();
SEPlay("EV_SE_705",0,0.8);
SEWait();
VoicePlay("B050500200_05_040");
MsgDisp("Hiiragi","It's warm...");
StlEye(5,1);
StlMouth(5,1);
VoicePlay("B050500200_05_050");
MsgDisp("Hiiragi","Give me your hand.
Here, please give it a touch.");
MsgDisp("主人公","Sure.");
SEPlay("EV_SE_504",0.2);
SEWait();
StlEye(5,0);
StlEyeOpenLevel(5,5,1);
StlMouth(5,0);
VoicePlay("B050500200_05_060");
MsgDisp("Hiiragi","This is the energy source... I'm sure of
it. I can feel that gentle and warm
feeling in my palms.");
StlEyeOpenLevel(5,#1);
VoicePlay("B050500200_05_070");
MsgDisp("Hiiragi","...Hmm?");
MsgDisp("主人公","What's wrong?");
VoicePlay("B050500200_05_080");
MsgDisp("Hiiragi","This is strange.
I can feel it in my left hand as well as
my right hand.");
StlEye(5,1);
VoicePlay("B050500200_05_090");
MsgDisp("Hiiragi","The left...is coming from your hand...");
MsgDisp("主人公","Eh?");
MsgClose();
ScrFadeOut(0,0);
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("fp200",0);
MsgClose();
ChOpen(5,255,0,0,4,#1,#1,0,0);
BGMVol(0.5,2);
ScrFadeIn(0);
VoicePlay("B050500200_05_100");
MsgDisp("Hiiragi","Today I got great power, from both the
water and you.");
MsgDisp("主人公","Huh?
I don't think I have that sort of
ability...");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("B050500200_05_110");
MsgDisp("Hiiragi","No, I'm sure I felt it.
Yours is even stronger than the spring
water.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("B050500200_05_120");
MsgDisp("Hiiragi","Thank you. I suppose this gives me more of
the unifying power I need. Shall we leave?");
MsgDisp("主人公","Y-Yeah.");
MsgClose();
SEPlay("EV_SE_626");
BGMStop();
ChClose(5);
MsgDisp("主人公","(Unifying power...
I wonder if ｛柊＊＊＊｝ is
having some trouble at work...?)");
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(5,0);
