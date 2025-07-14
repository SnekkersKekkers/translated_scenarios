BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B030306000_03_000");
MsgDisp("Honda","After we get changed, let's meet back up
here.");
ChEye(3,3);
ChMouth(3,5);
ChMotion(3,5);
VoicePlay("B030306000_03_010");
MsgDisp("Honda","Oh, the sand is starting to get hotter, so
watch out!");
MsgDispSksp(1,0);
MsgDisp("主人公","Okay!");
MsgDispSksp(0);
MsgClose();
ScrFadeOut(0);
ChClose(3,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChOpen(3,31,0,0,0,#1,#1,0,0,0,0);
