BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Then, I'll go get changed.");
MsgDispSksp(1,0);
VoicePlay("B030506000_05_000");
MsgDisp("Hiiragi","I'll be waiting here. Be careful.");
MsgDispSksp(0);
MsgClose();
ScrFadeOut(0);
ChClose(5,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChOpen(5,31,0,0,0,-1,-1,0,0,0,0);
