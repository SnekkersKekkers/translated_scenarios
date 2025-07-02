BGOpen("ne600",0);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B030218000_02_000");
MsgDisp("Sassa","It's just about time.
Let's go.");
MsgClose();
ScrFadeOut(0,0);
ChEye(2,0);
ChMouth(2,4);
BGOpen("ne610",0);
Wait(40);
ScrFadeIn(0);
ChMotion(2,4);
VoicePlay("B030218000_02_010");
MsgDisp("Sassa","We have a straight on view to the front.
Pretty perfect, huh?");
MsgDispSksp(1,0);
MsgDisp("主人公","Yeah, seems like it.");
MsgDispSksp(0);
MsgClose();
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
