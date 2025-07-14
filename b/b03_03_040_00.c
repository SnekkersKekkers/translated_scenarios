BGOpen("wf400",0);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
ScrFadeIn(0);
VoicePlay("B030304000_03_000");
MsgDisp("Honda","It's like I can feel everyone's
anticipation.
Let's go!");
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0);
Wait(40);
BGOpen("wf410",0);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,4);
ScrFadeIn(0);
VoicePlay("B030304000_03_010");
MsgDisp("Honda","Our preparations are finished.
It's all good to start!");
MsgDispSksp(1,0);
MsgDisp("主人公","Hehe, yeah.");
MsgDispSksp(0);
SEPlay("EV_SE_038");
SEWait();
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
