BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B030206000_02_000");
MsgDisp("Sassa","The waves are calm, so I think we can go
out further.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("B030206000_02_010");
MsgDisp("Sassa","Alright,
Let's meet up here after changing.");
MsgDispSksp(1,0);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
MsgDisp("主人公","Okay.
Then see you soon!");
MsgDispSksp(0);
MsgClose();
ScrFadeOut(0);
ChClose(2,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChOpen(2,31,0,0,0,#1,#1,0,0,0,0);
