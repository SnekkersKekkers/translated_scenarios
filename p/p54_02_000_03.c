BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Haaa... I messed up.
Maybe it was no good....)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(2,254,4,0,4,-1,-1,0,0);
VoicePlay("P540200003_02_000");
MsgDisp("Sassa","Good job.
Hey, there was a weird sound
in the middle, right?");
MsgDisp("主人公","Y-Yeah.
I missed a note....");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("P540200003_02_010");
MsgDisp("Sassa","Eh? So that's what it was...");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("P540200003_02_020");
MsgDisp("Sassa","Everyone in the audience was 
really happy that you recreated the 
sound of being shot down.");
MsgDisp("主人公","Ugh...
That's just a blunder...");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("P540200003_02_030");
MsgDisp("Sassa","I see.
Even if it was a mistake to you, 
the audience really enjoyed it.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("P540200003_02_040");
MsgDisp("Sassa","Well, it all comes down to whether
you're satisfied with it.");
MsgDisp("主人公","(I wanted to give a more
satisfying performance...
I didn't practice enough, huh.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
