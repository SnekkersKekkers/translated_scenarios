BGOpen("fp500",0);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChEye(5,3);
ChMouth(5,3);
ChMotion(5,3);
VoicePlay("B030511000_05_000");
MsgDisp("Hiiragi","This kind of swimming suits me well.
I'm enjoy myself.
What about you?");
MsgDispSksp(1,0);
MsgDisp("主人公","Yeah!");
MsgDispSksp(0);
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0);
ChClose(5,0,0);
MsgClose();
ChOpen(5,31,0,0,0,#1,#1,0,0,0,0);
