ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,0);
ScrFadeIn(0);
ChEye(22,1);
ChMouth(22,1);
ChMotion(22,2,1);
VoicePlay("P040D00001_22_000");
MsgDisp("Hikaru","......Uweh∋");
ChEyeOpenLevel(22,0);
MsgDisp("主人公","Hm?");
ChEye(21,2);
ChMouth(21,4);
ChMotion(21,4);
VoicePlay("P040D00001_21_000");
MsgDisp("Michiru","The tea...... bitter...... so bitter.");
ChEye(22,2);
MsgDisp("主人公","Um...... is something wrong?");
ChEye(22,2);
ChMouth(22,2);
ChMotion(22,0,1);
VoicePlay("P040D00001_22_010");
MsgDisp("Hikaru","I'll be blunt, okay?
...... It's bad.");
ChEye(21,4);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("P040D00001_21_010");
MsgDisp("Michiru","I think it'd be better to taste the tea
once before serving it to customers.
...... Okay?");
MsgDisp("主人公","(Ugh......
I messed up.
I should've prepared a little more......)");
MsgClose();
ScrFadeOut(0,0);
ChClose(21);
ChClose(22);
