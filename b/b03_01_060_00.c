BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ScrFadeIn(0);
MsgDisp("主人公","After you change, let's meet up here.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B030106000_01_000");
MsgDisp("Kazama","You got it.
But no detours allowed, it's dangerous!");
MsgDispSksp(1,0);
MsgDisp("主人公","Jeez, ｛風真＊＊｝, all you do
is forbid things.");
MsgDispSksp(0);
MsgClose();
ScrFadeOut(0);
ChClose(1,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChOpen(1,31,0,0,0,#1,#1,0,0,0,0);
