BGMStop();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ho000",0);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Thanks for walking me home.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("K020201000_02_000");
MsgDisp("Sassa","No problem.
......And, just wait a bit.");
MsgDisp("主人公","Hm? What is it?");
SEPlay("EV_SE_665");
SEWait();
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("K020201000_02_010");
MsgDisp("Sassa","Your birthday present.
Today really is a blessed day!");
MsgDisp("主人公","Wah......!
You remembered.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("K020201000_02_020");
MsgDisp("Sassa","I would never forget such a special day.");
MsgDisp("主人公","Hehe, thank you!");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("K020201000_02_030");
MsgDisp("Sassa","Well, see you at school.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(2);
Wait(30);
MsgDisp("主人公","(This year looks like it's going to be a
great year!
I'm glad.)");
MsgClose();
ScrFadeOut(0,0);
