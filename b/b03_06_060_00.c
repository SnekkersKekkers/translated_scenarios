BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0,1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Let's get changed, then.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("B030606000_06_000");
MsgDisp("Himuro","In 10 minutes let's meet up here.");
MsgDispSksp(1,0);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
MsgDisp("主人公","Okay! See you soon.");
MsgDispSksp(0);
MsgClose();
ScrFadeOut(0);
ChClose(6,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChOpen(6,31,0,0,0,-1,-1,0,0,0,0);
