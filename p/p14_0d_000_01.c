BGOpen("sc721",0);
ChLayout(1);
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,0);
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,0);
ScrFadeIn(0);
VoicePlay("P140D00001_21_000");
MsgDisp("Michiru","That...");
MsgDisp("主人公","Ah.
Great work, you two!");
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,4,1);
VoicePlay("P140D00001_22_000");
MsgDisp("Hikaru","I'm not tired～.
Because, I didn't get lost.");
ChEye(21,4);
ChMouth(21,4);
ChMotion(21,4);
VoicePlay("P140D00001_21_010");
MsgDisp("Michiru","It's a bit much to call it a maze.
It was a bit crude, huh?");
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,2,1);
VoicePlay("P140D00001_22_010");
MsgDisp("Hikaru","I wanted to get lost properly in the
maze......");
MsgDisp("主人公","(Ugh... I should have made it so that it
was fun to play... huge mistake...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(21);
ChClose(22);
