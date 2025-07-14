BGOpen("bh900",1);
BGMPlay("BGM_HANYOU_A",0.01);
ChLayout(1);
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,0);
ScrFadeIn(0);
MsgDisp("主人公","Sorry to disturb.
......Wow, nice room!");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("U110D00002_21_000");
MsgDisp("Michiru","Thank you.
Make yourself comfortable.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("U110D00002_22_000");
MsgDisp("Hikaru","Heyhey, Mari.
Let's eat snacks♪
And this tea is Hikaru's favorite!");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("bh900",2);
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,0);
ScrFadeIn(0);
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("U110D00002_22_010");
MsgDisp("Hikaru","Isn't it about time now for the main
performance?");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,4);
VoicePlay("U110D00002_21_010");
MsgDisp("Michiru","Hehe. Well then, when we're all ready for
bed, let's meet up in Mari's room. Okay?");
MsgClose();
BGMStop();
ScrFadeOut(0);
MsgClose();
ChClose(21,0,0);
ChClose(22,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
StlOpen("ev_0d_01");
StlEye(21,0);
StlMouth(21,0);
StlEye(22,0);
StlMouth(22,0);
StlCheek(22,0);
BGMPlay("BGM_C23_HIKARU_MICHIRU",0.01,0.9);
ScrFadeIn(0);
MsgDisp("主人公","......Hmm, that's a bit surprising.");
VoicePlay("U110D00002_21_020");
MsgDisp("Michiru","You mean Hikaru, right?
She's a different person at home compared
to how she is at school.");
StlEyeOpenLevel(22,5);
VoicePlay("U110D00002_22_020");
MsgDisp("Hikaru","You don't need to put on a persona at
home, right?
Well then, it's time for girl talk～♪");
StlEye(22,0);
MsgClose();
ChPrmTblAdd(21,1);
ChPrmTblAdd(22,1);
