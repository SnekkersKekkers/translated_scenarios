BGOpen("sc310",0);
ChLayout(1);
MsgClose();
ChOpen(1,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("D010100000_01_000");
MsgDisp("Kazama","Yo.");
MsgClose();
ScrFadeOut(0);
ChClose(1,0,0);
BGMPlay("BGM_C01_RYOUTA_A",0.01);
StlOpen("ev_01_07");
StlEye(1,0);
StlMouth(1,0);
ScrFadeIn(0);
VoicePlay("D010100000_01_010");
MsgDisp("Kazama","It looks like we're even in the same class
somehow.");
MsgDisp("主人公","Yep, that's really surprising, huh?");
StlEye(1,1);
VoicePlay("D010100000_01_020");
MsgDisp("Kazama","Right?
Well, I'm glad we're not also sitting next
to each other.");
MsgDisp("主人公","That would have been too much, I guess.");
StlEye(1,2);
StlEyeOpenLevel(1,5,1);
StlMouth(1,2);
Wait(30,1);
MsgClose();
ScrFadeOut(0);
StlClose();
BGOpen("sc310",0);
MsgClose();
ChOpen(1,254,0,0,2,8,#1,0,0);
ScrFadeIn(0);
VoicePlay("D010100000_01_030");
MsgDisp("Kazama","......\" Too much?\"
What's that supposed to mean?");
BGMStop(1.5);
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
Wait(40,0);
ChPrmTblAdd(1,0);
