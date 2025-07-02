BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ChNanaType(-1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,2,1);
ChEyeOpenLevel(4,8);
ScrFadeIn(0);
MsgDisp("主人公","After we change our clothes,
should we meet back up here?");
ChEyeOpenLevel(4,-1);
VoicePlay("B030406000_04_000");
MsgDisp("Nanatsumori","Okaaay...");
MsgDispSksp(1,0);
MsgDisp("主人公","Jeez, let's go!");
MsgDispSksp(0);
MsgClose();
ScrFadeOut(0);
ChClose(4,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChOpen(4,31,0,0,0,-1,-1,0,0,0,0);
