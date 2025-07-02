BGOpen("ne600",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,3,1);
ChEyeOpenLevel(5,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B030518000_05_000");
MsgDisp("Hiiragi","That scent is tempting.");
MsgDisp("主人公","What do you mean?");
ChEye(5,0);
ChMotion(5,0);
ChEyeOpenLevel(5,-1);
VoicePlay("B030518000_05_010");
MsgDisp("Hiiragi","Are you not phased by it?
The smell of popcorn.");
MsgDisp("主人公","No, I want to eat it!
Let's go buy some.");
MsgClose();
ScrFadeOut(0,0);
Wait(40,0);
BGOpen("ne610",0);
ChEye(5,0);
ChMouth(5,4);
ChLayout(1);
ScrFadeIn(0);
ChMouth(5,3);
ChMotion(5,4);
VoicePlay("B030518000_05_020");
MsgDisp("Hiiragi","How will they entertain us?
Let's see how they do.");
MsgDispSksp(1,0);
MsgDisp("主人公","Yep, I'm looking forward to it.");
MsgDispSksp(0);
MsgClose();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
