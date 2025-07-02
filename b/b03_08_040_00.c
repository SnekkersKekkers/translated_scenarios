BGOpen("wf400",0);
ChLayout(1);
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,0);
ScrFadeIn(0);
ChMotion(8,3,1);
VoicePlay("B030804000_08_000");
MsgDisp("Shirahane","I'm seriously lookin' forward to today's
show!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0);
ChClose(8,0,0);
BGOpen("wf410",0);
MsgClose();
ChOpen(8,255,0,4,3,-1,-1,0,0);
ScrFadeIn(0);
ChMotion(8,2);
VoicePlay("B030804000_08_010");
MsgDisp("Shirahane","The atmosphere before a show sure has it's
own vibe, huh...
I'm gettin' a little nervous...");
MsgDispSksp(1,0);
MsgDisp("主人公","Hehe.
Oh, looks like it's about to start!");
MsgDispSksp(0);
SEPlay("EV_SE_038");
SEWait();
MsgClose();
ScrFadeOut(0,0);
ChClose(8,0,0);
